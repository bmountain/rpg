#include "characterView.h"
#include "ftxui/component/component.hpp"
#include "monster.h"
#include "player.h"
using namespace ftxui;

ftxui::Element statusElement(const Player &player)
{
  auto status = std::string{player.name()} + " "
                + std::format("HP:{}/{} MP:{}/{}", player.hp(), player.maxHp(),
                              player.mp(), player.maxMp());
  return ftxui::text(status);
}

Component statusBarComponent(std::shared_ptr<const Player> player)
{
  return Renderer([player]() {
    return hbox({statusElement(*player) | flex | border});
  });
}

ftxui::Element statusElement(const Monster &monster)
{
  auto status = std::string{monster.name()} + " "
                + std::format("HP:{}/{}", monster.hp(), monster.maxHp());
  return ftxui::text(status);
}

Element monsterAAElement(const Monster &monster)
{
  Elements output;
  std::stringstream ss(monster.aa());
  std::string line;
  while (std::getline(ss, line))
    output.push_back(text(line));
  return vbox(output);
}

Component monsterComponent(std::shared_ptr<const Monster> monster)
{
  return Renderer([monster]() {
    return vbox({statusElement(*monster), text(""),
                 monsterAAElement(*monster) | center})
           | border;
  });
}
