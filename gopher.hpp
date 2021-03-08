#ifndef __GOPHER_HPP__
#define __GOPHER_HPP__

#include "character.hpp"
#include <string>
using namespace std;

class ForbiddenGopher : public Character
{
    private:
      //string name;
      //int hp;
      //string block;
      //string attack;
      //string cc;
    
    public:
      //ForbiddenGopher(){
        string name = "gopher";
        int hp = 10;
        string armor = "super thick fur";
        string block = "forbidden mesh wire";
        string attack = "catastrophe";
        string cc = "mystic finisher";
       //}
      
      std::string get_name(){
        return name;
      }

      int get_hp(){
        return hp;
      }

      std::string get_block(){
        return armor;
      }

      std::string get_attack()
      {
        return attack;
      }

      std::string get_cc()
      {
        return cc;
      }
};

#endif //__FORBIDDENGOPHER_HPP__
