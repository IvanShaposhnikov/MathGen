#include <iostream>
#include <time.h>
#include <Windows.h>

using namespace std;

int score = 0, lives = 3;

void lose() {
	cout << "You lose :(";

	Sleep(2000);

	score = 0;
	lives = 3;

	system("cls");
}

void win() {
	cout << "You win :)";

	Sleep(2000);

	score = 0;
	lives = 3;

	system("cls");
}

void lv1() {
	int a = rand() % 1000 + 1, b = rand() % 1000 + 1, x = 0;
	while (true) {
		cout << a << " + " << b << " = x\nx = ";
		cin >> x;
		if (x == (a + b)) {
			system("cls");
			score += 50;
			cout << "Correct! \n+50 points";
			Sleep(1500);
			system("cls");
			break;
		}
		else {
			system("cls");
			score -= 10;
			cout << "Wrong! \n-10 points";
			Sleep(1500);
			system("cls");
		}
	}
}

void lv2() {
	system("cls");
}

void lv3() {
	system("cls");
}

void game(bool mode) {
	int lvl = 1;

	if (mode) {			// 3 lives
		
	}
	else {				// 10 equations
		int lvl = 1;

		while (lvl < 10) {
			
			cout << "Equasion " << lvl;
			Sleep(1500);
			system("cls");

			if (lvl <= 5) lv1();
			else if (lvl <= 8) lv2();
			else lv3();
			
			cout << "Your score: " << score;
			Sleep(1500);
			system("cls");

			lvl++;
		}
		win();
	}
}

int main() {
	srand(time(0));

	bool mode;

	while (true) {

		cout << "Select mode: \n[0] - 10 equations \n[1] - 3 lives \n";
		cin >> mode;

		system("cls");

		game(mode);
	}
	return 0;
}