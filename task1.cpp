#include<iostream>
using namespace std;

int main()
{
    srand(time(0));

    int rnm = rand() % 100 + 1;
    int gs = 0;

    cout << "Guess the number between 1 and 100: "<<endl;
    while (gs != rnm) {
        cin >> gs;

        if (gs < rnm) {
            cout << "The number you have guessed is low"<<endl;
        } else if (gs > rnm) {
            cout << "The number you have guessed is high"<<endl;
        } else {
            cout << "You have guesses the correct number " << rnm << endl;
        }
    }

    return 0;
}