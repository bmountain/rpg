#ifndef CHARACTE_H
#define CHARACTE_H

#include <memory>
#include <string>
#include <vector>

class Character
{
  const int _hp;
  const int _maxHp;
  const int _mp;
  const int _maxMp;
  const std::string _name;

public:
  Character(int hp, int maxHp, int mp, int maxMp, std::string name)
      : _hp{hp}, _maxHp{maxHp}, _mp{mp}, _maxMp{maxMp}, _name{name}
  {
  }
  int hp() const { return _hp; }
  int maxHp() const { return _maxHp; }
  int mp() const { return _mp; }
  int maxMp() const { return _maxMp; }
  std::string name() const { return _name; }
};

#endif /* CHARACTE__H_ */