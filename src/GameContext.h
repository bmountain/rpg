#ifndef GAME_CONTEXT_H
#define GAME_CONTEXT_H

#include "GameState.h"
#include <memory>

class GameContext
{
private:
  std::shared_ptr<GameState> state_;
  std::shared_ptr<Player> player_;
  std::shared_ptr<Monster> monster_;

public:
  GameContext();
  void ChangeState(std::shared_ptr<GameState> newState);
};

#endif /* GAME_CONTEXT_H */