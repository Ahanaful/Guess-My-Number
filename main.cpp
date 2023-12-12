#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{ srand(time(0));
int theNumber = rand() % 100+1;
int tries = 0, guess;
    cout << "\n Welcome to the Guess Number \n" ;

    do {
        cout << " Enter your guess = " ;
        cin >> guess;
        ++tries;

        if (guess > theNumber){

            cout << " You are too high" << endl;

        }

        if ( guess < theNumber){

            cout << "You are too low" << endl;

        }
    }
        while (guess != theNumber);

        cout << " you have guessed right" << " at the " << tries << "th time" <<endl;

return 0;
}






