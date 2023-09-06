
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int amountOfNumbersToSum;
    vector <int> numbers;
    int number;
    int sum = 0;

    cout << "How many numbers do you want to sum?\n";
    cin >> amountOfNumbersToSum;
    cout << "write down the numbers, end with |\n";


    while (cin >> number) {
        numbers.push_back(number);
    }
    
  

    for (int i = 0; i < amountOfNumbersToSum; i++) {
        sum += numbers[i];
        
    }
    cout << sum;



}

