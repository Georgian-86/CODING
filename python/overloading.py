class Calculator:
    def add(self, a, b=0):
        return a + b

    def subtract(self, a, b=0):
        return a - b

calc = Calculator()

print(calc.add(complex(5),complex(7)))       
print(calc.add(complex(5,8),complex(3,9))) 

print(calc.subtract(complex(5,4),complex(4)))    
print(calc.subtract(complex(5,7),complex(8,4)))