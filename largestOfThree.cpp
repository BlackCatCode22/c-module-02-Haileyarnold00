#include <iostream>


int largestOfThree() {
    std::cout << "Largest of Three!" << std::endl;

    int x,y,z;

    std::cout << "\n\n Enter your first of three numbers:";
    std::cin >> x;
    std::cout << "\n\n Enter your second of three numbers:";
    std::cin >> y;
    std::cout << "\n\n Enter your last number:";
    std::cin >> z;

    if (x >= y && x >= z) {
        std::cout << "The largest number is: " << x;
    } else if (y >= x && y >= z) {
        std::cout << "The largest number is: " << y;
    } else {
        std::cout << "The largest number is: " << z;
    }


    return 0;
}