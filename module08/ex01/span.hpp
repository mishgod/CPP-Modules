#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include "../colors.hpp"

using std::cout;
using std::endl;
using std::string;

class Span {
public:
	Span(unsigned int size);
	Span(Span const& copy);
	~Span();
	Span& operator=(Span const& copy);
	int& operator[](int const index);

	void				addNumber(int const num);
	int					shortestSpan(void);
	unsigned int		longestSpan(void) const;

	class ExceptionEmptySpan : public std::exception {
		const char* what() const throw();
	};

private:
	Span();
	int					size_;
	std::vector<int>	vect_;

};

#endif
