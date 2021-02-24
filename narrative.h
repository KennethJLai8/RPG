#include <iostream>
#include <string>

class narrative {
    private:
        string player;
        string enemy;
    public:
        narrative(string newPlayer){
            player = newPlayer;
            enemy = "troll";
        }

        // Game introduction
        void intro(ostream& out) const {
            out << "In a period of civil war in the kingdom. A brave alliance of
                    underground freedom fighters has challenged the tyranny and
                    oppression of the forbidden kingdom. Striking from a shack
                    hidden among the trees in wilderness, the forbidden
                    brotherhood has won their first victory in a battle with
                    the powerful imperial guard. The kingdom fears that another
                    defeat could bring more forest folk into the rebellion, and
                    control of the kingdom would be lost forever." << "\n";
        }

        // Objective after player selection
        void welcome(ostream& out) const {
            out << "The kingdom has not always been like this. Long ago an evil
                    spirit possessed the king and banished the forbidden
                    brotherhood from the kingdom. They reconvened in the middle
                    of the Forest of Forbiddenness to form a rebellion. They
                    chose " << player << " as their leader. Now the chosen one
                    must lead the fight to take back the kingdom and rescue
                    Princess Pineapple." << player << " will face the Forbidden
                    Gopher and the Generic Troll before finally facing the
                    Pistol Shrimp spirit who controls the king." << "\n";
        }

        // Forbidden Gopher Intro
        void gopherIntro(ostream& out) const {
            out << "The forbidden gopher emerges from its burrow once a year on
                    Gopher Day. If it sees its shadow, spring will arrive early.
                    If it doesn't see its shadow, winter will continue. The
                    gopher was blinded by the Pistol Shrimp years ago and a
                    bitter winter fell upon the kingdom." << "\n";
        }
        // Gopher battle
        void gopherBattleDialogue(ostream& out) const {
            out << "Forbidden Gopher: Who disturbs my slumber?" << "\n";
            out << player << ": Your slumber? How can you even sleep in this
                                cold. I hate winter! I'm so tired of being cold.
                                You're that stupid groundhog gopher guy, huh?
                                Why can't you just see your shadow, so we can
                                see some sunshine?" << "\n";
            out << "Forbidden Gopher: I'm blind you jerk! You have woken me up
                    from my slumber and now you must die!" << "\n";
        }

        // Generic Troll Intro
        void trollIntro(ostream& out) const {
            out << "The Generic Troll protects the bridge that leads to the
                    Forbidden Kingdom. He's not very powerful, but the ";
                << player << " must retrieve the forbidden jewel from the
                            trolls stomach to lower the Forbidden Bridge to
                            reach the Forbidden Kingdom" << "\n";
        }

        // Troll battle
        void trollBattleDialogue(ostream& out) const {
            out << "You have touched the forbidden treasure! Now you will never again
            see the light of day!"
        }

        // Pistol Shrimp Intro
        void shrimpIntro (ostream& out) const {

        }

        // Shrimp battle
        void shrimpBattle(ostream& out) const {

        }

        void epilogue(ostream& out) const {

        }

        // Randomized battle dialogue
        void battleDialogue1(ostream& out) const {

        }

        void battleDialogue2(ostream& out) const {

        }

        void battleDialogue3(ostream& out) const {

        }
};
