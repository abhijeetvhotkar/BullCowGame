#include <iostream>
#include <string>
#include "FBullCowGame.h"

void PrintIntro();
void PlayGame();
std::string GetGuess();
bool AskToPlayAgain();

FBullCowGame BCGame; //Instantiate a new game

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
	std::cout << "Welcome to Bulls and Cows." << std::endl;
	std::cout << "Can you guess the " << WordLength << " letter isogram I'm thinking of?" << std::endl;
	std::cout << std::endl;
	return;
}

void PlayGame()
{

	int MaxTries = BCGame.GetMaxTries();
	
	//Loop for the number of turns asking for guess
	for (int i = 0; i < MaxTries; i++)
	{
		std::string Guess = GetGuess();
		
		//Print the guess back to him
		std::cout << "Your guess is: " << Guess << std::endl;
		std::cout << std::endl;
	}
}

std::string GetGuess() 
{
	int CurrentTry = BCGame.GetCurrentTry();
	//Get a guess from the player
	std::cout << "Try " << CurrentTry << ". Enter your Guess: ";
	std::string Guess = "";
	std::cout << "Enter your guess: ";
	std::getline(std::cin, Guess);
	return Guess;
}

bool AskToPlayAgain()
{
	std::cout << "Do you want to  play again (y/n)? ";
	std::string Response = "";
	std::getline(std::cin, Response);
	return (Response[0] == 'y') || (Response[0] == 'Y');
}

