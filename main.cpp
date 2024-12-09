#include "game.h"


using namespace std;

int main() {
srand(time(0));

   Game game;

   while(game.playing()) {
   game.mainMenu();
   }
    
    return 0;
}
   
