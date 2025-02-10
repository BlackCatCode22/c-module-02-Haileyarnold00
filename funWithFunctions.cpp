#include <iostream>

int main() {
    std::cout << "Fun With Functions!" << std::endl;

    int x;
    int y;


    std::cout << "\n Give me a number! ";
    std::cin >> x;

    std::cout << "\n Give me another number! ";
    std::cin >> y;

    if (x == y)
        std::cout << "Both numbers are equal.";
    else
        std::cout << "Both numbers are not equal.";

    int z = x + y;

    std::cout << "\n The sum of " << x << " and " << y << " is " << z;
    


    return 0;
}
