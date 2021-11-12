#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const string &target) :
Form("ShrubberyForm", 145, 137), target_(target)
{
	cout << GREEN << "this is the constructor of Shrubbery" << NORMAL << endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy) :
Form("ShrubberyForm", 145, 137), target_(copy.target_)
{
	this->sign_ = copy.getSign();
	cout << GREEN << "this is copy constructor of Shrubbery" << NORMAL << endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	cout << RED << "this is the destructor of Shrubbery" << NORMAL << endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &copy)
{
	if (this == &copy)
		return (*this);
	this->sign_ = copy.getSign();
	this->target_ = copy.target_;
	return (*this);
}

void ShrubberyCreationForm::action() const
{
	std::ofstream	fout;

	fout.open(this->getName() + "_shrubbery", std::ios::out);
	if (!fout.is_open())
		return;
	fout << "    _\\/_\n"
			"     /\\\n"
			"     /\\\n"
			"    /  \\\n"
			"    /~~\\o\n"
			"   /o   \\\n"
			"  /~~*~~~\\\n"
			" o/    o \\\n"
			" /~~~~~~~~\\~`\n"
			"/__*_______\\\n"
			"     ||\n"
			"   \\====/\n"
			"    \\__/" << endl;
}

void ShrubberyCreationForm::execute(const Bureaucrat &bureaucrat) const
{
	bureaucrat.executeForm(*this);
}

const string ShrubberyCreationForm::getTarget() const
{
	return this->target_;
}
