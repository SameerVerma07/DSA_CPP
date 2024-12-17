//Sameer Verma 
//Happyverma805@gmail.com
//21SCSE1011328

#include <bits/stdc++.h>
using namespace std;

void findRepeatedWords(const string& sentence) {
    unordered_map<string, int> wordCount;
    stringstream ss(sentence);
    string word;
    
    while (ss >> word) {
        // Convert word to lowercase
        transform(word.begin(), word.end(), word.begin(), ::tolower);
        wordCount[word]++;
    }

    cout << "Repeated words and their counts:" << endl;
    for (const auto& entry : wordCount) {
        if (entry.second > 1) {
            cout << entry.first << ": " << entry.second << " times" << endl;
        }
    }
}

//Sameer Verma 
//Happyverma805@gmail.com
//21SCSE1011328

int main() {
    string sentence;
    cout << "Enter a sentence: ";
    getline(cin, sentence);

    findRepeatedWords(sentence);

    return 0;
}


