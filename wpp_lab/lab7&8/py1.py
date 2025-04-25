class Node:
    def __init__(self, data):
        self.data = data
        self.next = None  #next ptr

class LinkedList:
    def __init__(self):
        self.head = None  #head of list

    def add(self, data):
        new_node = Node(data)
        if not self.head:
            self.head = new_node  #if list is empty, set new node as head
        else:
            temp = self.head
            while temp.next:
                temp = temp.next
            temp.next = new_node

    def remove(self, data):
        temp = self.head
        if temp and temp.data == data:
            self.head = temp.next  #remove head when it match
            return
        prev = None
        while temp and temp.data != data:
            prev = temp
            temp = temp.next  #traversal
        if temp:
            prev.next = temp.next  # remove node

    def display(self):

        temp = self.head
        while temp:
            print(temp.data, end=' -> ')
            temp = temp.next
        print('None')

ll = LinkedList()
ll.add(1)
ll.add(2)
ll.add(3)
ll.display()
ll.remove(2)
ll.display()