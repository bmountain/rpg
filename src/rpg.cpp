#include "battleScreen.h"
#include "command.h"
#include "ftxui/component/component.hpp"
#include "ftxui/component/screen_interactive.hpp"
#include "monster.h"
#include "player.h"

int main()
{
  using namespace ftxui;
  auto screen = ScreenInteractive::FitComponent();

  Player player{15, 15, 15, 15, "ゆうしゃ"};
  Monster monster{3, 3, 0, 0, "スライム", "／・Д・＼\n～～～～～"};
  CommandSelector selector;
  drawBattleScreen(player, monster);
  selector.select();
}
