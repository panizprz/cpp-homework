#pragma once

#include <iostream>
#include <string>

//base class
class Member
{
private:
	std::string fullName;
	int membershipID;
	short borrowedBooks;
public:
	Member(const std::string&, int, short);
	~Member();

	//getter
	short getBorrowedBooks() const;

	void displayMemberInfo() const;

};

