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

void MyString::display() const {
	std::cout << str << " : " << get_length() << std::endl;
}

int MyString::get_length() const {
	return std::strlen(str);
}

const char *MyString::get_str() const {
	return str;
}
