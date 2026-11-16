#include "Member.h"

Member::Member(const std::string& fullname, int membershipID, short borrowedBooks) :fullName(fullname), membershipID(membershipID), borrowedBooks(borrowedBooks) {


}
Member::~Member(){
	
}

void Member::displayMemberInfo() const {
	std::cout << "\nFullName: " << fullName << std::endl;
	std::cout << "ID: " << membershipID << std::endl;
	std::cout << "Books borrowed: " << borrowedBooks << std::endl;

}

short Member::getBorrowedBooks() const {
	return borrowedBooks;
}
