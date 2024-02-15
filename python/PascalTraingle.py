def generate_pascals_triangle(n):
     triangle = []     
     for i in range(n):
         row = []
         for j in range(i + 1):
               if j == 0 or j == i:
                   row.append(1)
               else:
                   row.append(triangle[i - 1][j - 1] + triangle[i - 1][j])
        
         triangle.append(row)
     return triangle

def print_pascals_triangle(triangle):
    max_width = len(" ".join(map(str, triangle[-1])))
    for row in triangle:
        print(" ".join(map(str, row)).center(max_width))

n = int(input("Enter the value of n = "))
triangle = generate_pascals_triangle(n)
print_pascals_triangle(triangle)