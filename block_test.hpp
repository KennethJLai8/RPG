#ifndef__BLOCK_TEST_HPP__
#define__BLOCK_TEST_HPP__




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





TEST(BlockTest, GopherTest)
{
    Behavior move_selection;
    Character* gopher = new ForbiddenGopher;
    
    move_selection.set_selection(new Block(gopher));
    
    stringstream s;
    
    EXPECT_EQ(move_selection.print(s), "forbidden mesh wire");

}

TEST(BlockTest, TrollTest)
{
    Behavior move_selection;
    Character* troll = new GenericTroll();
    
    move_selection.set_selection(new Block(troll));
    
    stringstream s;
    
    EXPECT_EQ(move_selection.print(s), "Club");

}

TEST(BlockTest, ShrimpTest)
{
    Behavior move_selection;
    Character* shrimp = new PistolShrimp;
    
    move_selection.set_selection(new Block(shrimp));
    
    stringstream s;
    
    EXPECT_EQ(move_selection.print(s), "Harden");

}

TEST(BlockTest, KnightTest)
{
    Behavior move_selection;
    Character* knight = new ForbiddenKnight;
    
    move_selection.set_selection(new Block(knight));
    
    stringstream s;
    
    EXPECT_EQ(move_selection.print(s), "Shield");

}

TEST(BlockTest, ArcherTest)
{
    Behavior move_selection;
    Character* archer = new ForbiddenArcher();
    
    move_selection.set_selection(new Block(archer));
    
    stringstream s;
    
    EXPECT_EQ(move_selection.print(s), "dodge");

}

TEST(BlockTest, WizardTest)
{
    Behavior move_selection;
    Character* wizard = new ForbiddenWizard();
    
    move_selection.set_selection(new Block(wizard));
    
    stringstream s;
    
    EXPECT_EQ(move_selection.print(s), "barrier spell");

}

TEST(BlockTest, NullTest)
{
    Behavior move_selection;
    Character* fail = nullptr;
    
    move_selection.set_selection(new Block(fail));
    
    stringstream s;
    
    EXPECT_EQ(move_selection.print(s), "nullptr");

}#endif

