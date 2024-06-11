//
//  main.cpp
//  fibonacci_algorithm
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
    int n = 40;
    
    for (int i = 1; i <= n; i++) {
       printf("fib(%d): %d\n",
        i,
        fibonacci_recursive(i));
    }
    
    int fib = fibonacci_recursive(n);
    printf("fibonacci(%d): %d", n, fib);
    
//    if (fibonacci_recursive(n - 2) + fibonacci_recursive(n - 1) > 10)
//
//        cout << "Index for fibbonaci number bigger than thousand is : " << fibonacci_recursive(n - 2) + fibonacci_recursive(n - 1) << endl;
//    else {
//        return 0;
//    }
    getchar ();
    getchar ();
    return 0;
}
