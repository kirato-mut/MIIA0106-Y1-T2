class Stack:
    def __init__(self):
        self.items = []

    def push(self, item):
        self.items.append(item)

    def pop(self):
        if not self.is_empty():
            return self.items.pop()
        return None

    def is_empty(self):
        return len(self.items) == 0

    def peek(self):
        if not self.is_empty():
            return self.items[-1]
        return None

# Example usage: Undo functionality in a text editor
if __name__ == "__main__":
    editor_stack = Stack()
    editor_stack.push("Type 'Hello'")
    editor_stack.push("Type 'World'")
    editor_stack.push("Delete 'World'")

    print("Current state:", editor_stack.peek())  # Output: Delete 'World'
    editor_stack.pop()
    print("Undo last action. Current state:", editor_stack.peek())  # Output: Type 'World'
    editor_stack.pop()
    print("Undo last action. Current state:", editor_stack.peek())  # Output: Type 'Hello'

