//
//  main.cpp
//  cpp_1_lab
//
//  Created by Robert Nowiński on 02/09/2019.
//  Copyright © 2019 Robert Nowiński. All rights reserved.
//

#include <iostream>

int numer_one = 1;

int main(int argc, const char * argv[]) {
    std::cout << numer_one << " to jest numer" << '\n';
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.get();
    return 0;
}


