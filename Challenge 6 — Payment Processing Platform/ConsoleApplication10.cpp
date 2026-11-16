//Challenge 6 — Payment Processing Platform
//Focus: Run - time polymorphism, virtual functions, overriding | 20 points

#include <iostream>
#include "CreditCard.h"
#include "DigitalWallet.h"
#include "BankTransfer.h"

int main() {
    PaymentMethod* payments[3];

    payments[0] = new CreditCard();
    payments[1] = new DigitalWallet();
    payments[2] = new BankTransfer();

    double amounts[3] = { 100, 250.50, 75 };

    for (int i = 0; i < 3; i++) {
        payments[i]->processPayment(amounts[i]);
    }

    // Virtual functions allow the correct derived class function
    // to execute through a PaymentMethod pointer at run time.

    for (int i = 0; i < 3; i++) {
        delete payments[i];
    }

    return 0;
}
