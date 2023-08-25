
#include <vector>
#include <iostream>
using namespace std;

int main()
{
   
	vector<string> numbers;
	numbers.push_back("one");
	numbers.push_back("two");
	numbers.push_back("three");
	numbers.push_back("four");
	numbers.push_back("five");
	numbers.push_back("six");
	numbers.push_back("seven");
	numbers.push_back("eight");
	numbers.push_back("nine");

	int answer;
	cin >> answer;
	if(answer == 1){
		cout << numbers[0] ;
	}
	if (answer == 2) {
		cout << numbers[1];
	}
	if (answer == 3) {
		cout << numbers[2];
	}
	if (answer == 4) {
		cout << numbers[3];
	}
	if (answer == 5) {
		cout << numbers[4];
	}
	if (answer == 6) {
		cout << numbers[5];
	}
	if (answer == 7) {
		cout << numbers[6];
	}
	if (answer == 8) {
		cout << numbers[7];
	}
	if (answer == 9) {
		cout << numbers[8];
	}
	if (answer == 10) {
		cout << numbers[9];
	}



}

