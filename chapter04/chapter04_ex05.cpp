//Calculator
#include <iostream>
using namespace std;

void add(double a, double b){
    double total;
    total = a + b;
    cout << total;
}
void substr(double a, double b) {
    double total;
    total = a - b;
    cout << total;
}
void multipl(double a, double b) {
    double total;
    total = a * b;
    cout << total;
}
void divis(double a, double b) {
    double total;
    total = a / b;
    cout << total;
}



int main()
{
    cout << "What you want to do?" << endl;
    cout << "1.adding" << endl;
    cout << "2.substraction" << endl;
    cout << "3.multiplication" << endl;
    cout << "4.division" << endl;
    int answer;
    cin >> answer;


    int x;
    int y;
    cout << "First value: ";
    cin >> x;
    cout<<endl << "Second value: ";
    cin >> y;



    switch (answer) {
    case 1:
        add(x, y);
    case 2:
        substr(x, y);
    case 3:
        multipl(x, y);
    case 4:
        divis(x, y);



    }

}