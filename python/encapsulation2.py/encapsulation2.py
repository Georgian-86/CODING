class Student:
    def __init__(self, name, age):
        self.name = name
        self.age = age
        
    def display_info(self):
        print(f"Name: {self.__name}, Age: {self.__age}")
        
    def get_name(self):
        return self.__name
    
    def set_name(self, new_name):
        if  len(new_name) > 0:
            self.__name = new_name
        
        else:
            print("Invalid name")
            
std1=Student("John", 20)
std1.display_info()
print(f"Student Name: {std1.get_name()}")
std1.set_name("Alice")
std1.display_info      

#write a prgm to create a class representing a shopping cart . Include methods for adding and removing items and calculatinng the total price.      