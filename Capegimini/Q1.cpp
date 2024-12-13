
//Sameer Verma - December 3 2024 


/*
Question 1:- 

    1. Problem Statement -
        Capgemini in its online written test have a coding question, wherein the
        students are given a string with multiple characters that are repeated
        consecutively. You're supposed to reduce the size of this string using
        mathematical logic given as in the example below :
            Input :
            aabbbbeeeeffggg
            Output:
            a2b4e4f2g3


*/

#include<bits/stdc++.h>
using namespace std;

void printFunction(string st){
    int n = st.length();
    for(int i=0;i<n;i++){
        int count = 1;
        while(i<n-1 && st[i]==st[i+1]){
            count++;
            i++;
        }
        cout<<st[i]<<count;
    }

}


int main(){

string st;
cin>>st;
printFunction(st);
return 0;

}