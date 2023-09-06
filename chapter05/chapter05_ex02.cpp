// ex02 - ex05
// CELSIUS TO KELVIN and KELVIN TO CELSIUS
#include <iostream>
using namespace std;

double ctok(double c) {             //convert celsius to kelvin      
    double k = c + 273.15;
    return k;
}

double ktoc(double k) {             //convert celsius to kelvin      
        double c = k - 273.15;
        return c;
}

int main()
{
    cout << " Click '1' to convert Celsius to Kelvin, '2' if you want convert Kelvin to Celsius" << endl;
    int pick;
    cin >> pick;

    if (pick == 1) {
        double c = 0;
        cin >> c;                       //import celsius from user
        double k = ctok(c);

        if (k < 0) {
            cout << "temp is under 0";
            exit;
        }
        else {
            cout << k << endl;
        }
    }
    else {
        double k;
        cin >> k;
        double c = ktoc(k);
        cout << c << endl;
    }



    




}

