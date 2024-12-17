//Sameer Verma 
//Happyverma805@gmail.com
//21SCSE1011328

#include <bits/stdc++.h>
using namespace std;

int findSecondHighest(int arr[], int size) {
    if (size < 2) {
        cout << "Array does not have enough elements to find the second highest." << endl;
        return -1; // Indicating error
    }

    int first = INT_MIN;
    int second = INT_MIN;

    for (int i = 0; i < size; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }

    if (second == INT_MIN) {
        cout << "All elements in the array are the same." << endl;
        return -1;
    }

    return second;
}


//Sameer Verma 
//Happyverma805@gmail.com
//21SCSE1011328

int main() {
    int size;
    cin >> size;
    if (size <= 0) {
        cout << "Size is Invalid" << endl;
        return 0;
    }
    int arr[size];
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    
    int secondHighest = findSecondHighest(arr, size);
    if (secondHighest != -1) {
        cout << "The second highest number is: " << secondHighest << endl;
    }

    return 0;
}
