
// Assignment 5 - Math Quiz

#include <iostream>
#include <fstream>
#include <conio.h>
#include <vector>
#include <string>

using namespace std;

int main()
{
	vector<string> questions;

	ifstream ifs("QuizQuestions.txt");
	string line;
	while (getline(ifs, line))
	{
		questions.push_back(line);
	}
	ifs.close();

	srand(time(NULL));
	int randomNumber1 = rand() % questions.size();
	int randomNumber2 = rand() % questions.size();
	int randomNumber3 = rand() % questions.size();
	string question1 = questions[randomNumber1] + " = ";
	string question2 = questions[randomNumber2] + " = ";
	string question3 = questions[randomNumber3] + " = ";

	cout << "Welcome to the Math Quiz!\n";

	cout << "\nQuestion 1: " << question1;
	cout << "\nEnter your answer: ";
	string answer1;
	cin >> answer1;

	cout << "\nQuestion 2: " << question2;
	cout << "\nEnter your answer: ";
	string answer2;
	cin >> answer2;

	cout << "\nQuestion 3: " << question3;
	cout << "\nEnter your answer: ";
	string answer3;
	cin >> answer3;

	ofstream ofs("QuizResults.txt");
	ofs << question1 << answer1 << "\n";
	ofs << question2 << answer2 << "\n";
	ofs << question3 << answer3 << "\n";
	ofs.close();

	cout << "\nResults saved to QuizResults.txt";

	(void)_getch();
	return 0;
}
