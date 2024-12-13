// static Variable , we write it outside the class.
// class variable -> also known as Static  Variable

#include <bits/stdc++.h>
using namespace std;

class Employee
{
    int id;
    // count is the static data member of class Employees
    static int count;

public:
    void setData(void)
    {
        cout << "Enter the Employee id of employee no " << count + 1 << endl;
        cin >> id;
        count++;
    }
    void getdata(void)
    {
        cout << "The Employee id is " << id << " For Employee no " << count << endl;
    }
};

int Employee ::count; 
//In C++, :: is called the scope resolution operator. It is used to define or call a class function from outside the class.

int main()
{
    Employee rahul, ravi, kiran, viraj;

    rahul.setData();
    rahul.getdata();

    ravi.setData();
    ravi.getdata();

    kiran.setData();
    kiran.getdata();

    viraj.setData();
    viraj.getdata();

    return 0;
}