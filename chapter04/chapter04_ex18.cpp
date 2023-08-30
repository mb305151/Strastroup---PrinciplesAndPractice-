//ax^2 + bx + c

#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    int delta = 0;
    int x, x2;
    cout << "Give me your a, b, c: " << endl;
    cin >> a >> b >> c;

    delta = (b * b) - (4 * a * c);

    if (delta < 0) {
        cout << "There is no x." << endl;
    }
    else if (delta == 0) {
        x = b / (2 * a);
        cout << "There is one x: " << x << endl;
    }
    else if (delta > 0) {
        x = (-b - sqrt(delta)) / (2 * a);
        x2 = (-b + sqrt(delta)) / (2 * a);
        cout << "There is two x: " << x << ", " << x2 << endl;


    }






}

