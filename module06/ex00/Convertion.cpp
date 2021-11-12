#include "Convertion.hpp"

Convertion::Convertion(char* value)
{
	this->value_ = new char[strlen(value) + 1];
	int i = -1;
	while (value[++i])
		this->value_[i] = value[i];
}

Convertion::Convertion(const Convertion &copy)
{
	this->value_ = new char[strlen(copy.value_) + 1];
	int i = -1;
	while (copy.value_[++i])
		this->value_[i] = copy.value_[i];
}

Convertion::~Convertion() { delete this->value_; }

Convertion &Convertion::operator=(const Convertion &copy) {
	if (this == &copy)
		return (*this);
	this->value_ = copy.value_;
	return (*this);
}

char* Convertion::get_value() const { return this->value_; }

int Convertion::checkZero(string const& str, string const& type) const
{
	int i = 0;

	if (type == "char")
		;
	while (str[i] == 32)
		i++;
	if (str[i] == '+' || str[i] == '-')
		i++;
	if (str[i] == '0')
		return 0;
	else
		return (1);
}

void	Convertion::toChar(char* value) const
{
	int	i;

	if (strlen(value) == 1)
	{
		if (std::isdigit(value[0]))
		{
			cout << "char: not displayable" << endl;
			return;
		}
		cout << "char: " << value << endl;
		return;
	}
	i = std::strtol(value, NULL, 10);
	if (i == 0 && checkZero(value, "char"))
	{
		cout << "char: impossible" << endl;
		return;
	}
	if (i < 0 || i > 127)
	{
		cout << "char: impossible" << endl;
		return;
	}
	if (i < 32 || i == 127)
	{
		cout << "char: not displayable" << endl;
		return;
	}
	cout << "char: \'" << static_cast<char>(i) << "\'" << endl;
}

void	Convertion::toInt(char* value) const
{
	int	i;

	i = std::strtol(value, NULL, 10);
	if (i == 0 && checkZero(value, "int"))
	{
		cout << "int: impossible" << endl;
		return;
	}
	cout << "int: " << static_cast<int>(i) << endl;
}

void	Convertion::toFloat(char* value) const
{
	float	f;

	f = std::strtof(value, NULL);
	if (f == 0 && checkZero(value, "float"))
	{
		cout << "float: impossible" << endl;
		return;
	}
	cout << "float: " << static_cast<float>(f);
	if (fabs(f - roundf(f)) < 0.000001)
		cout << ".0";
	cout << 'f' << endl;
}

void	Convertion::toDouble(char* value) const
{
	double	d;

	d = std::strtod(value, NULL);
	if (d == 0 && checkZero(value, "double"))
	{
		cout << "double: impossible" << endl;
		return;
	}
	cout << "double: " << static_cast<double>(d);
	if (fabs(d - roundf(d)) < 0.000001)
		cout << ".0" << endl;
}

std::ostream& operator<<(std::ostream& out, Convertion const& obj)
{
	obj.toChar(obj.get_value());
	obj.toInt(obj.get_value());
	obj.toFloat(obj.get_value());
	obj.toDouble(obj.get_value());
	return out;
}