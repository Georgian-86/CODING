def add_two(x):
    return x+2
def square(x):
    return x**2
def compose(f,g):
    return lambda x: f(g(x))
add_two_then_square=compose(square,add_two)
result= add_two_then_square(3)
print(result)