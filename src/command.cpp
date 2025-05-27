#include "command.h"

Command shiftCommand(Command command, int n)
{
  int org = static_cast<int>(command);
  return static_cast<Command>((org + n) %
                              static_cast<int>(Command::NUM_COMMAND));
}

void CommandSelector::show() const
{
  for (const auto pair : commandMap) {
    if (selected == pair.first)
      std::cout << "＞";
    else
      std::cout << "　";
    std::cout << pair.second << std::endl;
  }
}

Command CommandSelector::select(void)
{
  char c;
  while (1) {
    show();
    std::cin >> c;
    switch (c) {
    case 's':
      selected = shiftCommand(selected, -1);
      break;
    case 'w':
      selected = shiftCommand(selected, -1);
      break;
    default:
      return selected;
    }
  }
}
