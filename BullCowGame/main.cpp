#include <iostream>
#include <string>

void PrintIntro();
void PlayGame();
std::string GetGuess();
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
	std::cout << "Welcome to Bulls and Cows." << std::endl;
	std::cout << "Can you guess the " << WordLength << " letter isogram I'm thinking of?" << std::endl;
	std::cout << std::endl;
	return;
}

void PlayGame()
{
	//Loop for the number of turns asking for guess
	int length = 5;
	for (int i = 0; i < length; i++)
	{
		std::string Guess = GetGuess();
		//Print the guess back to him
		std::cout << "Your guess is: " << Guess << std::endl;
		std::cout << std::endl;
	}
}

std::string GetGuess() 
{
	//Get a guess from the player
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

