#pragma once

#include "PaymentMethod.h"

class CreditCard : public PaymentMethod {
public:
    CreditCard();
    ~CreditCard();

    void processPayment(double amount) const override;
};
