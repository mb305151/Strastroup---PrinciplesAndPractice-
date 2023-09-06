
#include <iostream>
using namespace std;

double ctof(double c) {
    double f = (c * 1.8) + 32;
    return f;
}

double ftoc(double f) {
    double c = (f - 32) * 0.55556;
    return c;
}



int main()
{
    cout << "Choose '1' to convert Celsius -> Fahrenheit, '2' to convert Fahrenheit -> Celsius" << endl;
    int pick;
    cin >> pick;

    if (pick == 1) {
        double c;
        cin >> c;
        cout << endl;
        double f = ctof(c);
        cout << f;
    }
    else {
        double f;
        cin >> f;
        cout << endl;
        double c = ftoc(f);
        cout << c;
    }



   






}

