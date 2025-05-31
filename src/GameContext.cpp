#include "GameContext.h"

void GameContext::ChangeState(std::shared_ptr<GameState> newState)
{
  state_->exit(this);
  state_ = newState;
  state_->enter(this);
}
