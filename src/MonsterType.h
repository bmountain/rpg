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
static const std::map<MonsterType, MonsterStats> monster_map
    = {{MonsterType::SLIME, {3, 3, "スライム", "／・Д・＼\n～～～～～"}}};

#endif /* MONSTER_TYPE_H */