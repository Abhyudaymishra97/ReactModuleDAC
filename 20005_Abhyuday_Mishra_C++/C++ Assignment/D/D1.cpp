/*
    D. Data-structures using C++:

        D1. Write a C++ program to implement a stack using an array with push and pop operations. Check if the stack is full.

            Test Data:
            MAX_SIZE of the array: 5
            Insert some elements onto the stack:
            Stack elements: 1 2 5 6 9
            Is the stack full? 1
            Remove an element from the stack! 1
            Stack elements: 2 5 6 9
            Is the stack full? 0
*/

#include <iostream>

const int MAX_SIZE = 5;

class Stack 
{   
    /*Private Members*/
    private:
    int top;
    int arr[MAX_SIZE];

    /*Public Members*/
    public:
    Stack() {
        top = -1;
    }

    bool isFull() {
        return top == MAX_SIZE - 1;
    }

    bool isEmpty() {
        return top == -1;
    }

    void push(int element) {                //Push Operation Result
        if (isFull()) 
        {
            std::cout << "Stack is full. Cannot push element." << std::endl;
            return;
        }
        arr[++top] = element;
    }

    int pop() {                             //Pop Operation Result
        if (isEmpty()) 
        {
            std::cout << "Stack is empty. Cannot pop element." << std::endl;
            return -1;
        }
        return arr[top--];
    }

    void display() {
        if (isEmpty()) 
        {
            std::cout << "Stack is empty." << std::endl;
            return;
        }
        std::cout << "Stack elements:";

        for (int i = 0; i <= top; i++) 
        {
            std::cout << " " << arr[i];
        }

        std::cout << std::endl;
    }
};

int main() 
{
    Stack stack;

    stack.push(1);
    stack.push(2);
    stack.push(5);
    stack.push(6);
    stack.push(9);

    stack.display();
    std::cout << "Is the stack full? " << stack.isFull() << std::endl;

    stack.pop();
    stack.display();

    std::cout << "Is the stack full? " << stack.isFull() << std::endl;

    return 0;
}

/*  OUTPUT

    Stack elements: 1 2 5 6 9
    Is the stack full? 1     
    Stack elements: 1 2 5 6  
    Is the stack full? 0   
*/