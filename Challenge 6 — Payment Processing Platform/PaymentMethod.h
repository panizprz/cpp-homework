#pragma once

#include <iostream>

class PaymentMethod {
public:
    PaymentMethod();
    virtual ~PaymentMethod();

    virtual void processPayment(double amount) const = 0;
};
