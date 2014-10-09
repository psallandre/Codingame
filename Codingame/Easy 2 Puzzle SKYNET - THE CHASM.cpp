#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
* Auto-generated code below aims at helping you parse
* the standard input according to the problem statement.
**/
int main()
{
    int R; // the length of the road before the gap.
    cin >> R; cin.ignore();
    int G; // the length of the gap.
    cin >> G; cin.ignore();
    int L; // the length of the landing platform.
    cin >> L; cin.ignore();

    cerr << "R" << R << endl;
    cerr << "G" << G << endl;
    int tot = R + G + L;
    cerr << "tot " << tot << endl;

    // game loop
    while (1) {
        int S; // the motorbike's speed.
        cin >> S; cin.ignore();
        int X; // the position on the road of the motorbike.
        cin >> X; cin.ignore();

        // Write an action using cout. DON'T FORGET THE "<< endl"
        // To debug: cerr << "Debug messages..." << endl;
        cerr << "S" << S << endl;
        cerr << "X" << X << endl;


        if (X<R - 1) {
            if (S>G + 1)
                cout << "SLOW" << endl; // A single line containing one of 4 keywords: SPEED, SLOW, JUMP, WAIT.
            else if (S<G + 1)
                cout << "SPEED" << endl; // A single line containing one of 4 keywords: SPEED, SLOW, JUMP, WAIT.
            else
                cout << "WAIT" << endl; // A single line containing one of 4 keywords: SPEED, SLOW, JUMP, WAIT.
        }
        else if (X == R - 1)
            cout << "JUMP" << endl; // A single line containing one of 4 keywords: SPEED, SLOW, JUMP, WAIT.
        else if (S>1)
            cout << "SLOW" << endl; // A single line containing one of 4 keywords: SPEED, SLOW, JUMP, WAIT.
        else if (X == tot - 1)
            cout << "SLOW" << endl; // A single line containing one of 4 keywords: SPEED, SLOW, JUMP, WAIT.
        else
            cout << "WAIT" << endl; // A single line containing one of 4 keywords: SPEED, SLOW, JUMP, WAIT.


    }
}