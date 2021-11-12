#include <iostream>
#include <fstream>

using std::cout;
using std::endl;
using std::string;

int	checkInput(char* argv[], string& filename, string& oldString, string& newString)
{
	filename = argv[1];
	oldString = argv[2];
	if (!oldString.compare(argv[3]))
		return (1);
	newString = argv[3];
	if (filename.size() == 0)
	{
		cout << "Error: empty filename" << endl;
		return (1);
	}
	if (oldString.size() == 0 || newString.size() == 0)
	{
		cout << "Error: empty string" << endl;
		return (1);
	}
	return (0);
}

int	openFiles(std::ofstream& foutput, string& content, string& filename)
{
	bool			flag;
	std::ifstream	finput;
	string			line;

	finput.open(filename, std::ios::in);
	if (!finput.is_open())
	{
		cout << "Error: file is not opened " << filename << endl;
		return (1);
	}
	flag = false;
	while (std::getline(finput, line))
	{
		if (!flag)
			flag = true;
		else
			content += "\n";
		content += line;
	}
	finput.close();

	filename += ".replace";
	foutput.open(filename, std::ios::out);
	if (!foutput.is_open())
	{
		cout << "Error: file is not opened " << filename << endl;
		return (1);
	}
	return (0);
}

void	writeData(std::ofstream& foutput, string& content, const string& oldString, const string& newString)
{
	ssize_t	ret;

	ret = 0;
	while (ret != -1)
	{
		ret = content.find(oldString, ret);
		if (ret != -1)
		{
			content.erase(ret, oldString.size());
			content.insert(ret, newString);
		}
	}
	foutput << content;
	foutput.close();
}

int	main(int argc, char* argv[])
{
	std::ofstream	foutput;
	string			filename;
	string			content;
	string			oldString;
	string			newString;

	if (argc != 4)
	{
		cout << "Error: invalid input" << endl;
		return (1);
	}
	else
	{
		if (checkInput(argv, filename, oldString, newString))
			return (1);
		if (openFiles(foutput, content, filename))
			return (1);
		writeData(foutput, content, oldString, newString);
	}
	return (0);
}