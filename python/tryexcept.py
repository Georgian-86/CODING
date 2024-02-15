try:
    numerator=int(input("Enter the Numerator: "))
    denominator=int(input("Enter the denominator: "))
    result=numerator/denominator
    print(result)
except:
    print("Error!! Denominator cant be 0")
    
try:
    even_number=[2,4,6,8]
    print(even_number[5])
except ZeroDivisionError:
    print("Denominator cant be 0")
except IndexError:
    print("Index out of range")
except SyntaxError:
    print("Syntax error in code")       
finally:
    print("The exception was not match!")