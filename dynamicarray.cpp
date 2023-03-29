#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    string sentence;
    cout << "Enter a sentence: ";
    getline(cin, sentence);

    // Loop through each character in the sentence
    for (int i = 0; i < sentence.length(); i++) {
        // Capitalize the first letter of each word
        if (i == 0 || sentence[i-1] == ' ') {
            sentence[i] = toupper(sentence[i]);
        }
        // Capitalize the last letter of each word
        if (i > 0 && sentence[i-1] != ' ' && sentence[i] == ' ') {
            sentence[i-1] = toupper(sentence[i-1]);
        }
        if (i == sentence.length()-1) {
            sentence[i] = toupper(sentence[i]);
        }
    }

    cout << sentence << endl;

    return 0;
}
