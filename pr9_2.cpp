#include <iostream>
#include <map>
#include <sstream>
using namespace std;

int main() {
    string sentence, word;
    map<string, int> freq;

    cout << "Enter sentence: ";
    getline(cin, sentence);

    stringstream ss(sentence);

    while (ss >> word) {
        freq[word]++;
    }

    cout << "Word Frequency:\n";
    for (auto it = freq.begin(); it != freq.end(); it++) {
        cout << it->first << " = " << it->second << endl;
    }
    cout<<"25cs032";

    return 0;
}