class Queue:
    def __init__(self):
        self.items = []

    def is_empty(self):
        return len(self.items) == 0

    def enqueue(self, item):
        self.items.append(item)

    def dequeue(self):
        if not self.is_empty():
            return self.items.pop(0)
        else:
            raise IndexError("dequeue from empty queue")

    def size(self):
        return len(self.items)

# Real-world example: Ticketing system
ticket_queue = Queue()

# Customers arriving at the ticket counter
ticket_queue.enqueue("Customer 1")
ticket_queue.enqueue("Customer 2")
ticket_queue.enqueue("Customer 3")

print("Queue size:", ticket_queue.size())

# Serving customers
print("Serving:", ticket_queue.dequeue())
print("Serving:", ticket_queue.dequeue())
print("Queue size:", ticket_queue.size())
