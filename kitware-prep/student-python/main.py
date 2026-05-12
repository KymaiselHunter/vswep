from student import Student

def main():
    print("hellow student world")

    test = Student("kyle", "cs", 3)
    test.display_info()

    print("update")

    test.set_gpa(4)
    test.display_info()

if __name__ == "__main__":
    main()