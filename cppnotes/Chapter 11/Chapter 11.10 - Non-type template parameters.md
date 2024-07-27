#templates

# Non-type template parameters

A non-type template parameter is a template parameter with a fixed type that serves as placeholder for a constexpr value passed in as a template argument.

A non-type template parameter can be any of the following types:

- An integral type
- An enumeration type
- null ptr
- floating point type
- pointer or reference to an object
- pointer or reference to a function
- A pointer or reference to a member function
- A literal class type

Example:
```c++
#include <iostream>

template <int N> // declare a non-type template parameter of type int named N
void print()
{
    std::cout << N << '\n'; // use value of N here
}

int main()
{
    print<5>(); // 5 is our non-type template argument

    return 0;
}
```

## What are they useful for

Non-type template parameters are used primarily when we need to pass constexpr values to functions (or class types) so they can be used in contexts that require a constant expression.