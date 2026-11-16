#pragma once

#include "PaymentMethod.h"

class BankTransfer : public PaymentMethod {
public:
    BankTransfer();
    ~BankTransfer();

    void processPayment(double amount) const override;
};
