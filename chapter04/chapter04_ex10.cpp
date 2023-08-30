// ROCK , PAPER, SCISSORS
#include <iostream>
using namespace std;




	int main() {

		int pcScore = 0;
		int userScore = 0;
		char userChoice;
		int pcDraw;
		char pcChoice;
		char quit = 'q';

		cout << "Welcome in game rock, paper, scissors!" << endl;
		cout << "Let's start! Write 'r' for rock, 'p' for paper, 's' for scissors!" << endl;

		


		


		while (true) {
			pcDraw = rand() % 3 + 1;
			if (pcDraw == 1) {
				pcChoice = 'r';
			}
			else if (pcDraw == 2) {
				pcChoice = 'p';
			}
			else if (pcDraw == 3) {
				pcChoice = 's';
			}

			cin >> userChoice;
			switch (userChoice) {
			case 'r':
				if (pcChoice == 'r') {
					cout << "Its tie! Play Again!" << endl;
					cout << "Score:   User: " << userScore << "PC: " << pcScore << endl;
					break;
				}
				else if (pcChoice == 'p') {
					pcScore++;
					cout << "PC win!" << endl;
					cout << "Score:   User: " << userScore << "PC: " << pcScore << endl;
					break;
				}
				else if (pcChoice == 's') {
					userScore++;
					cout << "User win!" << endl;
					cout << "Score:   User: " << userScore << "PC: " << pcScore << endl;
					break;
				}
				break;
			case 'p':
				if (pcChoice == 'r') {
					userScore++;
					cout << "User win!" << endl;
					cout << "Score:   User: " << userScore << "PC: " << pcScore << endl;
					break;
				}
				else if (pcChoice == 'p') {
					cout << "its tie!" << endl;
					cout << "Score:   User: " << userScore << "PC: " << pcScore << endl;
					break;
				}
				else if (pcChoice == 's') {
					pcScore++;
					cout << "PC win!" << endl;
					cout << "Score:   User: " << userScore << "PC: " << pcScore << endl;
					break;
				}
				break;

			case 's':
				if (pcChoice == 'r') {
					pcScore++;
					cout << "PC win!" << endl;
					cout << "Score:   User: " << userScore << "PC: " << pcScore << endl;
					break;
				}
				else if (pcChoice == 'p') {
					userScore++;
					cout << "UserWin!" << endl;
					cout << "Score:   User: " << userScore << "PC: " << pcScore << endl;
					break;
				}
				else if (pcChoice == 's') {
					cout << "Its Tie!" << endl;
					cout << "Score:   User: " << userScore << "PC: " << pcScore << endl;
					break;
				}
				break;
			case 'q':
				exit;





			}
		}





		}