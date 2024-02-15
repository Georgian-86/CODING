class car:
    def _init_(self, maker, model):
        self.maker=maker
        self.model=model
        self.__fuel=100
    def drive(self,distance):
        if self.__fuel>0:
            print(f"The car will cover the distance{distance} km")
            self.__fuel -=distance*0.1
        else:
            print("The car is out of fuel")

    def get_fuel(self):
        return self.__fuel

my_car=car("toyota","tata")
my_car.drive(90)

print(f"Car maker:{my_car.maker}")
print(f"Car model:{my_car.model}")
print(f"fuel level : {my_car.get_fuel()}")