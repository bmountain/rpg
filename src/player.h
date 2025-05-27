#ifndef PLAYER_H
#define PLAYER_H
#include "character.h"

class Player : public Character
{
public:
  Player(int hp, int maxHp, int mp, int maxMp, std::string name)
      : Character(hp, maxHp, mp, maxMp, name){};
};

#endif /* PLAYER__H_ */