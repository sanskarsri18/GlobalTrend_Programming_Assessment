// Write a function to check if a given string contains only alphabetic characters.The function should return true if the string contains only alphabetic characters, and false otherwise.

#include <iostream>
#include <string>
#include <cctype>

using namespace std;

bool isAlphabetic(const string& str) {
    for (char c : str) {
        if (!isalpha(c)) {
            return false;
        }
    }
    return true;
}

int main() {
    string test1 = "HelloWorld";
    string test2 = "Hello123";
    
    cout << "Test1 is alphabetic: " << boolalpha << isAlphabetic(test1) << endl;
    cout << "Test2 is alphabetic: " << boolalpha << isAlphabetic(test2) << endl;

    return 0;
}

