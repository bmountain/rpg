#ifndef MONSTER_TYPE_H
#define MONSTER_TYPE_H

#include <map>
#include <string>

struct MonsterStats {
  int maxHp;
  int maxMp;
  std::string name;
  std::string aa;
};

/**
 * @brief モンスター種別一覧
 *
 */
enum class MonsterType { SLIME };

/**
 * @brief モンスター種別ごとのステータス
 *
 */
extern const std::map<MonsterType, MonsterStats> monster_map;

#endif /* MONSTER_TYPE_H */