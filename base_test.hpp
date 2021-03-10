#ifndef __BASE_TEST_HPP__
#define __BASE_TEST_HPP__

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
//getHpTests should fail as the hp values were changed for the demo

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

//getAttackTest

TEST(getAttackTest, archerGetAttack) {
	Character* test = new Archer();
	EXPECT_EQ(test->get_attack(), "Piercing Arrow");
}


TEST(getAttackTest, knightGetAttack) {
	Character* test = new Knight();
	EXPECT_EQ(test->get_attack(), "Slice n Dice");
}


TEST(getAttackTest, wizardGetAttack) {
	Character* test = new Wizard();
	EXPECT_EQ(test->get_attack(), "lightning spell");
}

//getCCTest

TEST(getCCTest, archerGetCC) {
	Character* test = new Archer();
	EXPECT_EQ(test->get_cc(), "Scatter Arrow");
}


TEST(getCCTest, knightGetCC) {
	Character* test = new Knight();
	EXPECT_EQ(test->get_cc(), "Charge");
}


TEST(getCCTest, wizardGetCC) {
	Character* test = new Wizard();
	EXPECT_EQ(test->get_cc(), "levitate");
}

#endif
