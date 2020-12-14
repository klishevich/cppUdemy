#include <iostream>

using namespace std;

void print_array(const int numbers [], size_t size)
{
    for (size_t i{0}; i<size; i++)
        cout << numbers[i] << " ";
    cout << endl;
}

void set_array(int numbers [], size_t size, int value)
{
    for (size_t i{0}; i<size; i++)
        numbers[i] = value;
}

int main( )
{
    int my_scores[] {100, 98, 90, 86, 84};
    print_array(my_scores, 5);
    set_array(my_scores, 5, 100);
    print_array(my_scores, 5);
    std::cout << endl;
    return 0;
}