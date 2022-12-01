import random

class Node:
    def __init__(self, val: int = 0):
        self.val = val
        self.next = None

class ListNode:
    def __init__(self, node: Node = None):
        self.head = node
        self.is_empty = True if node is None else False

    def insert_node(self, node: Node = None) -> bool:
        if node is None or not isinstance(node, Node):
            return False
        
        elif self.head is None:
            self.head = node
            self.is_empty = False
            return True

        else:
            curr = self.head
            while curr.next:
                curr = curr.next

            curr.next = node
            return True

    def print_list(self) -> bool:
        curr = self.head
        while curr is not None:
            print(curr.val)
            curr = curr.next
        return True

if __name__ == '__main__':
    list_node = ListNode()
    
    for i in range(10):
        n = random.randint(1, 10)
        print(f'The current number is {n}.')
        list_node.insert_node(Node(n))

    input('Inserting process completed. Press to continue: ')

    list_node.print_list()
    