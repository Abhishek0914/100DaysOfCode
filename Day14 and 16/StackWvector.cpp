#include <iostream>
using namespace std;

class Stack {
private:
    vector<int> stack;

public:
    // Constructor to initialize stack with a certain capacity
    Stack(int size) {
        stack.reserve(size);
    }

    // Push an element onto the stack
    void push(int a) {
        stack.push_back(a);
    }

    // Return the top element of the stack
    int top() {
        if (stack.empty()) {
            throw out_of_range("Stack is empty");
        }
        return stack.back();
    }

    // Pop the top element from the stack
    void pop() {
        if (stack.empty()) {
            throw out_of_range("Stack is empty");
        }
        stack.pop_back();
    }

    // Return the current size of the stack
    int size() {
        return stack.size();
    }

    // Print the elements of the stack
    void print() {
        cout << "Stack is: ";
        for (int i = 0; i < stack.size(); i++) {
            cout << stack[i] << " ";
        }
        cout << "\n";
    }
};

int main() {
    Stack S(5);
    S.push(3);
    S.print();
    S.push(4);
    S.print();
    S.push(5);
    S.print();
    cout << "Popping out element," << endl;
    S.pop();
    S.print();
    cout << "Top: " << S.top() << "\n";
    S.pop();
    cout<<"Emptied the stack!"<<endl;
    S.print();
    S.push(8);
    S.print();
    cout << "Size: " << S.size() << "\n";
    cout<<"Removed element,"<<endl;
    S.pop();
    S.print();
    if (S.size() > 0) {
        cout << "Top: " << S.top() << "\n";
    } else {
        cout << "Stack is empty\n";
    }
}
