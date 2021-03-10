#ifndef __BATTLE_TEST_HPP__
#define __BATTLE_TEST_HPP__

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
#include "gtest/gtest.h"

TEST(BattleTest, ConstructorTest) {
    Character* player = new ForbiddenKnight();
    Character* gopher = new ForbiddenGopher();
	int enemyHP = gopher->get_hp();
	int playerHP = player->get_hp();
    Battle* gopherBattle = new Battle(gopher, player, enemyHP, playerHP);

    std::stringstream s;
    std::stringstream test;

    test << gopher->get_name()<< " HP: " << enemyHP << "\n"
        << " Player HP: " << playerHP << "\n";
    gopherBattle->getHP(s);

    EXPECT_EQ(s.str(), test.str());
}

TEST(BattleTest, continueBattleTest) {
    Character* player = new ForbiddenKnight();
    Character* gopher = new ForbiddenGopher();
	int enemyHP = gopher->get_hp();
	int playerHP = player->get_hp();
    Battle* gopherBattle = new Battle(gopher, player, enemyHP, playerHP);

    EXPECT_EQ(gopherBattle->continueBattle(), true);
}

TEST(BattleTest, checkShrimpBattle) {
    Character* player = new ForbiddenKnight();
    Character* shrimp = new ForbiddenGopher();
	int enemyHP = 4;
	int playerHP = player->get_hp();
    Battle* gopherBattle = new Battle(shrimp, player, enemyHP, playerHP);

    std::stringstream s;
    std::stringstream test;

    gopherBattle->checkShrimpBattle(s);

    test << "";

    EXPECT_EQ(s.str(), test.str());
}


#endif //__BATTLE_TEST_HPP__
