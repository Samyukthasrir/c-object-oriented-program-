#include <iostream>

class Stack {
private:
    static const int max = 1000;
    int top;
    int arr[max];

public:
    Stack() { top = -1; }
    bool push(int x);
    int pop();
    bool isEmpty();
};

bool Stack::push(int x) {
    if (top >= max - 1) {
        std::cout << "Stack Overflow" << std::endl;
        return false;
    } else {
        arr[++top] = x;
        return true;
    }
}

int Stack::pop() {
    if (top < 0) {
        std::cout << "Stack Underflow" << std::endl;
        return 0;
    } else {
        int x = arr[top--];
        return x;
    }
}

bool Stack::isEmpty() {
    return (top < 0);
}

int main() {
    Stack stack;
    stack.push(10);
    stack.push(20);
    stack.push(30);

    std::cout << stack.pop() << " Popped from stack" << std::endl;
    std::cout << stack.pop() << " Popped from stack" << std::endl;

    return 0;
}

