#ifndef BASE_TEST_HPP
#define BASE_TEST_HPP

#include "character.hpp"
#include "archer.hpp"
#include "knight.hpp"
#include "wizard.hpp"

#include "gtest/gtest.h"

#include <string>

//getNameTest

TEST(getNameTest, archerGetName) {
	Character* test = new Archer();
	EXPECT_EQ(test->get_name(), "Arthur");
}


TEST(getNameTest, knightGetName) {
	Character* test = new Knight();
	EXPECT_EQ(test->get_name(), "Forbiddenator");
}


TEST(getNameTest, wizardGetName) {
	Character* test = new Wizard();
	EXPECT_EQ(test->get_name(), "Merlin");
}

//getHpTest

TEST(getHpTest, archerGetHp) {
	Character* test = new Archer();
	EXPECT_EQ(test->get_hp(), 5);
}


TEST(getHpTest, knightGetHp) {
	Character* test = new Knight();
	EXPECT_EQ(test->get_hp(), 10);
}


TEST(getHpTest, wizardGetHp) {
	Character* test = new Wizard();
	EXPECT_EQ(test->get_hp(), 8);
}

//getBlockTest

TEST(getBlockTest, archerGetBlock) {
	Character* test = new Archer();
	EXPECT_EQ(test->get_block(), "dodge");
}


TEST(getBlockTest, knightGetBlock) {
	Character* test = new Knight();
	EXPECT_EQ(test->get_block(), "Shield");
}


TEST(getBlockTest, wizardGetBlock) {
	Character* test = new Wizard();
	EXPECT_EQ(test->get_block(), "barrier spell");
}


#endif
