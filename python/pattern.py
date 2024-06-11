# a = int(input("enter the no"))
# for i in range (0,a+1):
#     for j in range (0,2*i):
#         print("*",end="")
#     print() 
def pascal_triangle(n):
    triangle = [[1]]
    for i in range(1, n):
        row = [1]
        for j in range(1, i):
            row.append(triangle[i-1][j-1] + triangle[i-1][j])
        row.append(1)
        triangle.append(row)
    return triangle

print(pascal_triangle(6))