//COLLIN GATES
//this code provides the functionality for a stack data structure, allowing elements to be pushed, popped, peeked, and checked for emptiness.
#include <stdexcept>
#include "stack.h"

// Default constructor
Stack::Stack() {
    top = -1;
    size = 10;
    stackArray = new int[size];
}

// Overloaded constructor
Stack::Stack(int size) {
    if (size < 2) {
        throw std::invalid_argument("Size must be >= 2");
    }
    top = -1;
    this->size = size;
    stackArray = new int[size];
}

// Destructor
Stack::~Stack() {
    delete[] stackArray;
}

// Function to insert data into stack
bool Stack::Push(int value) {
    bool success = false;
    if (top < size - 1) {
        stackArray[++top] = value;
        success = true;  // Element Inserted
    }
    return success;
}

// Function to remove data from the top of the stack
int Stack::Pop() {
    if(top < 0) {
        throw std::out_of_range("Stack Underflow");
    }
    else {
        return stackArray[top--];
    }
}

// Function to check if stack is empty
bool Stack::IsEmpty() {
    return top < 0;
}

// Function to report the top value without popping it
int Stack::Peek() {if(top < 0) {
        throw std::out_of_range("Stack Underflow");
    }
    else {
return stackArray[top];
    }
}

// Function to get the current size of the stack
int Stack::GetSize() {
    return top + 1;
}
