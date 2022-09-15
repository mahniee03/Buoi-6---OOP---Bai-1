#pragma once
#include <bits/stdc++.h>
using namespace std;

class Employee
{
protected:
    string name;

public:
    Employee();
    Employee(string name);
    string getName();
    // string chuanHoaXau(string name);
    virtual void getInfor();
    virtual void editInfor() = 0;
    virtual int getSalary() = 0;
};
