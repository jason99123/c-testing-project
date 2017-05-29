#include <iostream>
#include "terraPlayer.h"
using namespace std;


//function declaration
void modCredit(int change);
int getCredit();

Player::Player(void){
	cout << "Player is being created" << endl;
}
void Player::modCredit(int change){
	credit =+ change;
}
	
int Player::getCredit(){
	return credit;
}

