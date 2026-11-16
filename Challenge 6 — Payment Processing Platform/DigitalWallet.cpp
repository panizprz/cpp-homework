#include "DigitalWallet.h"

DigitalWallet::DigitalWallet() {
}

DigitalWallet::~DigitalWallet() {
}

void DigitalWallet::processPayment(double amount) const {
    std::cout << "Digital Wallet Payment: $" << amount << std::endl;
}
