#include <iostream>

using namespace std;

int main() {
    // Creating 3 empty pointers
    int* ptr1 = new int;
    int* ptr2 = new int;
    int* ptr3 = new int;

    // Getting 3 integers from user
    cout << "Enter first integer: ";
    // Dereferencing ptr1 to change the value it points to
    cin >> *ptr1;
    cout << "Enter second integer: ";
    cin >> *ptr2;
    cout << "Enter third integer: ";
    cin >> *ptr3;
    cout << endl;

    // Printing out first pointer info
    // Printing ptr1 will print the address of the value
    cout << "First Pointer Address: " << ptr1 << endl; 
    // Printing *ptr1 will dereference the pointer to print out the value 
    cout << "First Pointer Value: " << *ptr1 << endl;
    cout << endl;

    // Printing out second pointer info
    cout << "Second Pointer Address: " << ptr2 << endl;  
    cout << "Second Pointer Value: " << *ptr2 << endl;
    cout << endl;
    
    // Printing out third pointer info
    cout << "Third Pointer Address: " << ptr3 << endl;  
    cout << "Third Pointer Value: " << *ptr3 << endl;
    cout << endl;

    // -- Cleaning memory --

    // Deleting pointers
    delete ptr1;
    delete ptr2;
    delete ptr3;

    // Removing dangling pointers
    ptr1 = NULL;
    ptr2 = NULL;
    ptr3 = NULL;

    return 0;
}