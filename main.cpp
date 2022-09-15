#include "Company.h"

void MENU()
{
    cout << "=================MENU================\n";
    cout << "1. Add a new employee" << '\n';
    cout << "2. Show the employee's information" << '\n';
    cout << "3. Edit the employee's information" << '\n';
    cout << "4. Show the total employees' salary" << '\n';
    cout << "5. Exit" << '\n';
}
int main()
{
    Company company;
    while(1)
    {
        MENU();
        int choice; cin >> choice;
        if (choice == 1)
        {
            company.addNewEmployee();
        }
        else if (choice == 2)
        {
            company.getInfor();
        }
        else if (choice == 3)
        {
            company.editInfor();
        }
        else if (choice == 4)
        {
            company.totalSalary();
        }
        else 
        {
            cout << "Exit";
            return 0;
        }
        cout << '\n';
    }
}