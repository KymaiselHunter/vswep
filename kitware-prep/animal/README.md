# Animal Inheritance + Polymorphism Assignment

## Goal

Practice C++ inheritance, abstract classes, virtual functions, `override`, and polymorphism.

## Files

- `animal.hpp`
- `dog.hpp`
- `dog.cpp`
- `cat.hpp`
- `cat.cpp`
- `cow.hpp`
- `cow.cpp`
- `main.cpp`

## Requirements

Create an abstract base class called `Animal`.

`Animal` should have:

- `virtual void speak() const = 0;`
- `virtual std::string getName() const = 0;`
- `virtual ~Animal() = default;`

Create three derived classes:

- `Dog`
- `Cat`
- `Cow`

Each derived class should inherit from `Animal` and override:

- `speak()`
- `getName()`

Expected behavior:

- `Dog` returns `"Dog"` and prints `"Bark"`
- `Cat` returns `"Cat"` and prints `"Meow"`
- `Cow` returns `"Cow"` and prints `"Mooooo"`

## Main Test

In `main.cpp`, create `Dog`, `Cat`, and `Cow` objects.

Store them in a `std::vector<Animal*>`.

Loop through the vector and call:

- `getName()`
- `speak()`

Also create a helper function that takes an `Animal*` or `const Animal&` and prints the animal name and sound.

## Compile

```bash
g++ main.cpp dog.cpp cat.cpp cow.cpp -o output
./output
```

## Done When

The program compiles and each animal prints its correct name and sound through an `Animal*` or `Animal&`.