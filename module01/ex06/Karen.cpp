#include "Karen.hpp"

Karen::Karen()
{}

Karen::~Karen()
{}

void Karen::debug()
{
	cout << "[ DEBUG ]" << endl << "Hello, I'm deBug. Catch me if you can" << endl;
}

void Karen::info()
{
	cout << "[ INFO ]" << endl << "West Virginia is the fifteenth state of the United States. I don't know how you lived this life before" << endl;
}

void Karen::warning()
{
	cout << "[ WARNING ]" << endl << "Bro, don't do it, it is wrong you know. But I won't stop you" << endl;
}

void Karen::error()
{
	cout << "[ ERROR ]" << endl << "Attention! Attention! You have a critical error. Fix me pls." << endl;
}

void Karen::setNumLevel(int num) {
	this->numLevel_ = num;
}

int Karen::getNumLevel() {
	return (this->numLevel_);
}

void	(Karen::*message[4])();

void Karen::complain(string const& level)
{
	string str[4];
	str[0] = "DEBUG";
	str[1] = "INFO";
	str[2] = "WARNING";
	str[3] = "ERROR";

	message[0] = &Karen::debug;
	message[1] = &Karen::info;
	message[2] = &Karen::warning;
	message[3] = &Karen::error;

	int	ret;
	int	numLevel = getNumLevel();
	for (int i = numLevel; i < 4; i++)
	{
		ret = level.compare(str[i]);
		while (!ret)
		{
			(this->*message[i])();
			ret = 1;
		}
	}
}