//Guessing number from 1-100.
#include <iostream>
#include <vector>
using namespace std;



int main()
{
    
    cout << "Think number from 1-100. Type 'c' for correct, 'h' for higher, 'l' for lower! \n";


    int guess = 50;
    int counter = 0;
    vector<int> parsers(6);
    char answer = ' ';

    parsers[0] = 25;
    parsers[1] = 13;
    parsers[2] = 6;
    parsers[3] = 3;
    parsers[4] = 2;
    parsers[5] = 1;

    while (answer != 'c') {
        cout << "My shot: " << guess << endl;
        ++counter;
        cout << "c, h, or l ?";
        cin >> answer;
        switch (answer) {

        case 'c':
            break;

        case 'h':
            if (counter <= parsers.size())
                guess += parsers[counter - 1];
            else
                ++guess;
            break;
        case 'l':
            if (counter <= parsers.size())
                guess -= parsers[counter - 1];
            else
                --guess;
            break;
        default:
            cout << "This is not a valid answer, use 'c', 'h' or 's'\n";
            --counter;
            break;

        }


    }

    string shotCounter;
    if (counter == 1)
        shotCounter = " try ";
    else
        shotCounter = " tries ";
    cout << "Yeah! It took me " << counter << shotCounter << "to find your number, " << guess << ".\n";


}

