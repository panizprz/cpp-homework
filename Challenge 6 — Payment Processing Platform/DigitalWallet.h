#pragma once

#include "PaymentMethod.h"

class DigitalWallet : public PaymentMethod {
public:
    DigitalWallet();
    ~DigitalWallet();

    void processPayment(double amount) const override;
};
