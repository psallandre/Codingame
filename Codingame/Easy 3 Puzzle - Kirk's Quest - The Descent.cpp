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

    // game loop
    while (1) {
        int SX; //horizontal
        int SY; //altitude
        cin >> SX >> SY; cin.ignore();

        std::vector<int> mountains;
        for (int i = 0; i < 8; i++) {
            int MH; // represents the height of one mountain, from 9 to 0. Mountain heights are provided from left to right.
            cin >> MH; cin.ignore();
            mountains.push_back(MH);
        }

        auto next_pos = std::max_element(mountains.begin(), mountains.end());
        int pos = distance(mountains.begin(), next_pos);
        cerr << "pos " << pos << endl;
        // Write an action using cout. DON'T FORGET THE "<< endl"
        // To debug: cerr << "Debug messages..." << endl;
        if (pos == SX && mountains[pos]>0)
            cout << "FIRE" << endl; // either:  FIRE (ship is firing its phase cannons) or HOLD (ship is not firing).
        else
            cout << "HOLD" << endl; // either:  FIRE (ship is firing its phase cannons) or HOLD (ship is not firing).
    }
}