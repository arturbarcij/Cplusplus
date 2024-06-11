//
//  main.cpp
//  problem_02
//
//  Created by Artur Barčij on 03/10/2020.
//  Copyright © 2020 Artur Barčij. All rights reserved.
//

#include <iostream>
using namespace std;

int fibonacci_recursive(int n) {
    
    if (n == 1 || n == 2) {
        return 1;
    }
    else {
        return fibonacci_recursive(n - 2) + fibonacci_recursive(n - 1);
    }
}


int main() {
    int n = 35;
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        if (fibonacci_recursive(i) % 2 == 0 && fibonacci_recursive(i) <= 4000000) {
        cout << "fib(" << i << ") " << fibonacci_recursive(i) << endl;
        sum += fibonacci_recursive(i);
        }
    }
    
    cout << "Sum of fib even values is: " << sum << endl;

    return 0;
}
