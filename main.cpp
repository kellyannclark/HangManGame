#include <iostream>
#include <string>
#include <vector>
#include "functions.h"
#include <cstdlib>
#include <ctime>
#include <chrono>

using namespace std;
using namespace std::chrono;

int main() {
    srand(time(0));
    const auto time_limit = minutes(1); // 1 minute time limit

    char playAgain = 'y';
    do {
        auto start = steady_clock::now();
        greet();

        // List of possible words
        vector<string>* words = new vector<string>{
            "algorithm", "binary", "compiler", "debug", "encryption",
            "function", "gateway", "hardware", "interface", "java",
            "kernel", "loop", "method", "node", "object",
            "pointer", "queue", "recursion", "syntax", "thread",
            "utilize", "variable", "widget", "xml", "yaml"
        };

        // Randomly select a word
        string codeword = (*words)[rand() % words->size()];
        string answer = string(codeword.length(), '_');
        int misses = 0;
        vector<char> incorrect;
        bool guess = false;
        char letter;
        auto elapsed_time = duration_cast<seconds>(steady_clock::now() - start);


        while (answer != codeword && misses < 7) {
            // Check elapsed time
            auto elapsed_time = duration_cast<seconds>(steady_clock::now() - start);
            if (elapsed_time >= time_limit) {
                cout << "\nTime's up! You didn't guess the word in time.\n";
                break;
            }

            // Display remaining time
            auto time_left = duration_cast<seconds>(time_limit - elapsed_time).count();
            cout << "\nTime remaining: " << time_left << " seconds" << endl;

            display_misses(misses);
            display_status(incorrect, answer);

            cout << "\nPlease enter your guess: ";
            cin >> letter;

            for (int i = 0; i < codeword.length(); i++) {
                if (letter == codeword[i]) {
                    answer[i] = letter;
                    guess = true;
                }
            }

            if (guess) {
                cout << "\nCorrect!\n";
            } else {
                cout << "\nIncorrect! Another portion of the person has been drawn.";
                incorrect.push_back(letter);
                misses++;
            }

            guess = false;
        }



        if (elapsed_time < time_limit) {
            end_game(answer, codeword);
        }

        delete words; // Release the memory


        cout << "Do you want to play again? (y/n): ";
        cin >> playAgain;
        cout << endl;

    } while (playAgain == 'y' || playAgain == 'Y');

    return 0;
}

