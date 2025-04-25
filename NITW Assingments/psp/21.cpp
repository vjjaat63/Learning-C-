#include <iostream>
#include <string>
#include <vector>
using namespace std;


void countCharacters(const string& text) {
    int charFreq[26] = {0};

    for (int i = 0; i < text.length(); ++i) {
        char ch = tolower(text[i]);
        if (isalpha(ch)) { // Count only alphabetic characters
            charFreq[ch - 'a']++;
        }
    }

    cout << "\nCharacter Frequencies:" << endl;
    for (size_t i = 0; i < 26; ++i) {
        if (charFreq[i] > 0) {
            cout << "'" << char(char(i + 'a')) << "': " << charFreq[i] << endl;
        }
    }
}

void countWords(const string& text) {
    vector<string> words;
    string word;

    for (size_t i = 0; i < text.length(); ++i) {
        if (isspace(text[i]) || i == text.length() - 1) {
            if (i == text.length() - 1 && !isspace(text[i])) {
                word += text[i]; 
            }
            if (!word.empty()) {
                words.push_back(word); 
                word.clear(); 
            }
        } else {
            word += text[i]; 
        }
    }

    cout << "\nWord Frequencies:" << endl;
    for (const string& w : words) {
        int count = 0;
        for (const string& check : words) {
            if (w == check) {
                count++;
            }
        }
        
        if (count > 0) {
            cout << "'" << w << "': " << count << endl;
   
            for (size_t j = 0; j < words.size(); ++j) {
                if (words[j] == w) {
                    words[j] = "";
                }
            }
        }
    }
}

int main() {
    cout << "Enter a sentence:" << endl;
    string sentence;
    getline(cin, sentence); 

    countCharacters(sentence);
    countWords(sentence);     

    return 0;
}
