#pragma once
#include "Employee.h"
#include "Worker.h"
#include "OfficeStaff.h"

class Company
{
private:
    vector<Employee *> employees;

public:
    void addNewEmployee();
    void getInfor();
    void editInfor();
    void totalSalary();
    // string chuanHoaXau(string name);
};