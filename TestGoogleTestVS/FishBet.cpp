#include"./FishBet.h"

FishBet::FishBet() {

	this->checkWin = new BetWinProbability();
}

FishBet::FishBet(BetWinProbability* p) {
	this->checkWin = p;
}

bool FishBet::BetFish(int betLevel) {

	return this->checkWin->IfWin(betLevel);
}