//Sameer Verma 
//Happyverma805@gmail.com
//21SCSE1011328

#include<bits/stdc++.h>
using namespace std;


bool isNumeric(const std::string& str) {
    int length = str.length();
    int i = 0;

    // Skip leading spaces
    while (i < length && isspace(str[i])) {
        i++;
    }

    // Check for optional '-' or '+' at the start
    if (i < length && (str[i] == '-' || str[i] == '+')) {
        i++;
    }

    bool hasDecimal = false;
    while (i < length) {
        if (isdigit(str[i])) {
            i++;
        } else if (str[i] == '.' && !hasDecimal) {
            hasDecimal = true;
            i++;
        } else {
            return false;
        }
    }

    // Skip trailing spaces
    while (i < length && isspace(str[i])) {
        i++;
    }

    return i == length; 
}

//Sameer Verma 
//Happyverma805@gmail.com
//21SCSE1011328


int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);

    if (isNumeric(input)) {
        std::cout << "The given string is numeric." << std::endl;
    } else {
        std::cout << "The given string is not numeric." << std::endl;
    }

    return 0;
}


