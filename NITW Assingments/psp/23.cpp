#include <iostream>
#include <string>

using namespace std;

void countCharacters(const string& text) {
    int alphabetCount = 0;
    int digitCount = 0;
    int specialCharCount = 0;

    for (int i = 0; i < text.length(); ++i) {
        char ch = text[i];
        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
            alphabetCount++;
        } else if (ch >= '0' && ch <= '9') {
            digitCount++;
        } else if (ch != ' ') {
            specialCharCount++;
        }
    }

    cout << "Number of alphabets: " << alphabetCount << endl;
    cout << "Number of digits: " << digitCount << endl;
    cout << "Number of special characters: " << specialCharCount << endl;
}

int main() {
    cout << "Enter a string:" << endl;
    string input;
    getline(cin, input);

    countCharacters(input);

    return 0;
}
