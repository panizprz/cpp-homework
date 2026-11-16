#include "PremiumMember.h"

PremiumMember::PremiumMember(const std::string& name, int id, short books) : Member(name, id, books), rewardPoints(0) {

}

int PremiumMember::calcReward()  {
	rewardPoints = getBorrowedBooks() * 10;
	return rewardPoints;
}

void PremiumMember::displayPremiumInfo()  {
	displayMemberInfo();
	std::cout << "Reward Points: " << calcReward() << std::endl;
}
