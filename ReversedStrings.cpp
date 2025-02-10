#include <iostream>
#include <ranges>
#include<bits/stdc++.h>
using namespace std;
int main() {
    std::cout << "ReversedString Assignment!" ;

    std::pmr::string x;

    std:: cout << "\n Say Something! ";
    std::cin >> x;

    reverse(x.begin(),x.end());

    cout << x << endl;
    return 0;



}