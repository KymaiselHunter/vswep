from animals import Python, Dog, Pikachu

def main():
    print("hello pythons of the animal world")

    animals = [Python(), Dog(), Pikachu()]

    for animal in animals:
        animal.speak()

if __name__ == "__main__":
    main()