#include "Monster.h"

/**
 * @brief モンスターのインスタンスを取得する
 *
 * @param monsterType
 * @return Monster
 */
Monster getMonsterStats(MonsterType monsterType)
{
  auto monster_stat = monster_map.at(monsterType);
  return Monster(monster_stat);
}
