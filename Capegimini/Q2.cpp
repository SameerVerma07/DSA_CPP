/*
2. Problem Statement -
Write the code to traverse a matrix in a spiral format.
Sample Input
Input
5 4
123
4
5 6 78
9 10 11 12
13 14 15 16
17 18 19 20
Output
12348 12 16 20 19 18 17 13 9 5 6 7 11 15 12 14 10
*/

#include <bits/stdc++.h>
using namespace std;

void SpiralMatrix(int m, int n,vector<vector <int> > &arr)
{
   int left = 0, top=0;
   int right = m-1, bottom = n-1;


   while(left<=right && top<=bottom){

    for(int i=left;i<=right;i++){
        cout<<arr[top][i]<<" ";
    }
    top++;

    for(int i=top;i<=bottom;i++){
        cout<<arr[i][right]<<" ";
        
    }
    right--;
    if(top<=bottom){
        for(int i=right;i>=left;i--){
        cout<<arr[bottom][i]<<" ";
        }
         bottom--;
    }
   

    if(left<=right){
        for(int i=bottom;i>=top;i--)
        {
        cout<<arr[i][left]<<" ";
        }
        left++;
    }
    

   }


}

int main()
{

    int m, n;
    cout << "Enter the Size\n";
    cin >> m >> n;
    vector<vector<int> > arr(m, vector<int>(n));

    for(int i=0;i<m;i++){
        for(int j = 0;j<n;j++){
            cin>>arr[i][j];
        }
    }


    SpiralMatrix(m,n,arr);
    return 0;
}