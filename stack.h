//COLLIN GATES
//defines a Stack class that represents a stack data structure with a fixed maximum size of 10 It includes methods to push elements onto the stack, pop elements from the stack, peek at the top element without removing it, check if the stack is empty, and initialize a new stack.
#ifndef STACK_H
#define STACK_H

class Stack
{
private:
    int top;
    int size;
    int* stackArray;

public:
    // Default constructor
    Stack();

    // Overloaded constructor
    Stack(int size);

    // Destructor
    ~Stack();

    // Function to insert data into stack
    bool Push(int value);

    // Function to remove data from stack
    int Pop();

    // Function to check if stack is empty
    bool IsEmpty();

    // Function to report the top value without popping it
    int Peek();

    // Function to get the current size of the stack
    int GetSize();
};

#endif //STACK_H


