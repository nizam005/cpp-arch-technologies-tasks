#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));
    char choice;

    do {
        int dice1 = rand() % 6 + 1;
        int dice2 = rand() % 6 + 1;

        cout << "Dice 1: " << dice1 << endl;
        cout << "Dice 2: " << dice2 << endl;

        cout << "Roll again? (y/n): ";
        cin >> choice;

    } while(choice == 'y' || choice == 'Y');

    cout << "Game Ended!" << endl;

    return 0;
}
