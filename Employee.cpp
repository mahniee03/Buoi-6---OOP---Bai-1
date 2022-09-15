#include "Employee.h"

Employee::Employee()
{
    this->name = "";
}
Employee::Employee(string name)
{
    this->name = name;
}
string Employee::getName()
{
    return this->name;
}
void Employee::getInfor()
{
    cout << "Name: "; cout << this->name << '\n';
}
// string Employee :: chuanHoaXau(string name)
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
