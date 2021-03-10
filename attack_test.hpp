#ifndef __ATTACK_TEST_HPP__
#define __ATTACK_TEST_HPP__


#include <iostream>
#include "gtest/gtest.h"
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
#include <sstream>

using namespace std;


TEST(AttackTest, GopherTest)
{
    Behavior move_selection;
    Character* gopher = new ForbiddenGopher;
    
    move_selection.set_selection(new Attack(gopher));
    
    stringstream s;
    move_selection.print(s);	
    
    EXPECT_EQ(s.str(), "gopher uses catastrophe\n");

}

TEST(AttackTest, TrollTest)
{
    Behavior move_selection;
    Character* troll = new GenericTroll();
    
    move_selection.set_selection(new Attack(troll));
    
    stringstream s;
    move_selection.print(s);
    
    EXPECT_EQ(s.str(), "troll uses rickroll\n");

}

TEST(AttackTest, ShrimpTest)
{
    Behavior move_selection;
    Character* shrimp = new PistolShrimp;
    
    move_selection.set_selection(new Attack(shrimp));
    
    stringstream s;
    move_selection.print(s);
    
    EXPECT_EQ(s.str(), "shrimp uses death claw\n");

}

TEST(AttackTest, KnightTest)
{
    Behavior move_selection;
    Character* knight = new ForbiddenKnight;
    
    move_selection.set_selection(new Attack(knight));
    
    stringstream s;
    move_selection.print(s);
    
    EXPECT_EQ(s.str(), "Forbiddenator uses Slice n Dice\n");

}

TEST(AttackTest, ArcherTest)
{
    Behavior move_selection;
    Character* archer = new ForbiddenArcher();
    
    move_selection.set_selection(new Attack(archer));
    
    stringstream s;
    move_selection.print(s);
    
    EXPECT_EQ(s.str(), "Arthur uses Piercing Arrow\n");

}

TEST(AttackTest, WizardTest)
{
    Behavior move_selection;
    Character* wizard = new ForbiddenWizard();
    
    move_selection.set_selection(new Attack(wizard));
    
    stringstream s;
    move_selection.print(s);
    
    EXPECT_EQ(s.str(), "Merlin uses lightning spell\n");

}

/*
 * TEST(AttackTest, NullTest)
 * {
 *     Behavior move_selection;
 *         Character* fail = nullptr;
 *             
 *                 move_selection.set_selection(new Attack(fail));
 *                     
 *                         stringstream s;
 *                             move_selection.print(s);
 *                                 
 *                                     EXPECT_TRUE(s.str() != nullptr);
 *                                     }
 *                                     */
#endif
