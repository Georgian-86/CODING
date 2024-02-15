# class Marks:

# 	# defining a constructor
# 	def __init__(self, Phy, Chm, IP, Maths, Eng):

# 		self.Phy = Phy
# 		self.Chm = Chm
# 		self.IP = IP
# 		self.Maths = Maths
# 		self.Eng = Eng
# 		print("Initialised value is", self.Phy)
# 		print("Initialised value is", self.Chm)
# 		print("Initialised value is", self.IP)
# 		print("Initialised value is", self.Maths)
# 		print("Initialised value is", self.Eng)


# # Driver code
# obj1 = Marks(79, 88, 86, 97,65)

# class person:
#     def first(self):
#         print("This is parent class")
        
# class child(person):
#     def second(self):
#         print("This is child class")
        
# obj=child()
# obj.first()
# obj.second()

#create one parent class with name circle and calculate the perimeter and area and create a second child class named rectangle and calculate area and perimeter. Access both functions with single inheritance class and also print attributes.

class Circle():
    def __init__(self, r):
        self.radius = r

    def area(self):
        return self.radius**2*3.14
    
    def perimeter(self):
        return 2*self.radius*3.14

class Rectangle(Circle):
    def __init__(self, l, b):
        self.l = l
        self.b = b

    def area(self):
        return self.l*self.b
    
    def perimeter(self):
        return 2*(self.l+self.b)

NewCircle = Circle(8)
NewRect = Rectangle(7,8)
print("Area of cirle",NewCircle.area())
print("Area of rect",NewRect.area())
print("Peri of circle",NewCircle.perimeter())
print("Peri of rect",NewRect.perimeter())
