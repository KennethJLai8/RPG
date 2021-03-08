#ifndef __CHARACTER_HPP__
#define __CHARACTER_HPP__

#include <string>

class Character {
  public:
    Character(){};
    virtual ~Character() = default;
    int hp;
    virtual std::string get_name() = 0;
    virtual int get_hp() = 0;
    virtual std::string get_block() = 0;
    virtual std::string get_attack() = 0;
    virtual std::string get_cc() = 0;
};

#endif //__CHARACTER_HPP__
