//
//  main.cpp
//  cpp_1_lab
//
//  Created by Robert Nowiński on 02/09/2019.
//  Copyright © 2019 Robert Nowiński. All rights reserved.
//

#include <iostream>
constexpr int g = 6;
int addition(int, int);

int main(int argc, const char * argv[]) {
    std::cout << addition(2, g) << '\n';
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.get();
    return 0;
}

int f1 (int t) {
    return t;
}


