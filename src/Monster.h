#ifndef MONSTER_H
#define MONSTER_H

#include "Character.h"
#include "MonsterType.h"
#include <map>
#include <string>

class Monster : public Character
{
  std::string _aa;

public:
  Monster(int hp, int maxHp, int mp, int maxMp, std::string name,
          std::string aa)
      : Character(hp, maxHp, mp, maxMp, name), _aa{aa} {};

  Monster(MonsterStats parameter)
      : Monster(parameter.maxHp, parameter.maxHp, parameter.maxMp,
                parameter.maxMp, parameter.name, parameter.aa){};

  std::string aa() const { return _aa; }
};

/**
 * @brief モンスターのインスタンスを取得する
 *
 * @param monsterType
 * @return Monster
 */
Monster getMonsterStats(MonsterType monsterType);

#endif /* MONSTER_H */