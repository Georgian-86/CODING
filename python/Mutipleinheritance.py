class A:
    def A(obj):
        print("Base class 1")
class B:
    def B(obj):
        print("Base class 2")
class C(A,B):
    def C(obj):
        print("Derived class")
        
obj=C()
obj.A()
obj.B()
obj.C()

