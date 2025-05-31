#include "ftxui/component/component.hpp"
#include "ftxui/component/screen_interactive.hpp"
#include "monster.h"
#include "player.h"
#include <format>
#include <iostream>
#include <memory>
#include <string>

using namespace ftxui;

ftxui::Element status_text(const Character &character)
{
  auto status
      = std::string{character.name()} + " "
        + std::format("HP:{}/{} MP:{}/{}", character.hp(), character.maxHp(),
                      character.mp(), character.maxMp());
  return ftxui::text(status);
}

std::string get_message(const int n) { return std::format("selected {}", n); }

ftxui::Component get_message_box(const std::string &message)
{
  return Renderer([message]() {
    return hbox({text(message)}) | border;
  });
}

Component get_status_bar(const Player &player)
{
  return Renderer([player]() {
    return hbox({status_text(player) | flex | border});
  });
}

Element get_monster_aa(const Monster &monster)
{
  Elements output;
  std::stringstream ss(monster.aa());
  std::string line;
  while (std::getline(ss, line))
    output.push_back(text(line));
  return vbox(output);
}

Component get_monster_view(const Monster &monster)
{
  return Renderer([monster]() {
    return vbox({status_text(monster), text(""),
                 get_monster_aa(monster) | center})
           | border;
  });
}

int main()
{
  auto player = std::make_shared<Player>(15, 15, 15, 15, "ゆうしゃ");
  auto slime = std::make_shared<Monster>(getMonsterStats(MonsterType::SLIME));

  auto statusBar = get_status_bar(*player);
  auto monsterView = get_monster_view(*slime);

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