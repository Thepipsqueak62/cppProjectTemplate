#include <fmt/core.h>
#include <mylibrary/mylibrary.h>

int main() {
    mylibrary::Calculator calc;

    fmt::print("Add 2 + 3 = {}\n", calc.add(2, 3));
    fmt::print("Subtract 5 - 2 = {}\n", calc.subtract(5, 2));
    fmt::print("Multiply 4 * 6 = {}\n", calc.multiply(4, 6));
    fmt::print("Divide 10 / 2 = {}\n", calc.divide(10, 2));

    fmt::print("Library version: {}\n", mylibrary::Calculator::version());

    std::string greeting = mylibrary::greet("Aidan");
    fmt::print("{}\n", greeting);

    return 0;
}
