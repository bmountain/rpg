#include "battleScreen.h"
#include <format>
#include <iostream>
#include <string>

void drawPlayerStatus(Player player);
void drawMonster(Monster monster);

void drawBattleScreen(Player player, Monster monster)
{
  drawPlayerStatus(player);
  drawMonster(monster);
  std::cout << std::endl;
}

void drawPlayerStatus(Player player)
{
  std::string playerStatus =
      std::format("HP: {}/{} MP: {}/{}", player.hp(), player.maxHp(),
                  player.mp(), player.maxMp());
  std::cout << player.name() << std::endl;
  std::cout << playerStatus << std::endl;
}

void drawMonster(Monster monster)
{
  std::string monsterStatus =
      std::format("(HP: {}/{})", monster.hp(), monster.maxHp());
  std::cout << monster.aa() << monsterStatus;
}