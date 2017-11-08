#include <iostream>
#include <string>
using namespace std;

void PrintIntro();
void PlayGame();
string GetGuess();
bool AskToPlayAgain();
//Entry point of the application
int main()
{
	bool bPlayAgain = false;
	do
	{
		PrintIntro();
		PlayGame();
		bPlayAgain = AskToPlayAgain();
	} while (bPlayAgain);
	return 0; //Exit the application
}

void PrintIntro() 
{
	//Introduce a game
	constexpr int WordLength = 9;
	cout << "Welcome to Bulls and Cows." << endl;
	cout << "Can you guess the " << WordLength << " letter isogram I'm thinking of?" << endl;
	cout << endl;
	return;
}

void PlayGame()
{
	//Loop for the number of turns asking for guess
	int length = 5;
	for (int i = 0; i < length; i++)
	{
		string Guess = GetGuess();
		//Print the guess back to him
		cout << "Your guess is: " << Guess << endl;
		cout << endl;
	}
}

string GetGuess() 
{
	//Get a guess from the player
	string Guess = "";
	cout << "Enter your guess: ";
	getline(cin, Guess);
	return Guess;
}

bool AskToPlayAgain()
{
	cout << "Do you want to  play again (y/n)? ";
	string Response = "";
	getline(cin, Response);
	return (Response[0] == 'y') || (Response[0] == 'Y');
}
