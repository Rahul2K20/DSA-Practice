class Node:
    def __init__(self, value):
        self.value = value 
        self.next = None 
        self.prev = None 
        
class DoublyLinkedList: 
    def __init__(self,value):
        new_node = Node(value)
        self.head = new_node 
        self.tail = new_node 
        self.length = 1 
        
    def print_list(self):
        temp = self.head 
        while(temp):
            print(temp.value)
            temp = temp.next 
    
    def append(self,value):
        if self.head is None: 
            self.head = new_node
            self.tail = new_node 
        else: 
            new_node = Node(value)
            self.tail.next = new_node
            new_node.prev = self.tail 
            new_node.next = None 
            self.tail = new_node
            self.length += 1
        
    def pop(self):
        
        if self.length == 0:
            return None 
        
        temp = self.tail 
        
        if self.length == 1: 
            self.head = None 
            self.tail = None 
            
        else: 
            self.tail = self.tail.prev 
            self.tail.next = None 
            temp.prev = None 
        self.length -=1 
        return temp.value       
    
    def prepend(self,value):
        new_node = Node(value)
        if self.length == 0: 
            new_node = self.head 
            new_node = self.tail 
        
        else: 
            new_node.next = self.head 
            self.head.prev = new_node 
            self.head = new_node 
            
        self.length += 1 
        return True 
    
    def pop_first(self): 
        if self.length == 0: 
            return None 
        
        if self.length == 1: 
            self.head = None 
            self.tail = None 
        else: 
            temp = self.head 
            self.head = temp.next
            self.head.prev = None 
            temp.next = None 
            
        self.length -=1
        
    def get(self,index):
        if index < 0 or index >= self.length:
            return None
        else: 
            temp = self.head 
            if index < self.length/2: 
                for _ in range (index):
                    temp = temp.next 
            else:
                temp = self.tail
                for _ in range (self.length-1, index, -1):
                    temp = temp.prev
        
            return temp
        
    def set(self, index, value): 
        if index < 0 or index > self.length: 
            return None 
        else: 
            temp = self.get(index)
            if temp: 
                temp.value = value 
                return True
            return False 
        
    def insert(self, index, value):
        if index < 0 or index > self.length:
            return False 
        if index == 0: 
            self.prepend(value)
            
        if index == self.length: 
            self.append(value)
                 
        new_node = Node(value)
        before = self.get(index-1)
        after = self.get(index)
            
        new_node.prev = before
        new_node.next = after 
        before.next = new_node 
        after.prev = new_node
        
        self.length +=1
        return True
        
    def remove(self, index): 
        if index < 0 or index > self.length: 
            return False 
        if index == 0: 
            self.pop_first()
        if index == self.length-1: 
            self.pop()
            
        temp = self.get(index)
        temp.next.prev = None 
        temp.prev.next = temp.next 
        temp.next = None 
        temp.prev = None 
        
        self.length -=1 
    


my_doubly_linked_list = DoublyLinkedList(7)

my_doubly_linked_list.append(5)
my_doubly_linked_list.append(6)


my_doubly_linked_list.remove(1)

my_doubly_linked_list.print_list()

# print('Head:', my_doubly_linked_list.head.value)
# print('Tail:', my_doubly_linked_list.tail.value)
# print('Length:', my_doubly_linked_list.length)




"""
    EXPECTED OUTPUT:
    ----------------
    Head: 7
    Tail: 7
    Length: 1

"""
