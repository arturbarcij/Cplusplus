//
//  main.cpp
//  problem_5
//
//  Created by Artur Barčij on 10/10/2020.
//  Copyright © 2020 Artur Barčij. All rights reserved.
//

#include <iostream>
using namespace std;


void s_multiple(int n) {
    
    if ((n % 10 == 0) && (n % 11 == 0) && (n % 12 == 0) && (n % 13 == 0) && (n % 14 == 0) && (n % 15 == 0) && (n % 16 == 0) && (n % 17 == 0) && (n % 18 == 0) && (n % 19 == 0) && (n % 20 == 0))
        cout << n << endl;

    
}



int main() {
    
    int n;
    for (n = 1; n < 1'000'000'000; n++) {
        s_multiple(n);
    }
    
    
    
    
    
    
    
    
    
    
//    do {
//
//        k = num % n;
//
////        if (k == 0)
//            cout << k << endl;
////        else
////            return 0;
//
//        n++;
//        num++;
//    } while (n < 1000);
//
    
    return 0;
}
