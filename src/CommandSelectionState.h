#ifndef COMMAND_SELECTION_STATE_H
#define COMMAND_SELECTION_STATE_H

#include "GameState.h"

class CommandSelectionState : public GameState
{
public:
  void enter(GameContext *context) override {}
  void exit(GameContext *context) override {}
  void update(GameContext *context) override {}
};

#endif /* COMMAND_SELECTION_STATE_H */