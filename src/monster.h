#ifndef MONSTER_H
#define MONSTER_H

#include "character.h"
#include <string>

class Monster : public Character
{
  std::string _aa;

public:
  Monster(int hp, int maxHp, int mp, int maxMp, std::string name,
          std::string aa)
      : Character(hp, maxHp, mp, maxMp, name), _aa{aa} {};
  std::string aa() const { return _aa; }
};

#endif /* MONSTER__H_ */