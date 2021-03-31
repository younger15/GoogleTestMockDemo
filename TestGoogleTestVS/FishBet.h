#pragma once
#include"BetWinProbability.h"
class FishBet {
public:
	FishBet();
	FishBet(BetWinProbability* p);
	bool BetFish(int betLevel);
protected:
	BetWinProbability* checkWin;

};