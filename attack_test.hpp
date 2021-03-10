#ifndef __ATTACK_TEST_HPP__
#define __ATTACK_TEST_HPP__




#include "attack.hpp"
#include "behavior.hpp"
#include "block.hpp"
#include "cc.hpp"
#include "character.hpp"
#include "knight.hpp"
#include "archer.hpp"
#include "wizard.hpp"
#include "gopher.hpp"
#include "narrative.hpp"
#include "troll.hpp"
#include "EMS.hpp"
#include "shrimp.hpp"
#include "battle.hpp"
#include <string>

using namespace std;


TEST(AttackTest, GopherTest)
{
    Behavior move_selection;
    Character* gopher = new ForbiddenGopher;
    
    move_selection.set_selection(new Attack(gopher));
    
    stringstream s;
    
    EXPECT_EQ(move_selection.print(s), "catastrophe");

}

TEST(AttackTest, TrollTest)
{
    Behavior move_selection;
    Character* troll = new GenericTroll();
    
    move_selection.set_selection(new Attack(troll));
    
    stringstream s;
    
    EXPECT_EQ(move_selection.print(s), "rickroll");

}

TEST(AttackTest, ShrimpTest)
{
    Behavior move_selection;
    Character* shrimp = new PistolShrimp;
    
    move_selection.set_selection(new Attack(shrimp));
    
    stringstream s;
    
    EXPECT_EQ(move_selection.print(s), "death claw");

}

TEST(AttackTest, KnightTest)
{
    Behavior move_selection;
    Character* knight = new ForbiddenKnight;
    
    move_selection.set_selection(new Attack(knight));
    
    stringstream s;
    
    EXPECT_EQ(move_selection.print(s), "Slice n Dice");

}

TEST(AttackTest, ArcherTest)
{
    Behavior move_selection;
    Character* archer = new ForbiddenArcher();
    
    move_selection.set_selection(new Attack(archer));
    
    stringstream s;
    
    EXPECT_EQ(move_selection.print(s), "Piercing Arrow");

}

TEST(AttackTest, WizardTest)
{
    Behavior move_selection;
    Character* wizard = new ForbiddenWizard();
    
    move_selection.set_selection(new Attack(wizard));
    
    stringstream s;
    
    EXPECT_EQ(move_selection.print(s), "lightning spell");

}

TEST(AttackTest, NullTest)
{
    Behavior move_selection;
    Character* fail = nullptr;
    
    move_selection.set_selection(new Attack(fail));
    
    stringstream s;
    
    EXPECT_EQ(move_selection.print(s), "nullptr");

}#endif
