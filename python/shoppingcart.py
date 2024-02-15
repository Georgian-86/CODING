#write a prgm to create a class representing a shopping cart . Include methods for adding and removing items and calculatinng the total price

class ShoppingCart:
    def __init__(self):
        self.items = {}

    def add_item(self, item, quantity):
        if item in self.items:
            self.items[item] += quantity
        else:
            self.items[item] = quantity

    def remove_item(self, item, quantity):
        if item in self.items:
            if self.items[item] <= quantity:
                del self.items[item]
            else:
                self.items[item] -= quantity

    def calculate_total_price(self):
        total_price = 0
        for item, quantity in self.items.items():
            total_price += item.price * quantity
        return total_price

class Item:
    def __init__(self, name, price):
        self.name = name
        self.price = price

# Usage
cart = ShoppingCart()

item1 = Item("Apple", 0.5)
item2 = Item("Banana", 0.25)

cart.add_item(item1, 3)
cart.add_item(item2, 5)

print("Total price: ", cart.calculate_total_price())

cart.remove_item(item1, 1)

print("Total price after removing 1 Apple: ", cart.calculate_total_price())

