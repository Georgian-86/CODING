# try:
#     file= open('C:/Users/golu kumar/Documents/example_wr.txt','r') 
#     print(file.read())
# except:
#     print("File not found")
    
# def divide(x,y):
#     try:
#         result=x//y
#     except ZeroDivisionError:
#         print("Error in division"
#     else:
#         print("yeah! your ans is",result )
#     finally:
#         print("this block will execute no matter what happens above it")
# divide(3,2)
# divide(3,0) 

import math
try:
   result= math.sqrt(-10)
except:
    print("Wrong value input")
else:
    print("Your ans is",result)
