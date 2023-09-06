// SOLVING ZEROS OF A LINEAR FUNCTIONS
#include <iostream>
using namespace std;

int sqrtCalc(int a, int b, int c) {
    double mySqrt = sqrt((b * b) - (4*a*c));
    return mySqrt;
}

int main()
{
    int a, b, c;
    double x, x1, x2;

    cout << "Import a , b , c\n";
    cin >> a >> b >> c;
    double mySqrt = sqrtCalc(a, b, c);

    x = (- b - mySqrt) / (2 * a);
    x1 = (-b - mySqrt) / (2 * a);
    x2= (-b + mySqrt) / (2 * a);


    if (mySqrt > 0) {
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    }
    else if (mySqrt = 0) {
        cout << "x = " << x << endl;
    }
    else {
        cout << "no zero places";
    }








}
