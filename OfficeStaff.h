#pragma once
#include "Employee.h"

class OfficeStaff : public Employee
{
private:
    int basicSalary;
    int workingDays;

public:
    OfficeStaff();
    OfficeStaff(string name, int basicSalary, int workingDays);
    void getInfor();
    int getSalary();
    void editInfor();
};