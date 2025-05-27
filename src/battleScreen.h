#ifndef BATTLE_SCREENH
#define BATTLE_SCREENH

#include "monster.h"
#include "player.h"
#include <format>
#include <string>

/**
 * @brief 画面描画
 *
 * @param player
 * @param monster
 */
void drawBattleScreen(Player player, Monster monster);

#endif /* BATTLE_SCREEN_H_ */