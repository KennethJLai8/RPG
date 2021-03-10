#ifndef __BATTLE_TEST_HPP__
#define __BATTLE_TEST_HPP__

#include "battle.hpp"
#include "character.hpp"
#include "knight.hpp"
#include "gopher.hpp"
#include <iostream>

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

#endif //__BATTLE_TEST_HPP__
