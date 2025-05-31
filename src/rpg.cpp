#include "characterView.h"
#include "ftxui/component/component.hpp"
#include "ftxui/component/screen_interactive.hpp"
#include "monster.h"
#include "player.h"
#include <format>
#include <iostream>
#include <memory>
#include <string>

using namespace ftxui;

std::string get_message(const int n) { return std::format("selected {}", n); }

ftxui::Component get_message_box(const std::string &message)
{
  return Renderer([message]() {
    return hbox({text(message)}) | border;
  });
}

int main()
{
  auto player = std::make_shared<Player>(15, 15, 15, 15, "ゆうしゃ");
  auto slime = std::make_shared<Monster>(getMonsterStats(MonsterType::SLIME));

  auto statusBar = statusBarComponent(player);
  auto monsterView = monsterComponent(slime);

  // menu
  std::vector<std::string> entries = {"たたかう", "じゅもん", "にげる"};
  int selected = 0;
  auto message = get_message(selected);
  auto menu = Menu(&entries, &selected,
                   {.on_enter =
                        [&message, &selected]() {
                          message = get_message(selected);
                        }})
              | border;

  auto messageBox = Renderer([&message]() {
    return hbox({text(message)}) | border;
  });

  auto layout = Container::Vertical({statusBar, monsterView, menu, messageBox});
  auto screen = ScreenInteractive::FitComponent();
  screen.Loop(layout);
}