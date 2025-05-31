#ifndef GAME_STATE_H
#define GAME_STATE_H

#include "Monster.h"
#include "Player.h"
#include <memory>

class GameContext;

class GameState
{
public:
  virtual ~GameState() = default;
  virtual void enter(GameContext *context) = 0;
  virtual void exit(GameContext *context) = 0;
  virtual void update(GameContext *context) = 0;
};

#endif /* GAME_STATE_H */