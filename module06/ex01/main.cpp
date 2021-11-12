#include "Data.hpp"

int main(void)
{
	Data* alex = new Data("Alexander", 22, "Moscow");
	cout << *alex;
	uintptr_t	pData;


	pData = serialize(alex);
	cout << "---------------------" << endl;
	cout << "new Data:" << endl;

	Data* newData;
	newData = deserialize(pData);
	delete alex;
	cout << *newData << endl;
	delete newData;
	return (0);
}
