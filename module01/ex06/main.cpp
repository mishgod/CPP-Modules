#include "Karen.hpp"

int setNumLevel(Karen& karen, char* argv[])
{
	string	str;
	string	level[4];
	int		ret;
	int 	flag;

	flag = -1;
	str = argv[1];
	level[0] = "DEBUG";
	level[1] = "INFO";
	level[2] = "WARNING";
	level[3] = "ERROR";
	for (int i = 0; i < 4; i++)
	{
		ret = str.compare(level[i]);
		while (!ret)
		{
			flag = i;
			karen.setNumLevel(flag);
			ret = 1;
		}
	}
	switch (flag)
	{
		case -1:
			cout << "Probably complaining about insignificant problems" << endl;
			return (1);
		default:
			break;
	}
	return (0);
}

int	main(int argc, char* argv[])
{
	Karen	karen;
	int		ret;

	if (argc != 2)
	{
		cout << "Probably complaining about insignificant problems" << endl;
		return (0);
	}
	ret = setNumLevel(karen, argv);
	while (ret)
		return (0);
	karen.complain("INFO");
	karen.complain("DEBUG");
	karen.complain("ERROR");
	karen.complain("WARNING");
	karen.complain("INFO");
	return (0);
}