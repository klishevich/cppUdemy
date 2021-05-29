#include <iostream>

using namespace std;

void print(const int *const array, size_t size) {
    cout << "[ ";
    for (int i {0}; i<size; i++) {
        cout << array[i] << " ";
    }
    cout << "]" << endl;
}

int* apply_all(const int *const array1, size_t size1, const int *const array2, size_t size2) {
//    cout << "size1 " << size1 <<endl;
//    cout << "size2 " << size2 << endl;
    // null pointer
    int *my_array {};
    my_array = new int[size1*size2];
    
    for (int i {0}; i<size2; i++) {
        for (int j {0}; j<size1; j++) {
            int index = i * size1 + j;
            my_array[index] = array1[j] * array2[i];
        }
    }
    
    return my_array;
}

int main( )
{
    const size_t array1_size {5};
    const size_t array2_size {3};
    
    int array1[] {1,2,3,4,5};
    int array2[] {10,20,30};
    
    cout << "Array 1: ";
    print(array1, array1_size);
    
    cout << "Array 2: ";
    print(array2, array2_size);
    
    int *results = apply_all(array1, array1_size, array2, array2_size);
    constexpr size_t results_size {array1_size * array2_size};
    
    cout << "Result: ";
    print(results, results_size);

    delete [] results;
    
    cout << endl;
    
    return 0;
}