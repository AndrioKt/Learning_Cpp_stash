#include <conio.h>
#include <iostream>
#include <cmath>
#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctime>
#include <random>
#include <array>
enum numbers
{
	two=2,
	thre,
	four,
	five,
	six,
	seven,
	eight,
	nine,
	ten,
	jack, //валет
	queen,
	king,
	ace, //туз
	max_numbers
};
enum suit
{
	clubs=1, // трефы
	diamonds, //бубны
	hearts, //червы
	spades, //пики
	max_suit
};
std::mt19937 mersenne{ static_cast<std::mt19937::result_type>(time(0)) };
struct card
{
	int card_number;
	int card_suit;
};
int getRandomNumber(int min, int max)//создаем функцию генерации на основе вихря
{//он распределяет числа равномерно от min до max
	std::uniform_int_distribution<> myrandom{ min, max };//uniform_int_distribution - класс, который обеспечивает равномерное и равновероятное распределение чисел по всему диапазону
	return myrandom(mersenne);
}
void show_card(card current)
{
	switch (current.card_number)
	{
	case 2: std::cout << "two "; break;
	case 3: std::cout << "thre "; break;
	case 4: std::cout << "four "; break;
	case 5: std::cout << "five "; break;
	case 6: std::cout << "six "; break;
	case 7: std::cout << "seven "; break;
	case 8: std::cout << "eight "; break;
	case 9: std::cout << "nine "; break;
	case 10: std::cout << "ten "; break;
	case 11: std::cout << "jack "; break;
	case 12: std::cout << "queen "; break;
	case 13: std::cout << "king "; break;
	case 14: std::cout << "ace "; break;
	}
	switch (current.card_suit)
	{
	case 1: std::cout << "clubs"; break;
	case 2: std::cout << "diamonds"; break;
	case 3: std::cout << "hearts"; break;
	case 4: std::cout << "spades"; break;
	}
}
char playersChoise()
{
	char choise(0);
	do
	{
		std::cout << "Make your choise: h(hit)/s(stand)" << std::endl;
		std::cin >> choise;
	} while (choise!='h' && choise != 's');
		return choise;
}
void printDeck(const std::array<card, 52> & deck)
{
	for (const auto& card : deck)
	{
		show_card(card);
		std::cout << "\n";
	}

	std::cout << "\n";
}
void swapCard(card &a,card &b)
{
	std::swap(a, b);
}
void shufleDeck(std::array<card, 52>& deck)
{
	for (int i = 0; i < 52; i++)
	{
		int rand_card = getRandomNumber(0, 51);
		swapCard(deck[i], deck[rand_card]);
	}

}
int getCardValue(const card &card)
{
		switch (card.card_number)
		{
		case 2:return 2;
		case 3:return 3;
		case 4:return 4;
		case 5:return 5;
		case 6:return 6;
		case 7:return 7;
		case 8:return 8;
		case 9:return 9;
		case 10:return 10;
		case 11:return 10;
		case 12:return 10;
		case 13:return 10;
		case 14:return 11;
		}
}
int blackjack(const std::array<card, 52>& deck)
{
	const card* cardPtr = &deck[0];
	//стартовые условия
	int playerToral(0), dealerTotal(0);
	dealerTotal += getCardValue(*cardPtr++);//дилер получает 1 карту(заставляем указатель показывать на следующую карту инкрементом)
	playerToral += getCardValue(*cardPtr++); playerToral += getCardValue(*cardPtr++); //игрок получает 2 карты
	dealerTotal += getCardValue(*cardPtr++);
	while (1)
	{
		std::cout << "Yor score: " << playerToral << std::endl;
	
		char choise = playersChoise();
		if (choise == 's')
			break;

		playerToral += getCardValue(*cardPtr++);
	}

	while (dealerTotal < 17)
	{
		dealerTotal += getCardValue(*cardPtr++);
	}
	std::cout << "Yor total score: " << playerToral << std::endl << "Diller total score: " << dealerTotal << std::endl;
	if(playerToral > 21 and dealerTotal > 21 )
		if (dealerTotal > playerToral)
		{
			return 1;
		}
		else return 0;
	else
	{
		if (playerToral == 21 and dealerTotal == 21)
		{
			return 2;
		}
		if (dealerTotal > 21 and playerToral <= 21)
			return 1;
		if (playerToral > 21 and dealerTotal <= 21)
			return 0;
	}
	

	return (playerToral > dealerTotal);
}

int main()
{
	int n_card(0);
	std::array<card,52> deck;
	for (int i = 2; i < max_numbers; i++)
	{
		for (int j = 1; j < max_suit; j++)
		{
			deck[n_card].card_number = static_cast<numbers>(i);
			deck[n_card].card_suit = static_cast<suit>(j);
			n_card++;
		}
	}
start:
	system("cls");
	shufleDeck(deck);
						//printDeck( deck);
						//std::cout << std::endl;
						//printDeck(deck);
	int result = blackjack(deck);
	if(result ==1)
		std::cout << "You Win!" << std::endl;
	else if (result == 0)std::cout << "You Lose!" << std::endl;
	else std::cout << "Draw!" << std::endl;
	char repeat(0);
	do
	{
		std::cout << "Do you want to play again? (y/n)" << std::endl;
		std::cin >> repeat;
		if (repeat == 'y')
			goto start;
		else if (repeat == 'n')
			return 0;
		else std::cout << "Incorrect input" << std::endl;
	} while (repeat != 'y' or repeat != 'n');
	return 0;
}
