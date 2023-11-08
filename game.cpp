#include <iostream>
#include <string>
#include <fstream>
#include <ctime>
#include <cstdlib>
#include <vector>

using namespace std;

// Function to display hints
void displayHints(const string& targetWord, const string& guessedWord) {
    cout << "Matching characters: ";
    bool correct = true; // Flag to check correctness

    for (int i = 0; i < targetWord.length(); i++) {
        if (targetWord[i] == guessedWord[i]) {
            cout << targetWord[i];
        } else {
            cout << "_ "; // Display an underscore for incorrect positions
            correct = false; // Guess is incorrect
        }
    }

    cout << endl;
}

// Function to display the first and last two characters of a word
void displayFirstAndLastTwo(const string& word) {
    if (word.length() >= 2) {
        cout << "\nFirst two characters: " << word.substr(0, 2) << endl;
        cout << "\nLast two characters: " << word.substr(word.length() - 2, 2) << endl;
    } else {
        cout << "\nThe word is too short to extract the first and last two characters." << endl;
    }
}

// Function to display the first four characters of a word
void displayFirstFour(const string& word) {
    if (word.length() >= 4) {
        cout << "\nFirst four characters: " << word.substr(0, 4) << endl;
    } else {
        cout << "\nThe word is too short to extract the first four characters." << endl;
    }
}

// Function to display all characters of a word except the last one
void displayAllButLast(const string word) {
    cout<<"\nAll but the last character: " << word.substr(0, word.length() - 1) << endl;
}

// Function to display the last four characters of a word
void displayLastFour(const string& word) {
    if (word.length() >= 4) {
        cout << "\nLast four characters: " << word.substr(word.length() - 4, 4) << endl;
    } else {
        cout << "\nThe word is too short to extract the last four characters." << endl;
    }
}

//Function to check if the deduction per quiz is greater than 5
bool checkDeduct(int deduct, string w){
    if(deduct>5){
        cout<<"You have exausted all your available points for this quiz. The answer is: "<<w<<endl; 
        return true;
    }

    return false;
}

int main() {
    srand(static_cast<unsigned int>(time(nullptr)));

    vector<string> words;

    ifstream wordsFile("words.txt");
    if (wordsFile.is_open()) {
        string word;
        while (getline(wordsFile, word)) {
            words.push_back(word);
        }
        wordsFile.close();
    } else {
        cerr << "Failed to open words file. Please make sure 'words.txt' exists." << endl;
        return 1;
    }

    int points = 0;
    int deduct = 0;
    int high_score = 0;

    ifstream highScoreFile("highscore.txt");
    if (highScoreFile.is_open()) {
        highScoreFile >> high_score;
        highScoreFile.close();
    }

    cout << "\nWELCOME TO THE WORD GUESSING GAME\n" << endl;

    cout << "Here are the game rules" << endl;
    cout << "============================================================================================" << endl;
    cout << "1. Each quiz has 5 points for a correct guess" << endl;
    cout << "2. You have 3 attempts per quiz" << endl;
    cout << "3. You can get hints when stuck, but points will be deducted for each hint given as follows:" << endl;
    cout << "   a). Type 'h1' to get first and last two characters of the word (2 points deduction)" << endl;
    cout << "   b). Type 'h2' to get first four characters of the word (3 points deduction)" << endl;
    cout << "   c). Type 'h3' to get the last four characters of the word (3 points deduction)" << endl;
    cout << "   d). Type 'h4' to get the all but the last character of the word (4 points deduction)" << endl;
    cout << "============================================================================================" << endl;

    int attempts = 3;
    string guess;
        
    while (true) {
        
        int randomIndex = rand() % words.size();
        string word = words[randomIndex];

        cout << "====================================================================" << endl;
        cout << "\nAttempts remaining: 3" << endl;
        cout<<"-------------------------------------------"<<endl;
        cout << "Think of a word of " << word.length() << " letters that starts with '" << word[0] << "' and ends with '" << word[word.length() - 1] << "'" << endl;

        while (attempts > 0) {
            cout << "\nWhich word do you think of? (Type 'exit' to quit): ";
            getline(cin, guess);

            displayHints(word, guess);

                if( guess=="h1") {
                    deduct+=2;
                    attempts=attempts+1;
                    if (checkDeduct(deduct, word)) {
                        break; // Move to the next quiz
                    }
                    displayFirstAndLastTwo(word);


                }

                if (guess == "h2") {
                    deduct += 3;
                    attempts=attempts+1;
                    if (checkDeduct(deduct, word)) {
                        break; // Move to the next quiz
                    }
                    displayFirstFour(word);
                } else if (guess == "h3") {
                    attempts=attempts+1;
                    deduct += 3;
                    if (checkDeduct(deduct,word)) {
                        break; // Move to the next quiz
                    }
                    displayLastFour(word);
                } else if (guess == "h4") {
                    attempts=attempts+1;
                    deduct += 4;
                    if (checkDeduct(deduct, word)) {
                        break; // Move to the next quiz
                    }
                    displayAllButLast(word);
                }



            if (guess == "exit") {
                cout << "Exiting the game." << endl;
                break;
            }

            if (guess == word) {
                points += 5 - deduct;
                cout<<"\nYour guess was right!\n";
                cout<<"Points for this game: "<<5-deduct<<endl;
                cout << "Total points: " << points<< "\n"<< endl;
                


                if (points > high_score) {
                    high_score = points;
                    cout << "Congratulations! You broke the previous record of " << high_score - 5 << " points!" << endl;
                }
                break;
            } else {
                
                cout << "\nYour guess isn't right." << endl;
                attempts=attempts-1;
                cout <<"\nAttemps remaining: "<<attempts;
                cout<<"\n-------------------------------------------"<<endl;
                

                if (attempts ==0) {

                    cout << "\nYour attempts are depleted for this quiz. The correct answer was '" << word << "'\n...on to the next one" << endl;
                }
            }
        }

        if (guess == "exit") {
            break;
        }

        attempts = 3;
        deduct = 0;
    }

    cout << "\nGame summary:" << endl;
    cout << "--------------------------------" << endl;
    cout << "Your score: " << points << endl;
    cout << "High score: " << high_score << endl;
    cout << "--------------------------------" << endl;

    ofstream highScoreOut("highscore.txt");
    if (highScoreOut.is_open()) {
        highScoreOut << high_score;
        highScoreOut.close();
    }

    cout << "Thanks for playing!" << endl;
    return 0;
}
