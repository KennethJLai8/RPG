#ifndef __CC_TEST_HPP__
#define __CC_TEST_HPP__

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

TEST(CCTest, GopherCCTest)
{   
    Behavior move_selection;
    Character* gopher = new ForbiddenGopher;
    
    move_selection.set_selection(new CC(gopher));
    
    stringstream s;
    move_selection.print(s);
    
    EXPECT_EQ(s.str(), " Forbidden Gopher uses mystic finisher\n");

}

TEST(CCTest, TrollCCTest)
{   
    Behavior move_selection;
    Character* troll = new GenericTroll();
    
    move_selection.set_selection(new CC(troll));
    
    stringstream s;
    move_selection.print(s);
    
    EXPECT_EQ(s.str(), " Troll uses trollstice\n");

}

TEST(CCTest, ShrimpCCTest)
{   
    Behavior move_selection;
    Character* shrimp = new PistolShrimp;
    
    move_selection.set_selection(new CC(shrimp));
    
    stringstream s;
    move_selection.print(s);
    
    EXPECT_EQ(s.str(), " Shrimp uses bubbles\n");

}

TEST(CCTest, KnightCCTest)
{
    Behavior move_selection;
    Character* knight = new ForbiddenKnight;

    move_selection.set_selection(new CC(knight));

    stringstream s;
    move_selection.print(s);

    EXPECT_EQ(s.str(), "Forbiddenator uses Charge\n");

}

TEST(CCTest, ArcherCCTest)
{
    Behavior move_selection;
    Character* archer = new ForbiddenArcher();

    move_selection.set_selection(new CC(archer));

    stringstream s;
    move_selection.print(s);

    EXPECT_EQ(s.str(), "Arthur uses Scatter Arrow\n");

}

TEST(CCTest, WizardCCTest)
{
    Behavior move_selection;
    Character* wizard = new ForbiddenWizard();

    move_selection.set_selection(new CC(wizard));

    stringstream s;
    move_selection.print(s);

    EXPECT_EQ(s.str(), "Merlin uses levitate\n");

}








/*
 * TEST(CCTest, NullTest)
 * {
 *     Behavior move_selection;
 *         Character* fail = nullptr;
 *             
 *                 move_selection.set_selection(new CC(fail));
 *                     
 *                         stringstream s;
 *                             move_selection.print(s);
 *                                 
 *                                     EXPECT_EQ(s.str(), nullptr);
 *                                     }
 *                                     */
#endif
