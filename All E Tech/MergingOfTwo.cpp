//Sameer Verma 
//Happyverma805@gmail.com
//21SCSE1011328

#include <bits/stdc++.h>
using namespace std;

vector<int> mergeSortedLists(const vector<int>& list1, const vector<int>& list2) {
    vector<int> merged;
    int i = 0, j = 0;

    while (i < list1.size() && j < list2.size()) {
        if (list1[i] < list2[j]) {
            merged.push_back(list1[i]);
            i++;
        } else {
            merged.push_back(list2[j]);
            j++;
        }
    }

    
    while (i < list1.size()) {
        merged.push_back(list1[i]);
        i++;
    }

    
    while (j < list2.size()) {
        merged.push_back(list2[j]);
        j++;
    }

    return merged;
}

//Sameer Verma 
//Happyverma805@gmail.com
//21SCSE1011328

int main() {
    int n1, n2;
    cout << "Size of 1st List: - ";
    cin >> n1;
    vector<int> list1(n1);
    cout << "Enter elements of the 1st sorted list: ";
    for (int i = 0; i < n1; i++) {
        cin >> list1[i];
    }

    cout << "Size of 2nd List: - ";
    cin >> n2;
    vector<int> list2(n2);
    cout << "Enter elements of the 2nd sorted list: ";
    for (int i = 0; i < n2; i++) {
        cin >> list2[i];
    }

    vector<int> mergedList = mergeSortedLists(list1, list2);

    cout << "Merged sorted list: ";
    for (int num : mergedList) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
