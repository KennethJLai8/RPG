#ifndef__CC_TEST_HPP__
#define__CC_TEST_HPP__


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








TEST(CCTest, GopherTest)
{
    Behavior move_selection;
    Character* gopher = new ForbiddenGopher;
    
    move_selection.set_selection(new CC(gopher));
    
    stringstream s;
    
    EXPECT_EQ(move_selection.print(s), "mystic finisher");

}

TEST(CCTest, TrollTest)
{
    Behavior move_selection;
    Character* troll = new GenericTroll();
    
    move_selection.set_selection(new CC(troll));
    
    stringstream s;
    
    EXPECT_EQ(move_selection.print(s), "trollstice");

}

TEST(CCTest, ShrimpTest)
{
    Behavior move_selection;
    Character* shrimp = new PistolShrimp;
    
    move_selection.set_selection(new CC(shrimp));
    
    stringstream s;
    
    EXPECT_EQ(move_selection.print(s), "bubbles");

}

TEST(CCTest, KnightTest)
{
    Behavior move_selection;
    Character* knight = new ForbiddenKnight;
    
    move_selection.set_selection(new CC(knight));
    
    stringstream s;
    
    EXPECT_EQ(move_selection.print(s), "Charge");

}

TEST(CCTest, ArcherTest)
{
    Behavior move_selection;
    Character* archer = new ForbiddenArcher();
    
    move_selection.set_selection(new CC(archer));
    
    stringstream s;
    
    EXPECT_EQ(move_selection.print(s), "Scatter Arrow");

}

TEST(CCTest, WizardTest)
{
    Behavior move_selection;
    Character* wizard = new ForbiddenWizard();
    
    move_selection.set_selection(new CC(wizard));
    
    stringstream s;
    
    EXPECT_EQ(move_selection.print(s), "levitate");

}

TEST(CCTest, NullTest)
{
    Behavior move_selection;
    Character* fail = nullptr;
    
    move_selection.set_selection(new CC(fail));
    
    stringstream s;
    
    EXPECT_EQ(move_selection.print(s), nullptr);

}#endif
