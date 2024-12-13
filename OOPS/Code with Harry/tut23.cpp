// Code with harry
//

#include <bits/stdc++.h>
using namespace std;

class Shop
{
    int ID[100];
    int price[100];
    int counter;

public:
    void init_counter(void)
    {
        counter = 0;
    }

    void Product(void);
    void Display(void);
};
void Shop ::Product(void)
{
    cout << "Enter the Product id of Item no " << counter + 1 << endl;
    cin >> ID[counter];
    cout << "Enter the Price of the Product" << endl;
    cin >> price[counter];
    counter++;
}

void Shop ::Display(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The Item no " << i + 1 << " ,Product Id " << ID[i] << " has Price " << price[i] << endl;
    }
}

int main()
{
    Shop Dukkan;
    Dukkan.init_counter();
    Dukkan.Product();
    Dukkan.Product();
    Dukkan.Product();
    Dukkan.Product();
    Dukkan.Display();

    return 0;
}
