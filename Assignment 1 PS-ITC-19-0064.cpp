#include <iostream>

using namespace std;

int main()
{
    string name;
    string item;
    string id;
    int quantity;
    double amountOwed;
    int priceOfGoods = 30;
    int amountpayed;
    int balance;
    double vat = 0.12;

    cout << "Enter your name"<< endl;
    cin >> name;
    cout << "----------------" << endl;

    cout << "Enter your unique ID"<< endl;
    cin >> id ;
    cout << "----------------"<< endl;

    cout << "What do you want to buy" << endl;
    cin >> item;
    cout << "----------------"<< endl;

    cout << "How many are you buying"<< endl;
    cin >> quantity;

    amountOwed = priceOfGoods * quantity + vat;
    cout << "Total amount you owe= "<< amountOwed<< endl;
    cout << "----------------"<< endl;

    cout<< "Total amount payed = "<< endl;
    cin >> amountpayed;
    balance = amountpayed - amountOwed;
    cout << "----------------"<< endl;

    cout << "Name of customer: " <<name<< endl;
    cout << "The unique ID: "<< id<< endl;
    cout << "Item Bought: "<< item<< endl;
    cout << "Quantity bought: "<< quantity<< endl;
    cout << "Vat Amount: "<< vat<< endl;
    cout << "Total Cost: "<< amountOwed<< endl;
    cout << "Total amount payed: "<< quantity<< endl;
    cout << "Balance: "<< balance<< endl;

    return 0;
}
