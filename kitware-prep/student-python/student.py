class Student:
    def __init__(self, name, major, gpa):
        self.name, self.major, self.gpa = name, major, gpa

    def display_info(self):
        print("mah name is", self.name, "i major in ", self.major, "and have a gpa of", self.gpa)

    def set_gpa(self, gpa):
        self.gpa = gpa