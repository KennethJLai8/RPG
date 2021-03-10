#ifndef __BLOCK_TEST_HPP__
#define __BLOCK_TEST_HPP__


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

TEST(BlockTest, GopherBlockTest)
{   
    Behavior move_selection;
    Character* gopher = new ForbiddenGopher;
    
    move_selection.set_selection(new Block(gopher));
    
    stringstream s;
    move_selection.print(s);
    
    EXPECT_EQ(s.str(), "gopher uses super thick fur\n");

}

TEST(BlockTest, TrollBlockTest)
{   
    Behavior move_selection;
    Character* troll = new GenericTroll();
    
    move_selection.set_selection(new Block(troll));
    
    stringstream s;
    move_selection.print(s);
    
    EXPECT_EQ(s.str(), "troll uses Club\n");

}

TEST(BlockTest, ShrimpBlockTest)
{   
    Behavior move_selection;
    Character* shrimp = new PistolShrimp;
    
    move_selection.set_selection(new Block(shrimp));
    
    stringstream s;
    move_selection.print(s);
    
    EXPECT_EQ(s.str(), "shrimp uses Harden\n");

}

TEST(BlockTest, KnightBlockTest)
{
    Behavior move_selection;
    Character* knight = new ForbiddenKnight;

    move_selection.set_selection(new Block(knight));

    stringstream s;
    move_selection.print(s);

    EXPECT_EQ(s.str(), "Forbiddenator uses Shield\n");

}

TEST(BlockTest, ArcherBlockTest)
{
    Behavior move_selection;
    Character* archer = new ForbiddenArcher();

    move_selection.set_selection(new Block(archer));

    stringstream s;
    move_selection.print(s);

    EXPECT_EQ(s.str(), "Arthur uses dodge\n");

}

TEST(BlockTest, WizardBlockTest)
{
    Behavior move_selection;
    Character* wizard = new ForbiddenWizard();

    move_selection.set_selection(new Block(wizard));

    stringstream s;
    move_selection.print(s);

    EXPECT_EQ(s.str(), "Merlin uses barrier spell\n");

}




/*
 * TEST(BlockTest, NullTest)
 * {
 *     Behavior move_selection;
 *         Character* fail = nullptr;
 *             
 *                 move_selection.set_selection(new Block(fail));
 *                     
 *                         stringstream s;
 *                             move_selection.print(s);
 *                                 
 *                                     EXPECT_EQ(s.str(), "nullptr");
 *                                     }
 *                                     */
#endif
