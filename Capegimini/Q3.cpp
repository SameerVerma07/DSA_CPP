//Count frequency of each element in the array
//Sameer Verma - Wed 4 Dec 2024
/*

    You're given an array of integers, print the number of times each integer has
    occurred in the array.
        Example
            Input :
                10
                1233414512
            Output :
                1 occurs 3 times
                2 occurs 2 times
                3 occurs 2 times
                4 occurs 2 times
                5 occurs 1 times

*/

#include<bits/stdc++.h>
using namespace std;

void countFrequency(vector<int> &a,int m){
    //creating a vector array for the storing that the number is visited or not
    vector<bool> visit (m,false);

    //Using the two forLoop  for finding the maximum number of element occur

    for(int i=0;i<m;i++){
    //if visited it will go to next element
        if(visit[i]==true){
            continue;
        }
        //declaring a variable to count the number of occurence
        int count = 0;
        // for loop to check dupliacte elements
        for(int j=0;j<m;j++){
            if(a[i]==a[j]){
                count++;
                visit[j]=true;
            }
        }

        cout<<a[i]<<" | "<<count<<endl;
    }
}

int main(){
    int m;
    cout<<"Enter the size";
    cin>>m;

vector<int> arr(m);
for(int i=0;i<m;i++){
    cin>>arr[i];

}
countFrequency(arr,m);
return 0;

}