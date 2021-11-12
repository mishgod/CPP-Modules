#include "Convertion.hpp"

int	main(int argc, char *argv[])
{
	if (argc != 2)
	{
		cout << RED << "Error: bad arguments" << NORMAL << endl;
		return (1);
	}
	Convertion c(argv[1]);
	cout << c << endl;

	return 0;
}
