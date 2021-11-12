#include <iostream>
#include <string>

int main(int argc, char* const argv[])
{
	int	len;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for (int i = 1; i < argc; i++)
		{
			len = std::strlen(argv[i]);
			for (int j = 0; j < len; j++)
				std::cout << static_cast<char>(toupper(argv[i][j]));
		}
		std::cout << std::endl;
	}
	return (0);
}
