#include <iostream>
#include <stdlib.h>
#include <algorithm>
#include <vector>
#include <time.h>
#include <string>
#include "affo.h"
using namespace std;

int OdinFeast::getfirstTile(){
	srand (time(NULL));
	return rand()%2+1;
}

int OdinFeast::getSecondTile(){
	srand (time(NULL));
	return rand()%2+3;
}
/*std::string OdinFeast::getStarter(){
	srand (time(NULL));
	int color = rand()%4+1;
	switch (color){
		case 1:
			return "red";
		case 2:
			return "blue";
		case 3:
			return "yellow";
		case 4:
			return "black";
		default:
			return "?";
	}
	
}*/
std::string OdinFeast::getStarter(){
	srand (time(NULL));
	vector<string> playerColor;
	playerColor.push_back("Red");
	playerColor.push_back("Blue");
	playerColor.push_back("Yellow");
	playerColor.push_back("Black");
	random_shuffle(playerColor.begin(),playerColor.end());
	string seq;
	for (std::vector<string>::iterator it=playerColor.begin();it!=playerColor.end();it++){
		seq.append(*it);
		seq.append(" ");
	}
	return seq;
}
void OdinFeast::printSetup(){
	cout << "For 4 players tiles setup" << endl;
	cout << "1,2 Column: " << getfirstTile() << endl;
	cout << "3,4 Column: " << getSecondTile() << endl << endl;
	cout << "Starting Player: " << getStarter() << endl;
}
