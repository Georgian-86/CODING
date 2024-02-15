# class a:
#     def one(obj):
#         print("Golu")
# class b(a):
#     def two(obj):
#         print("Medha")
# class c(b):
#     def three(obj):
#         print("Abhiram")
# class d(c):
#     def four(obj):
#         print("Jayant")
# obj=d()
# obj.one()
# obj.two()
# obj.three()
# obj.four()

 # Ankit is  very competitive person and always tries to compare him to others. He has got five subs in his course and he wants to make a list of total marks and avarage marks of the students in his class with their roll nos and he wants to use the concept of multi level inheritance. Help him achieve the reqd code.
 
class Student:
    def __init__(self, roll_no):
        self.roll_no = roll_no

class Subject(Student):
    def __init__(self, roll_no, marks):
        super().__init__(roll_no)
        self.marks = marks

class Course(Subject):
    def __init__(self, roll_no, marks, subjects):
        super().__init__(roll_no, marks)
        self.subjects = subjects

    def calculate_total_marks(self):
        return sum(self.subjects)

    def calculate_average_marks(self):
        total_marks = self.calculate_total_marks()
        num_subjects = len(self.subjects)
        return total_marks / num_subjects

# Example usage
ankit_subjects = [85, 90, 78, 92, 88]  # Ankit's marks in 5 subjects
ankit = Course(101, ankit_subjects, ankit_subjects)

# Outputting the results
print(f"Roll Number: {ankit.roll_no}")
print(f"Total Marks: {ankit.calculate_total_marks()}")
print(f"Average Marks: {ankit.calculate_average_marks()}")
