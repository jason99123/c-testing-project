#include <iostream>
#include "gamename.h"
#include "affo.h"
#include "westernTrail.h"
using namespace std;

//function declaration
int loadBoardGame();
void initBoardInstance(int type);

//int main() to init the program

int main(){
  try {
	cout << "BoardGame collection version 1.0\n";
	int type = loadBoardGame();
	initBoardInstance(type);
  } catch (const char* msg) {
	cerr << msg << endl;
  }
	return 0;
}

//loadBoadGame() get the int of the boardgame ID
int loadBoardGame(){
	Gamename game;
	for (int i = 0; i < game.gamesize; i++)
	{
		cout << i+1 <<". "<< game.game[i]<<endl;
	}
	int type = 0;
	cin >> type;
	if ((type <= 0)||(type > game.gamesize)){
		throw "Number not in range!";
	}
	return type-1;
}

//initBoardInstance is to create different boardgame class

void initBoardInstance(int type){
	cout << string(50, '\n');
	Gamename game;
	switch (type)
	{
		case 0:
			OdinFeast feast;
			cout << game.game[type] << endl <<endl;
			feast.printSetup();
			break;
		case 2:
			WesternTrail GWT;
			cout << game.game[type] << endl << endl;
			GWT.printSetup();
			break;
		default:
			cout << "Still in development" << endl; 
	}
}
