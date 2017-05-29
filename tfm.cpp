#include <iostream>
#include "tfm.h"
#include <stdlib.h>
#include <algorithm>
#include <vector>
#include <time.h>
#include <string>
#include "terraPlayer.h"

using namespace std;

//function declaration
void printStarter();
void resourceTracking();

void TerraMars::printStarter(){ 
	cout << "Player Sequence" << endl;
	vector<string> playerColor;
	playerColor.push_back("Red");
	playerColor.push_back("Blue");
	playerColor.push_back("Yellow");
	playerColor.push_back("Black");
	playerColor.push_back("Green");
	random_shuffle(playerColor.begin(),playerColor.end());
	for (std::vector<string>::iterator it=playerColor.begin();it!=playerColor.end();it++){
		cout << *it;
		cout << " ";
	}
	cout << endl;
}

void TerraMars::resourceTracking(){
	Player player1;
	cout << "Player 1 resource is "<<player1.getCredit()<<endl;
	cout << "Add amount" << endl;
	int amount;
	cin >> amount;
	player1.modCredit(amount);
	cout << endl;
	cout << "Player 1 resource is "<<player1.getCredit()<<endl;
}



