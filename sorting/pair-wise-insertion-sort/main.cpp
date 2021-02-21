#include <iostream>

using namespace std;

// Function to sort an array using insertion sort
// Returns the position of insertion
int sortFrom(int arr[], int position, int key)  
{
    int j = position - 1;

    /* Move elements of arr[0..i-1], that are  
    greater than key, to one position ahead  
    of their current position */
    while (j >= 0 && arr[j] > key) 
    {  
        arr[j + 1] = arr[j];  
        j = j - 1;  
    }  
    arr[j + 1] = key;
    return j + 1;
} 

/* Function to sort an array using insertion sort*/
void insertionSort(int arr[], int n)  
{  
    for (int i = 1; i < n; i+=2) {
        int keyMin, keyMax, indexMin, indexMax;
        if (arr[i] < arr[i+1]) {
            indexMin = i;
            keyMin = arr[i];
            indexMax = i+1;
            keyMax = arr[i+1];
        } else {
            indexMin = i+1;
            keyMin = arr[i+1];
            indexMax = i;
            keyMax = arr[i];
        }
        int position = sortFrom(arr, indexMax, keyMax);
//        cout << "Inserted in position: " << position << endl;
    }
}  
  
// A utility function to print an array of size n  
void printArray(int arr[], int n)  
{  
    int i;  
    for (i = 0; i < n; i++)  
        cout << arr[i] << " ";  
    cout << endl; 
}  
  
/* Driver code */
int main()  
{  
    int arr1[] = { 12, 11, 13, 5, 6 };
    int n1 = sizeof(arr1) / sizeof(arr1[0]);    
    insertionSort(arr1, n1);  
    printArray(arr1, n1);

//    int arr2[] = { 4, 3, 2, 1 };
//    int n2 = sizeof(arr2) / sizeof(arr2[0]); 
//    insertionSort(arr2, n2);  
//    printArray(arr2, n2);
  
    return 0;  
}  
  