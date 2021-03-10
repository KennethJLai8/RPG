#include <iostream>
#include <string>
#include <ctime>
#include <bits/stdc++.h>

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

using namespace std;

int main()
{
  	//Behavior* move;
 	string input = "";
  	Character* player = nullptr;
  	string playerClass = " ";
    bool continueGame = true;

	cout << "\n FORBIDDEN KNIGHT\n \n";

	// player selection
	do{
		cout << " Choose your character 'K'night, 'A'rcher, or"
            << " 'W'izard: ";
  		cin >> input;

		if(input == "k" || input == "K"){
    			// const char playerClass = 'k';
    			player = new ForbiddenKnight();
  		}else if(input == "a" || input == "A") {
   			//const char playerClass = 'a';
    			player = new ForbiddenArcher();
  		}else if(input == "w" || input == "W") {
    			//const char playerClass = 'w';
    			player = new ForbiddenWizard();
  		}else {
   			cout << " Invalid selection. Please select again.\n \n";
		}
  	} while ((input != "k") && (input != "K") && (input != "a")
		&& (input != "A") && (input != "w") && (input != "w"));

	// display narrative
  	Narrative* story = new Narrative(player->get_name());
	story->intro(cout);
	story->welcome(cout);
    cout << " Press any key followed by enter to continue.";
    cin >> input;
    cout << "\n";

	// Gopher start--------------------------------------------
	story->gopherIntro(cout);
	story->gopherBattleDialogue(cout);

	Character* gopher = new ForbiddenGopher();
	int enemyHP = gopher->get_hp();
	int playerHP = player->get_hp();

	Battle* gopherBattle = new Battle(gopher, player, enemyHP, playerHP);
    gopherBattle->currentBattle();

    continueGame = gopherBattle->continueGame();
    if (continueGame == false){
        exit(1);
    }
    // Gopher end----------------------------------------------

    // Troll begin---------------------------------------------
    story->trollIntro(cout);
    story->trollBattleDialogue(cout);

    Character* troll = new GenericTroll();
    enemyHP = troll->get_hp();

    Battle* trollBattle = new Battle(troll, player, enemyHP, playerHP);
    trollBattle->currentBattle();

    continueGame = trollBattle->continueGame();
    if (continueGame == false){
        exit(1);
    }
    // Troll end-----------------------------------------------

    // Shrimp begin--------------------------------------------
    story->shrimpIntro(cout);

    Character* shrimp = new PistolShrimp();
    enemyHP = shrimp->get_hp();

    Battle* shrimpBattle = new Battle(shrimp, player, enemyHP, playerHP);
    shrimpBattle->currentBattle();

    continueGame = shrimpBattle->continueGame();
    if (continueGame == false){
        exit(1);
    }
    // Shrimp end--------------------------------------------

    story->epilogue(cout);

    delete player;
    delete story;
    delete gopher;
    delete shrimp;
    delete troll;
    delete gopherBattle;
    delete trollBattle;
    delete shrimpBattle;

    return 0;
}
