#include<iostream>

using namespace std;


int getScore() {
	int n = -1;
	do {
		cout << "Digite la calificacion: ";
		cin >> n;
		if (n < 1 || n>20)
			cout << "La calficiacion debe estar dentro del rango cerrado [1,20]" << endl;
	} while (n < 1 || n>20); //[1-20]
	return n;
}


char interpretScore(int score) { //score in [1-20]
	if (score >= 19)
		return 'A';
	if (score >= 16)
		return 'B';
	if (score >= 13)
		return 'C';
	if (score >= 10)
		return 'D';
	return 'E';
}


void showScore(char char_s) {
	cout << char_s << endl;
}


int main() {
	int score;
	char char_score;

	score = getScore();
	char_score = interpretScore(score);
	showScore(char_score);

	return 0;
}