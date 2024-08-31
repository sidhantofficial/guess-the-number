#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void start(){
    srand(static_cast<unsigned int>(time(0)));

    int secretNumber = rand() % 100 + 1;
    int guess;
    cout << "Welcome to the Number Guessing Game!" << endl;
    int level;
    cout << "Choose difficulty level: 1, 2 or 3" << endl;
    cin >> level;
    cout << "I have picked a number between 1 and 100. Try to guess it!" << endl << endl;
    int trials;
    switch(level){
        case 1:
        trials = 8;
        break;
        case 2:
        trials = 6;
        break;
        case 3:
        trials = 3;
        break;
        default:
        cout << "Enter a valid input" << endl;
        exit(0);
    }
    while(trials != 0){
        cout << "Enter the guess: " << endl;
        cin >> guess;
        trials--;
        if(trials == 0){
            cout << "You Lost!!!" << endl;
            int newGame;
            cout << "To play again enter 1, To exit enter 0" << endl;
            cin >> newGame;
            switch(newGame){
                case 0:
                exit(0);
                case 1:
                start();
                default:
                cout << "Enter a valid input" << endl;
        }
    }
        if(guess < secretNumber && secretNumber - guess <= 10){
            cout << "low! Try again." << endl;
        }
        else if(guess < secretNumber && secretNumber - guess > 10){
            cout << "Too low! Try again." << endl;
        }
        else if(guess > secretNumber && guess - secretNumber <= 10){
            cout << "high! Try again." << endl;
        }
        else if(guess > secretNumber && guess - secretNumber > 10){
            cout << "Too high! Try again." << endl;
        }
}
}

int main(){
    start();
    return 0;
}
