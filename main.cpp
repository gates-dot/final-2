//COLLIN GATES
//code demonstrates the usage of the Stack class. The testStack() function initializes a stack object, pushes values onto the stack, performs peek and pop operations, checks for stack underflow, and verifies if the stack is empty. The main() function calls testStack() to execute the stack testing and returns 0 to exit the program.
#include "main.h"
#include "stack.h"

void ExecuteStackOperations();
void TestStack();

void ExecuteStackOperations() {
    Stack stackInstance;
    std::cout << "Push 10: " << (stackInstance.Push(10) ? "Success" : "Fail") << std::endl;
    std::cout << "Push 100: " << (stackInstance.Push(100) ? "Success" : "Fail") << std::endl;
    std::cout << "Current stack size: " << stackInstance.GetSize() << std::endl;
}

void TestStack() {
    Stack stackInstance;
    int value;

    // Test pushing values to stack
    for(int i = 1; i <= 12; ++i) {
        std::cout << "Pushing " << i << " : " << (stackInstance.Push(i) ? "Success" : "Failure/Stack Overflow") << std::endl;
    }

    // Test peek operation
    if(stackInstance.Peek())
        std::cout << "Top value is " << stackInstance.Peek() << std::endl;
    else
        std::cout << "Stack Underflow" << std::endl;

    // Test pop operation
    while(!stackInstance.IsEmpty()) {
        value = stackInstance.Pop();
        std::cout << "Popped " << value << std::endl;
    }
    // Test underflow
    if(!stackInstance.Pop())
        std::cout << "Failure to pop: Stack Underflow" << std::endl;

    // Test isEmpty operation
    std::cout << "Is stack empty? : " << (stackInstance.IsEmpty() ? "Yes" : "No") << std::endl;
}

int main() {
    ExecuteStackOperations();
    TestStack();
    return 0;
}
