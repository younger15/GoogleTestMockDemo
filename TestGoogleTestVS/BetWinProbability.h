#pragma once
class BetWinProbability {

public:
	BetWinProbability() {};
	virtual bool IfWin(int betLevel) {};
	~BetWinProbability() {};
};