#include "span.hpp"

Span::Span(unsigned int size) : size_(size) {}

Span::Span(const Span &copy) { *this = copy; }

Span::~Span() {}

Span &Span::operator=(const Span &copy) {
	if (this == &copy)
		return (*this);
	this->size_ = copy.size_;
	this->vect_ = copy.vect_;
	return (*this);
}

int &Span::operator[](const int index)
{
	return (this->vect_[index]);
}

const char *Span::ExceptionEmptySpan::what() const throw()
{ return "Empty span!";}

void Span::addNumber(const int num)
{
	if (!(static_cast<int>(vect_.size()) < this->size_))
		throw std::out_of_range("Span is overflow!");
	this->vect_.push_back(num);
}

int Span::shortestSpan()
{
	unsigned int	res;

	if(this->vect_.size() == 0)
		throw ExceptionEmptySpan();
	if (this->vect_.size() == 1)
		return 0;
	std::vector<int> sorted = this->vect_;
	std::sort(sorted.begin(), sorted.end());
	res = *sorted.end() - *sorted.begin();
	for (std::vector<int>::iterator it = sorted.begin() + 1; it != sorted.end(); it++)
		if (static_cast<unsigned int>(*it - *(it - 1)) < res)
			res = *it - *(it - 1);
	return (res);
}

unsigned int Span::longestSpan() const
{
	if(this->vect_.size() == 0)
		throw ExceptionEmptySpan();
	int min = *(std::min_element(this->vect_.begin(), this->vect_.end()));
	int max = *(std::max_element(this->vect_.begin(), this->vect_.end()));
	return (max - min);
}