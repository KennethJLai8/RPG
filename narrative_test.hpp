#ifndef __NARRATIVE_TEST_HPP__
#define __NARRATIVE_TEST_HPP__

#include <string>
#include "narrative.hpp"
#include <iostream>
#include "gtest/gtest.h"


TEST(NarrativeTest, introTest) {
    std::string player = "frog";
    Narrative* story = new Narrative(player);

    std::stringstream s;
    std::stringstream test;
    test << "\n INTRODUCTION \n"
        << " In a period of civil war in the kingdom. A brave alliance"
        << " \n of underground freedom fighters has challenged the"
        << " tyranny\n and oppression of the forbidden kingdom."
        << " Striking from a\n shack hidden among the trees in"
        << " wilderness, the forbidden\n brotherhood has won their"
        << " first victory in a battle with\n the powerful imperial"
        << " guard. The kingdom that another\n defeat could bring more"
        << " forest folk into the rebellion,\n and control of the"
        << " kingdom would be lost forever." << "\n \n";
    story->intro(s);

    EXPECT_EQ(s.str(), test.str());
}

TEST(NarrativeTest, welcomeTest) {
    std::string player = "frog";
    Narrative* story = new Narrative(player);

    std::stringstream s;
    std::stringstream test;

    test << " The kingdom has not always been like this. Long ago an"
        << " evil\n spirit possessed the king and banished the"
        << " forbidden\n brotherhood from the kingdom. They reconvened"
        << " in the middle\n of the Forest of Forbiddenness to form a"
        << " rebellion. They\n chose " << player << " as their leader."
        << " Now the chosen one\n must lead the fight to take back the"
        << " kingdom and rescue\n Princess Pineapple. " << player
        << " will face the Forbidden\n Gopher and the Generic Troll"
        << " before finally facing the\n Pistol Shrimp spirit who"
        << " controls the king." << "\n \n";
    story->welcome(s);

    EXPECT_EQ(s.str(), test.str());
}

TEST(NarrativeTest, battleTest) {
    std::string player = "frog";
    Narrative* story = new Narrative(player);

    std::stringstream s;
    std::stringstream test;
    test << " Forbidden Gopher: Who disturbs my slumber?" << "\n"
        << " " << player << ": Your slumber? How can you even sleep in"
        << " this\n     cold. I hate winter! I'm so tired of being"
        << " cold. You're\n     that stupid groundhog gopher guy, huh?"
        << " Why can't you\n     just see your shadow, so we can see"
        << " some sunshine?\n"
        << " Forbidden Gopher: I'm blind you jerk! You have woken me up"
        << "\n     from my slumber and now you must die!\n";
    story->gopherBattleDialogue(s);

    EXPECT_EQ(s.str(), test.str());
}

TEST(NarrativeTest, randomBattleDialogueTest1) {
    std::string player = "frog";
    std::string enemy = "troll";
    Narrative* story = new Narrative(player);

    std::stringstream s;
    std::stringstream test;
    test << enemy << ": Do you think even the worst person can change?\n"
        << " That everybody can be a good person, if they just"
        << " try?\n Look. I gave up trying to go back a long"
        << "time ago.";
    story->battleDialogue1(s, enemy);

    EXPECT_EQ(s.str(), test.str());
}

TEST(NarrativeTest, randomBattleDialogueTest2) {
    std::string player = "frog";
    std::string enemy = "troll";
    Narrative* story = new Narrative(player);

    std::stringstream s;
    std::stringstream test;
    test << enemy << ": Do you wanna have a bad time?\n 'Cause if you take"
        << "another step forward. . .\n You are REALLY not"
        <<  " going to like what happens next.\n";
    story->battleDialogue2(s, enemy);

    EXPECT_EQ(s.str(), test.str());
}

TEST(NarrativeTest, epilogueTest) {
    std::string player = "frog";
    Narrative* story = new Narrative(player);

    std::stringstream s;
    std::stringstream test;
    test << " Everyone lived happily ever after. The End\n";
    story->epilogue(s);

    EXPECT_EQ(s.str(), test.str());
}

#endif //__NARRATIVE_TEST_HPP__
