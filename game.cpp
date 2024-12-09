#include <iostream>
#include <string>
#include <iomanip>
#include <ctime>
#include  "game.h"


Game::Game() {
    choice = 0;
    playing = true;
}



// Functions 

void Game::mainMenu() {
    while(playing) {
cout << "Main Menu" << endl;
cout << "0. Quit" << endl;
cout << "1. Travel" << endl;
cout << "2. Inventory" << endl;
cout << "3. Shop" << endl;  
cout << "4. Level up" << endl;

 cout << "\nEnter your choice: ";
        cin >> choice;


switch (choice) {
    case 0:
    playing = false;
     cout << "Leaving game" << endl;
    break;
    case 1:
    cout << "Traveling" << endl;
    break;
    case 2: 
    cout << "Opening Inventory" << endl;
    break;
    case 3:
    cout << "Opening shop" << endl;
    break;
    case 4:
    cout << "Leveling Up" << endl;
    break;
    default:
     cout << "Invalid choice" << endl;
    break;

      }
 cout << "\n";
    }
}