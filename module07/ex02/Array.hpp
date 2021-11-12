#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include "../colors.hpp"

using std::cout;
using std::endl;
using std::string;

template <class T>
class Array{
public:
	Array() : size_(0), data_(0) {}
	Array(unsigned int n) : data_(new T[n]()), size_(n) {}
	Array(Array& copy) { *this = copy; }
	~Array() { delete [] this->data_; }

	Array<T>& operator=(const Array& array);
	T& operator[](unsigned int const index);

	unsigned int	size() const { return this->size_; }
	void			print() const;

private:
	T*				data_;
	unsigned int	size_;
};


template <class T>
Array<T> & Array<T>::operator=(const Array<T> &array)
{
	if (this == &array)
		return (*this);
	delete [] this->data_;
	this->size_ = array.size_;
	this->data_ = new T[this->size_];
	for (unsigned int i = 0; i < array.size_; i++)
		this->data_[i] = array.data_[i];
	return (*this);
}

template <class T>
T & Array<T>::operator[](const unsigned int index)
{
	if (index >= this->size_)
		throw std::out_of_range("Bad request");
	return this->data_[index];
}

template <class T>
void Array<T>::print() const
{
	for (unsigned int i = 0; i < this->size_; i++)
		cout << this->data_[i] << " ";
}

template <>
void Array<char>::print() const
{
	for (unsigned int i = 0; i < this->size_; i++)
		cout << this->data_[i];
}

#endif
