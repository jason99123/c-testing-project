#include<iostream>
#include <stdlib.h>
#include <algorithm>
#include <vector>
#include <time.h>
#include <string>
#include "westernTrail.h"
using namespace std;
//function declaration
void printSetup();
std::string getStarter();
std::string getNeutralBuilding();
std::string getPrivateBuilding();

void WesternTrail::printSetup(){
	srand (time(NULL));
	cout << "For Neutral Building Setup" << endl;
	cout << getNeutralBuilding() << endl << endl;
	cout << "For Private Building Setup" << endl;
	cout << getPrivateBuilding() << endl << endl;
	cout << "Starting Player Sequence" << endl;
	cout << getStarter() << endl << endl;
}

std::string WesternTrail::getNeutralBuilding(){
	vector<string> neutralBuilding;
	for (char i = 'A'; i <= 'G';i++){
		neutralBuilding.push_back(string(1,i));
	}
	random_shuffle(neutralBuilding.begin(),neutralBuilding.end());
	string seq;
	char c = 'A';
	for (std::vector<string>::iterator it=neutralBuilding.begin();it!=neutralBuilding.end();it++){
		seq.append("Space");
		seq.append(string(1,c));
		seq.append(": ");
		seq.append(*it);
		seq.append(" ");
		c++;
	}
	return seq;
}

std::string WesternTrail::getPrivateBuilding(){
	string seq;
	for (int i=1 ; i < 11; i++ ){
		seq.append(std::to_string(i));
		int tmp = rand()%2+1;
		if (tmp == 2)
			seq.append("b");
		else
			seq.append("a");
		seq.append(" ");
	}
	return seq;
}
std::string WesternTrail::getStarter(){
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

