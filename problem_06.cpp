//
//  main.cpp
//  problem_06
//
//  Created by Artur Barčij on 04/10/2020.
//  Copyright © 2020 Artur Barčij. All rights reserved.
//

#include <iostream>
using namespace std;



void sumSquare(int x) {
    
    int i, sq = 0, sum = 0, n = 0;
    for (i = 1; i <= x; i++) {
        sq = i * i;
        sum += sq;
        n = (n + i);
    }
    cout << "Sum of squares for the first one hundred natural numbers is: " << sum << endl;
    cout << "The square of the first one hundred natural numbers is: " << n*n << endl;
    cout << "The difference between the sum of the squares of the first one hundred natural numbers and the square of the sum is:  " << (n*n)-sum << endl;
}

int main() {
    
    sumSquare(100);
    
    return 0;
}

