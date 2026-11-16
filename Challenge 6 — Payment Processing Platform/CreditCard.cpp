#include "CreditCard.h"

CreditCard::CreditCard() {
}

CreditCard::~CreditCard() {
}

void CreditCard::processPayment(double amount) const {
    std::cout << "Credit Card Payment: $" << amount << std::endl;
}
