#ifndef CHARACTER_H
#define CHARACTER_H

#include <memory>
#include <string>
#include <vector>

class Character
{
  const int hp_;
  const int maxHp_;
  const int mp_;
  const int maxMp_;
  const std::string name_;

public:
  Character(int hp, int maxHp, int mp, int maxMp, std::string name)
      : hp_{hp}, maxHp_{maxHp}, mp_{mp}, maxMp_{maxMp}, name_{name}
  {
  }
  int hp() const { return hp_; }
  int maxHp() const { return maxHp_; }
  int mp() const { return mp_; }
  int maxMp() const { return maxMp_; }
  std::string name() const { return name_; }
};

#endif /* CHARACTER_H */