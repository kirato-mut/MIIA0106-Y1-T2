#include <iostream>
#include <stack>
#include <string>

class Stack {
private:
    std::stack<std::string> items;

public:
    void push(const std::string& item) {
        items.push(item);
    }

    void pop() {
        if (!items.empty()) {
            items.pop();
        }
    }

    std::string peek() const {
        if (!items.empty()) {
            return items.top();
        }
        return "";
    }

    bool is_empty() const {
        return items.empty();
    }
};

// Example usage: Undo functionality in a text editor
int main() {
    Stack editor_stack;
    editor_stack.push("Type 'Hello'");
    editor_stack.push("Type 'World'");
    editor_stack.push("Delete 'World'");

    std::cout << "Current state: " << editor_stack.peek() << std::endl;  // Output: Delete 'World'
    editor_stack.pop();
    std::cout << "Undo last action. Current state: " << editor_stack.peek() << std::endl;  // Output: Type 'World'
    editor_stack.pop();
    std::cout << "Undo last action. Current state: " << editor_stack.peek() << std::endl;  // Output: Type 'Hello'

    return 0;
}
