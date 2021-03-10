#ifndef __NARRATIVE_HPP__
#define __NARRATIVE_HPP__

#include <iostream>
#include <string>

using namespace std;

class Narrative {
	private:
		string player;
	public:
		Narrative(string newPlayer){ //pass in character.name?
			player = newPlayer;
		}

        // Game introduction
        void intro(ostream& out) const {
            out << "\n INTRODUCTION \n"
                << " In a period of civil war in the kingdom. A brave alliance"
                << " \n of underground freedom fighters has challenged the"
                << " tyranny\n and oppression of the forbidden kingdom."
                << " Striking from a\n shack hidden among the trees in"
                << " wilderness, the forbidden\n brotherhood has won their"
                << " first victory in a battle with\n the powerful imperial"
                << " guard. The kingdom that another\n defeat could bring more"
                << " forest folk into the rebellion,\n and control of the"
                << " kingdom would be lost forever." << "\n \n";
        }

        // Objective after player selection
        void welcome(ostream& out) const {
            out << " The kingdom has not always been like this. Long ago an"
                << " evil\n spirit possessed the king and banished the"
                << " forbidden\n brotherhood from the kingdom. They reconvened"
                << " in the middle\n of the Forest of Forbiddenness to form a"
                << " rebellion. They\n chose " << player << " as their leader."
                << " Now the chosen one\n must lead the fight to take back the"
                << " kingdom and rescue\n Princess Pineapple. " << player
                << " will face the Forbidden\n Gopher and the Generic Troll"
                << " before finally facing the\n Pistol Shrimp spirit who"
                << " controls the king." << "\n \n";
        }

        // Forbidden Gopher Intro
        void gopherIntro(ostream& out) const {
            out << " ENTER THE FORBIDDEN GOPHER \n"
                << " The forbidden gopher emerges from its burrow once a year\n"
                << " on Gopher Day. If it sees its shadow, spring will arrive"
                << "\n early. If it doesn't see its shadow, winter will"
                << " continue.\n The gopher was blinded by the Pistol Shrimp"
                << " years ago and\n a bitter winter fell upon the kingdom."
                << "\n \n";
        }
        // Gopher battle
        void gopherBattleDialogue(ostream& out) const {
            out << " Forbidden Gopher: Who disturbs my slumber?" << "\n"
                << " " << player << ": Your slumber? How can you even sleep in"
                << " this\n     cold. I hate winter! I'm so tired of being"
                << " cold. You're\n     that stupid groundhog gopher guy, huh?"
                << " Why can't you\n     just see your shadow, so we can see"
                << " some sunshine?\n"
                << " Forbidden Gopher: I'm blind you jerk! You have woken me up"
                << "\n     from my slumber and now you must die!\n";
        }

        // Generic Troll Intro
        void trollIntro(ostream& out) const {
            out << "\n ENTER THE GENERIC TROLL \n"
                << " The Generic Troll protects the bridge that leads to the\n"
                << " Forbidden Kingdom. He's not very powerful, but "
                << player << " must\n retrieve the forbidden jewel from the"
                << " trolls stomach to\n lower the Forbidden Bridge to reach"
                << " the Forbidden Kingdom.\n \n";
        }

        // Troll battle
        void trollBattleDialogue(ostream& out) const {
            out << " You have touched the forbidden treasure! Now you will\n"
                << " never again see the light of day again!\n";
        }

        // Pistol Shrimp Intro
        void shrimpIntro (ostream& out) const {
            out << "\n ENTER THE PISTOL SHRIMP\n"
                << " I've been watching your every move closely "
                << player << ". Your\n eyes do not decieve you for I am Pistol"
                << " Shrimp ruler of the\n seas and ruler of the land. I admire"
                << " you for coming this\n far but this is where it ends."
                << " GRRRRRRR!!!\n";
        }

        // Shrimp battle
        void shrimpBattle(ostream& out) const {

        }

        void epilogue(ostream& out) const {

          out << " Everyone lived happily ever after. The End\n";

        }

        // Randomized battle dialogue
        void battleDialogue1(ostream& out, string enemy) const {
            out << enemy << ": Do you think even the worst person can change?\n"
                            << " That everybody can be a good person, if they just"
                            << " try?\n Look. I gave up trying to go back a long"
                            << "time ago.";
        }

        void battleDialogue2(ostream& out, string enemy) const {
            out << enemy << ": Do you wanna have a bad time?\n 'Cause if you take"
                            << "another step forward. . .\n You are REALLY not"
                          <<  " going to like what happens next.\n";
        }

        void battleDialogue3(ostream& out) const {
            out << ": Always wondered why people never use their"
                            << " strongestattack first.\n";
        }

        void battleDialogue4(ostream& out, string enemy) const {
            out << ": What? You think im just gonna stand there and take it?\n";
        }

        void battleDialogue5(ostream& out, string enemy) const {
            out << enemy << ": Sorry, old friend.\n This is why I never make promises.\n";
        }

        void battleDialogue6(ostream& out, string enemy) const {
            out << enemy << ": You're the real monster.\n Your choices mean nothing.\n";
        }

};

#endif //__NARRATIVE_HPP__
