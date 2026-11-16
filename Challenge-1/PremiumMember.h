#pragma once
#include "Member.h"

class PremiumMember :public Member {
private:
	int rewardPoints;
public:
	PremiumMember(const std::string& , int , short );

	
	int calcReward() ;
	void displayPremiumInfo() ;

};
