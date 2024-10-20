#include<bits/stdc++.h>
using namespace std;

//Creating Class 

class myClass{                                      //Class
    private:                                        // access Modifer
        int account_Number;                         // Attributes (int)
        string name;                                 // Attributes (String)
    public:
        int Balance;                                 // Attributes (int)
        int contact;

        void depositeBalance (int balance){         //Methods
            Balance += balance;
        }
        void withdrawBalance (int balance){
            Balance += balance;
        
        }
        void SetDetails(int acc, string name1);
        void getDetails();

};
void myClass :: SetDetails( int acc, string name1){
    account_Number = acc;
    name = name1;
}

void myClass :: getDetails(){
    cout<<"Account number :- "<<account_Number<<endl;
    cout<<"Name :- "<<name<<endl;
    cout<<"Balance :- "<<Balance<<endl;

}

int main(){

myClass * happy = new myClass();                // obejct by ref.
happy->SetDetails(2345 ,"Happy verma");
happy->Balance =1000;
happy->depositeBalance(90009);
happy->getDetails();


myClass Sameer;
Sameer.SetDetails(879,"Sameer Verma");
Sameer.Balance =12445;
Sameer.withdrawBalance(123);
Sameer.getDetails();


}