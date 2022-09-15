#include "Worker.h"

Worker::Worker() : Employee()
{
    // this->name = "";
    this->products = 0;
    this->pricePerProduct = 0;
}
Worker::Worker(string name, int products, int pricePerProduct) : Employee(name)
{
    this->products = products;
    this->pricePerProduct = pricePerProduct;
}
void Worker::getInfor()
{
    Employee::getInfor();
    cout << "The number of products the worker made: " << this->products << '\n';
    cout << "The price per product: " << this->pricePerProduct << '\n';
    cout << "The worker's salary: " << this->getSalary() << '\n';
}
int Worker::getSalary()
{
    return this->products * this->pricePerProduct;
}
void Worker::editInfor()
{
    while (1)
    {
        cout << "=================EDIT================\n";
        cout << "1. Edit the information" << '\n';
        cout << "2. Edit name only" << '\n';
        cout << "3. Edit products only" << '\n';
        cout << "4. Edit the price per product only" << '\n';
        cout << "5. Done!!!" << '\n';
        int choice;
        cin >> choice;
        if (choice == 1)
        {
            cout << "Name: "; string name; cin.ignore(); getline(cin, name); this->name = name;
            cout << "Products: "; int products; cin >> products; this->products = products;
            cout << "The price per product: "; int pricePerProduct; cin >> pricePerProduct; this->pricePerProduct = pricePerProduct;
        }
        else if (choice == 2)
        {
            cout << "Name: ";
            string name; cin.ignore(); getline(cin, name);
            this->name = name;
        }
        else if (choice == 3)
        {
            cout << "Products: ";
            int products; cin >> products;
            this->products = products;
        }
        else if (choice == 4)
        {
            cout << "The price per product: ";
            int pricePerProduct; cin >> pricePerProduct;
            this->pricePerProduct = pricePerProduct;
        }
        else
        {
            cout << "Edited successfully!!!";
            break;
        }
    }
}