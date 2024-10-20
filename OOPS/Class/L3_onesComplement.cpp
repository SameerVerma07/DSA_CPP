#include<bits/stdc++.h>
using namespace std;

class binaryOperation {
    string s;
    public:
        void checkBinary();
        void assignBinary(string s1){
            s = s1;
        }
        void display();
        void onesConplement();
};

void  binaryOperation :: checkBinary (){
    for(int i = 0 ; i < s.length() ; i++){
        if(s[i] != '1' && s[i] != '0'){
                cout<< "Not binary number";
                cout<<endl;
                exit(0);
        }
    }
}

void binaryOperation :: display(){
        for(int i = 0 ;i < s.length(); i++ ){
            cout<<s[i];
        }
        cout<<endl;
    }



void binaryOperation :: onesConplement(){
    for(int i = 0 ;i < s.length(); i++ ){
        if(s[i] == '1'){
            s[i] = '0';
        }
        else{
            s[i] ='1';
        }
    }
}


int main(){
    string x;
    binaryOperation one;
    cout<<"Enter the Binary Number"<<endl ;
    cin>>x;
    one.assignBinary(x);
    one.checkBinary();
    one.display();
    one.onesConplement();
    one.display();

    return 0;
}
