// Access Modifier ..
// Private - and  - Public

#include<bits/stdc++.h>
using namespace std;

class studentDetails{
    string name;
    int age;
    int contact;

    public:
        string email;
        string address;

    void setData(string name1, int age1, int contact1 , string email1, string address1);
    void display();


};

// privated attributes can not be changed easily and cannot access it from other easily.

void studentDetails :: setData(string name1, int age1, int contact1 , string email1, string address1){
    name = name1;
    age = age1;
    contact = contact1;
    email1 = email1;
    address = address1;

}
void studentDetails :: display(){
    cout<<"Student name is :- "<<name<<"  he is :- "<<age<<" yrs old and contact number is :- "<<contact<<" also email is :-"<<email<<" and he lives at :- "<<address<<endl;
}



int main(){
    studentDetails * student1 = new studentDetails();
    student1->setData("Ravea",23 , 1234567, "ravea@gmail.com", "Kolkata");
    student1->display();
    student1->email = "revaji@jiji@gmail.com";
    student1->display();
    
    return 0;
}