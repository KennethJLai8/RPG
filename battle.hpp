#ifndef __BATTLE_HPP__
#define __BATTLE_HPP__

#include "character.hpp"
#include "behavior.hpp"

class Battle {
    private:
        Character* enemy;
        Character* player;
        int enemyHP = 0;
        int playerHP = 0;
        int input = 0;
        int randomizer = 0;

    public:
        Battle(Character* curEnemy, Character* curPlayer,
                const int enemyHealth, const int playerHealth) {
            this->enemy = curEnemy;
            this->player = curPlayer;
            enemyHP = enemyHealth;
            playerHP = playerHealth;
        }

        // input variable setter
        void getInput(){
            cin >> input;
        }

        // randomizer variable setter
        void setRandom(){
            randomizer = rand() % 3 + 1;
        }

        // display character health
        void getHP(){
            cout << enemy->get_name()<< " HP: " << enemyHP << "\n";
            cout << " Player HP: " << playerHP << "\n";
        }

        // returns outcome of the battle
        void outcome() {
            if((input == 1 && randomizer == 2) || (input == 2 && randomizer
                == 3) || (input == 3 && randomizer == 1)) {
                    cout << "\n" << enemy->get_name() << " deals 1 damage\n";
                    playerHP -= 1; // villain wins
            }else if((input == 1 && randomizer == 3) || (input == 2
                && randomizer == 1) || (input == 3 && randomizer == 2)) {
                    cout << "\n " << player->get_name() << " deals 1 damage.\n";
  				    enemyHP -= 1; // hero wins
            }else if (input == randomizer) {
                cout << "\n The battle has resulted in a draw both"
                    << " parties take 1 hp damage\n";
                enemyHP -= 1;
          		playerHP -= 1;
            }
        }

        bool continueBattle(){
            if ((enemyHP > 0) && (playerHP > 0)){
                return true;
            }else {
                return false;
            }
        }

        void checkShrimpBattle(){
            if (enemy->get_name() == " Shrimp") {
                // trigger cut scene
                if (enemyHP <= 5){
                    cout << "\n Shrimp: One more move and I will burst your"
                        << " bubble!\n";
                }
            }
        }

        void currentBattle() {
            while (continueBattle()){
                setRandom();
                Behavior move_selection;

                if(randomizer == 1) { // (random == 1)
    		  		move_selection.set_selection(new Attack(enemy));
    			}else if(randomizer == 2) {
      				move_selection.set_selection(new Block(enemy));
      				// cout << character->defense
    			}else if(randomizer == 3) {
      				move_selection.set_selection(new CC(enemy));
    			}

                cout << "\n Chose move (1 'attack', 2 'block', or 3"
                    << " 'special'): ";
        		getInput();
                cout << "\n";

                if(input == 1) {
      				cout << " " << player->get_name() << " uses "
    					<< player->get_attack() << endl;
    			} else if(input == 2) {
      				cout << " " << player->get_name() << " uses "
    					<< player->get_block() << endl;
    			}else if(input == 3) {
      				cout << " " << player->get_name() << " uses "
    					<< player->get_cc() << endl;
    			}

                move_selection.print(cout);
                checkShrimpBattle();
                outcome();
                getHP();
            };
        }

        bool continueGame(){
            if (enemyHP <= 0) {
                cout << "\n You win!" << endl;
                return true;
            } else if (playerHP <= 0) {
                cout << "\n Game over! You failed the kingdom everybody hates"
                    << " you!\n You died to the first enemy of the game"
                    << " noob!\n";
                return false;
            }
        }

        ~Battle(){

        }
};

#endif //__BATTLE_HPP__
