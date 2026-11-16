#include "BankTransfer.h"

BankTransfer::BankTransfer() {
}

BankTransfer::~BankTransfer() {
}

void BankTransfer::processPayment(double amount) const {
    std::cout << "Bank Transfer Payment: $" << amount << std::endl;
}
