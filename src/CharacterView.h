#ifndef CHARACTER_VIEW_H
#define CHARACTER_VIEW_H

#include "Monster.h"
#include "Player.h"
#include "ftxui/component/component.hpp"
using namespace ftxui;

// ---------- プレイヤー --------------

/**
 * @brief プレイヤーのステータスのテキストを取得
 *
 * @param character
 * @return ftxui::Element
 */
ftxui::Element statusElement(const Player &player);

/**
 * @brief ステータスバー表示領域を取得
 *
 * @param player
 * @return Component
 */
Component statusBarComponent(std::shared_ptr<const Player> player);

// ------------ モンスター -----------

/**
 * @brief モンスターのステータスのテキストを取得
 *
 * @param monster
 * @return ftxui::Element
 */
ftxui::Element statusElement(const Monster &monster);

/**
 * @brief モンスターのAAテキストを取得
 *
 * @param monster
 * @return Element
 */
Element monsterAAElement(const Monster &monster);

/**
 * @brief モンスターの表示領域を取得
 *
 * @param monster
 * @return Component
 */
Component monsterComponent(std::shared_ptr<const Monster> monster);

#endif /* CHARACTER_VIEW_H */