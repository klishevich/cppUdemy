#include <cstring>
#include <iostream>
#include "MyString.h"

// no args constructor
MyString::MyString() :str{nullptr} {
	str = new char[1];
	*str = '\0';
}

// overloaded constructor
MyString::MyString(const char *s) :str{nullptr} {
	if (s==nullptr) {
		str = new char[1];
		*str = '\0';
	} else {
		str = new char[std::strlen(s)+1];
		std::strcpy(str,s); // needs length +1 becaus it adds the null terminator
	}
}

// copy constructor
MyString::MyString(const MyString &source) :str{nullptr} {
	str = new char[std::strlen(source.str)+1];
	std::strcpy(str,source.str);
}

// destructor
MyString::~MyString() {
	delete [] str;
}

// overloaded copy assignment operator
MyString &MyString::operator=(const MyString &rhs) {
	std::cout << "copy assignment " << rhs.str << std::endl;
	if (this != &rhs) {
		delete [] str;
		str = new char[std::strlen(rhs.str) + 1];
		std::strcpy(str, rhs.str);
	}

	return *this;
}

// overloaded move assignment operator
MyString &MyString::operator=(MyString &&rhs) {
	std::cout << "move assignment " << rhs.str << std::endl;
	if (this != &rhs) {
		delete [] str;
		str = rhs.str;
		rhs.str = nullptr;
	}

	return *this;
}

void MyString::display() const {
	std::cout << str << " : " << get_length() << std::endl;
}

int MyString::get_length() const {
	return std::strlen(str);
}

const char *MyString::get_str() const {
	return str;
}
