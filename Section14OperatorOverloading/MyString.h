#ifndef _MYSTRING_H_
#define _MYSTRING_H_

class MyString {
private:
    char *str; // C-style string
    // int len;
public:
    MyString();
    MyString(const char *s);
    MyString(const MyString &source);
    ~MyString();

    // Copy assignment operator
    MyString &operator=(const MyString &rhs);
    // Move assignment operator
    MyString &operator=(MyString &&rhs);

    void display() const;
    int get_length() const;
    const char *get_str() const;
};


#endif // _MYSTRING_H_