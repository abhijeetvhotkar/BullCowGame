#include <iostream>
#include <string>
using namespace std;

void PrintIntro();
string GetGuessAndPrintBack();

//Entry point of the application
int main()
{
	PrintIntro();
	
	//Loop for the number of turns asking for guess
	int length = 5;
	for (int i = 0; i < length; i++)
	{
		GetGuessAndPrintBack();
		cout << endl;
	}
	return 0;
}


void PrintIntro() {
	//Introduce a game
	constexpr int WordLength = 9;
	cout << "Welcome to Bulls and Cows." << endl;
	cout << "Can you guess the " << WordLength << " letter isogram I'm thinking of?" << endl;
	return;
}

string GetGuessAndPrintBack() {
	//Get a guess from the player
	string Guess = "";
	cout << "Enter your guess: ";
	getline(cin, Guess);
	//Print the guess back to him
	cout << "Your guess is: " << Guess << endl;
	return Guess;
}