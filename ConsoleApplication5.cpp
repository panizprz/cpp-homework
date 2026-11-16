//Challenge 1 — Smart Library Membership
//Focus: Single inheritance


#include "PremiumMember.h"

int main()
{
    Member member("Paniz Pourziaei", 1001, 2);
    member.displayMemberInfo();

    PremiumMember member1("Sara Teddy", 101, 0);
    PremiumMember member2("Alex Khachatryan", 102, 4);

    member1.displayPremiumInfo();
    member2.displayPremiumInfo();

    return 0;
}
