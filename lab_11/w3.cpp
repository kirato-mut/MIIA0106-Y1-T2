#include <iostream>
#include <queue>
#include <string>

class Queue {
private:
    std::queue<std::string> items;

public:
    bool is_empty() const {
        return items.empty();
    }

    void enqueue(const std::string& item) {
        items.push(item);
    }

    void dequeue() {
        if (!is_empty()) {
            items.pop();
        } else {
            throw std::out_of_range("dequeue from empty queue");
        }
    }

    size_t size() const {
        return items.size();
    }

    std::string front() const {
        if (!is_empty()) {
            return items.front();
        } else {
            throw std::out_of_range("front from empty queue");
        }
    }
};

// Real-world example: Ticketing system
int main() {
    Queue ticket_queue;

    // Customers arriving at the ticket counter
    ticket_queue.enqueue("Customer 1");
    ticket_queue.enqueue("Customer 2");
    ticket_queue.enqueue("Customer 3");

    std::cout << "Queue size: " << ticket_queue.size() << std::endl;

    // Serving customers
    std::cout << "Serving: " << ticket_queue.front() << std::endl;
    ticket_queue.dequeue();
    std::cout << "Serving: " << ticket_queue.front() << std::endl;
    ticket_queue.dequeue();
    std::cout << "Queue size: " << ticket_queue.size() << std::endl;

    return 0;
}
