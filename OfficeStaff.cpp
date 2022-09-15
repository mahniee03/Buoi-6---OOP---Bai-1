#include "OfficeStaff.h"
OfficeStaff ::OfficeStaff() : Employee()
{
    // this->name = "";
    this->workingDays = 0;
    this->basicSalary = 0;
}

OfficeStaff::OfficeStaff(string name, int basicSalary, int workingDays) : Employee(name)
{
    this->basicSalary = basicSalary;
    this->workingDays = workingDays;
}
void OfficeStaff::getInfor()
{
    Employee::getInfor();
    cout << "The office staff's basic salary: " << this->basicSalary << '\n';
    cout << "The number of office staff's working days: " << this->workingDays << '\n';
    cout << "The office staff's salary: " << this->getSalary() << '\n';
}
int OfficeStaff::getSalary()
{
    return this->basicSalary * this->workingDays;
}
void OfficeStaff::editInfor()
{
    cout << "=================EDIT================\n";
    cout << "1. Edit the information" << '\n';
    cout << "2. Edit name only" << '\n';
    cout << "3. Edit basic salary only" << '\n';
    cout << "4. Edit the working days only" << '\n';
    cout << "5. Done!!!" << '\n';
    
    while (1)
    {
        int choice;cin >> choice;
        if (choice == 1)
        {
            cout << "Name: "; string name; cin.ignore(); getline(cin, name); this->name = name;
            cout << "Basic salary: "; int basicSalary; cin >> basicSalary; this->basicSalary = basicSalary;
            cout << "The number of working days: "; int workingDays; cin >> workingDays; this->workingDays = workingDays;
        }
        else if (choice == 2)
        {
            cout << "Name: ";
            string name; cin.ignore(); getline(cin, name);
            this->name = name;
        }
        else if (choice == 3)
        {
            cout << "Basic salary: ";
            int basicSalary; cin >> basicSalary;
            this->basicSalary = basicSalary;
        }
        else if (choice == 4)
        {
            cout << "The number of working days: ";
            int workingDays; cin >> workingDays;
            this->workingDays = workingDays;
        }
        else
        {
            cout << "Edited successfully!!!";
            break;
        }
    }
}
