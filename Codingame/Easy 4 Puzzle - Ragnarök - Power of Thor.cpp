#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
* Auto-generated code below aims at helping you parse
* the standard input according to the problem statement.
**/

struct Pos {
    int X;
    int Y;
    Pos(int x, int y)
        : X(x), Y(y)
    {}
    void N() { cout << "N" << endl; Y--; }
    void S() { cout << "S" << endl; Y++; }
    void E() { cout << "E" << endl; X++; }
    void W() { cout << "W" << endl; X--; }
    void SE() { cout << "SE" << endl; Y++; X++; }
    void SW() { cout << "SW" << endl; Y++; X--; }
    void NE() { cout << "NE" << endl; Y--; X++; }
    void NW() { cout << "NW" << endl; Y--; X--; }
};

int main()
{
    int LX; // the X position of the light of power
    int LY; // the Y position of the light of power
    int TX; // Thor's starting X position
    int TY; // Thor's starting Y position
    cin >> LX >> LY >> TX >> TY; cin.ignore();

    Pos pos(TX, TY);
    // game loop
    while (1) {
        int E; // The level of Thor's remaining energy, representing the number of moves he can still make.
        cin >> E; cin.ignore();

        // Write an action using cout. DON'T FORGET THE "<< endl"
        // To debug: cerr << "Debug messages..." << endl;
        cerr << "X " << pos.X << endl;
        cerr << "Y " << pos.Y << endl;

        if (pos.X<LX && pos.Y<LY)
            pos.SE();
        else if (pos.X>LX && pos.Y<LY)
            pos.SW();
        else if (pos.X<LX && pos.Y>LY)
            pos.NE();
        else if (pos.X>LX && pos.Y>LY)
            pos.NW();
        else {
            if (pos.X<LX)
                pos.E();
            else if (pos.X>LX)
                pos.W();
            if (pos.Y<LY)
                pos.S();
            else if (pos.Y>LY)
                pos.N();
        }
    }
}