#ifndef COMMAND_H
#define COMMAND_H

#include <iostream>
#include <map>
#include <string>
#include <utility>
#include <vector>

enum class Command { FIGHT, SPELL, RUN, NUM_COMMAND };

class CommandSelector
{
  const std::map<Command, std::string> commandMap{{Command::FIGHT, "たたかう"},
                                                  {Command::SPELL, "じゅもん"},
                                                  {Command::RUN, "にげる"}};
  Command selected;

public:
  CommandSelector() : selected{Command::FIGHT} {};
  Command select();

private:
  /**
   * @brief コマンド選択画面の描画
   *
   */
  void show() const;
};

#endif