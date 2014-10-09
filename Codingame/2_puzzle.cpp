#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/
int main2()
{
    int R; // number of rows.
    int C; // number of columns.
    int A; // number of rounds between the time the alarm countdown is activated and the time the alarm goes off.
    cin >> R >> C >> A; cin.ignore();

    bool done = false;
    // game loop
    while (1) {
        int KR; // row where Kirk is located.
        int KC; // column where Kirk is located.
        cin >> KR >> KC; cin.ignore();
        std::vector<string> maze;
        for (int i = 0; i < R; i++) {
            string ROW; // C of the characters in '#.TC?' (i.e. one line of the ASCII maze).
            cin >> ROW; cin.ignore();
            maze.push_back(ROW);
        }
        
        for(auto const& s:maze)
            cerr << s << endl;

        //find Control
        int ControlR, ControlC;
        int row = 0;
        for(auto const& s:maze) {
            auto pos = s.find('C');
            if(pos != string::npos) {
                ControlR = row;
                ControlC = pos;
                break;
            }
            row++;
        }
        
        
                
        
        

        // Write an action using cout. DON'T FORGET THE "<< endl"
        // To debug: cerr << "Debug messages..." << endl;
        if(!done)
            cout << "RIGHT" << endl;
        else
            cout << "LEFT" << endl;
        if(KC==11)
            done =true;
        cerr << "Debug messages..." << KC << boolalpha << done << endl;
    }
}
