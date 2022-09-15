#include "Company.h"

void Company::addNewEmployee()
{
    cout << "Number of employees you want to add: ";
    int num;
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        cout << "=================EMPLOYEES================\n";
        cout << "1. Add a new office staff" << '\n';
        cout << "2. Add a new worker" << '\n';
        int choice;
        cin >> choice;
        Employee *staff;
        if (choice == 1)
        {
            string name;
            int basicSalary, workingDays;
            cout << "Name: "; cin.ignore(); getline(cin, name);
            cout << "The office staff's basic salary: "; cin >> basicSalary;
            cout << "The number of office staff's working days: "; cin >> workingDays;
            staff = new OfficeStaff(name, basicSalary, workingDays);
            employees.push_back(staff);
        }
        else
        {
            string name;
            int products, pricePerProduct;
            cout << "Name: "; cin.ignore(); getline(cin, name);
            cout << "The number of products the worker made: "; cin >> products;
            cout << "The price per product: "; cin >> pricePerProduct;
            staff = new Worker(name, products, pricePerProduct);
            employees.push_back(staff);
        }
    }
}

void Company ::getInfor()
{

    cout << "The office staff's name: ";
    string name;
    cin.ignore();
    getline(cin, name);
    for (Employee *check : employees)
    {
        if (check->getName() == name)
        {
            check->getInfor();
        }
    }
}

void Company::editInfor()
{
    cout << "The employee's name you want to edit: ";
    string name;
    cin.ignore();
    getline(cin, name);
    for (Employee *check : employees)
    {
        if (check->getName() == name)
        {
            check->editInfor();
        }
    }
}
void Company ::totalSalary()
{
    int sum = 0;
    for (Employee *check : employees)
    {
        sum += check->getSalary();
    }
    cout << "The total salary: " << sum << '\n';
}
// string Company :: chuanHoaXau(string name)
// {
//     string res;
//     for (int i = 0; i < name.length(); i++)
//     {
//         if (name[i]!=' ')
//         {
//             name[i] = tolower(name[i]);
//             res += name[i];
//         }
//     }
//     return res;
// }