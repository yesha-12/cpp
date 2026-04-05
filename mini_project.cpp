#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

// Function to shuffle word
string scrambleWord(string word) {
    string scrambled = word;
    int n = word.length();

    for (int i = 0; i < n; i++) {
        int j = rand() % n;
        char temp = scrambled[i];
        scrambled[i] = scrambled[j];
        scrambled[j] = temp;
    }
    return scrambled;
}

int main() {
    string words[] = {"code", "game", "computer", "logic", "program"};
    int size = 5;

    srand(time(0));

    int score = 0;
    char choice;

    cout << "===== Word Scramble Game =====\n";

    do {
        // Select random word
        string word = words[rand() % size];

        // Scramble it
        string scrambled = scrambleWord(word);

        cout << "\nScrambled word: " << scrambled;
        cout << "\nYour guess: ";

        string guess;
        cin >> guess;

        if (guess == word) {
            cout << "🎉 Correct!\n";
            score++;
        } else {
            cout << "❌ Wrong! Correct word was: " << word << endl;
        }

        cout << "Score: " << score << endl;

        cout << "\nPlay again? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    cout << "\nFinal Score: " << score << endl;

    return 0;
}
