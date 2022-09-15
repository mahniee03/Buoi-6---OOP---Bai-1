#pragma once
#include "Employee.h"

class Worker : public Employee
{
private:
    int products;
    int pricePerProduct;

public:
    Worker();
    Worker(string name, int products, int pricePerProduct);
    void getInfor();
    int getSalary();
    void editInfor();
};