#ifndef BATTLE_H
#define BATTLE_H
#include "monster.h"
#include <format>
#include <iostream>
#include <string>

void Battle(Monster monster)
{
  std::string battleStartMessage =
      std::format("{}があらわれた！\n", monster.name());
  std::cout << battleStartMessage;
}

#endif /* BATTLE_H */