class calculator():
    def add(self, x, y=0, z=0) :
        return (x + y + z)
cal=calculator()
print(cal.add(4))
print(cal.add(18,45))
print(cal.add(18,765,11))


#Method overriding
class Animal:
    def make_sound(self):
        print("The animal makes a sound")
        
class Dog(Animal):
    def make_sound(self):
        print("Woof!")
        
class Cat(Animal):
    def make_sound(self):
        print("Meow")
        
dog=Dog()
cat=Cat()
dog.make_sound()
cat.make_sound()

#Operator overloading
class p:
    def __init__(self, x, y):
        self.x = x
        self.y = y

    def __add__(self, other):
    
       return self.x+other.x, self.y+other.y 
obj1=p(40, 80)
obj2=p(10, 90)
obj3= obj1+obj2
print(f"Sum of two objects is {obj3}")

class p:
    def __init__(self, x, y):
        self.x = x
        self.y = y

    def __mul__(self, other):
    
       return self.x*other.x, self.y*other.y 
obj1=p(40, 80)
obj2=p(10, 90)
obj3= obj1*obj2
print(f"Product of two objects is {obj3}")

class p:
    def __init__(self, x, y):
        self.x = x
        self.y = y

    def __pow__(self, other):
    
       return self.x**other.x, self.y**other.y 
obj1=p(4, 8)
obj2=p(5, 9)
obj3= obj1**obj2
print(f"Power of two objects is {obj3}")



