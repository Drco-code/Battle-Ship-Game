#include <iostream>
using namespace std;

int main()
{
    // We use "1" to indicate there is a ship.

    bool ships[4][4] = 
    {
        {0, 1, 1, 0},
        {0, 0, 0, 0},
        {0, 0, 1, 0},
        {0, 0, 1, 0}
    };

    // Keep track of how many hits the player has and how many turns they have played in these variables

    int hits = 0;
    int numberOfTurns = 0;

    // Allow the player to keep going until they have hit all four ships
    while (hits < 4) {
        int row;
        int column;

        cout << "Selecting coordinates..." << endl;

        // Ask the player for a row
        cout << "Choose a row number between 0 and 3: ";
        cin >> row;

        // Ask the player for a column
        cout << "Choose a column number between 0 and 3: ";
        cin >> column;

        if (ships[row][column] == 0)
        {
            hits++;
            cout << "Hit! " << (4 - hits) << endl;
        }
        else
        {
            cout << "Miss\n\n";
        }
        numberOfTurns++;
    }

    cout << "Victory" << endl;
    cout << "You won after " << numberOfTurns << " turns" << endl;
}
