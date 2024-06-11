//
//  main.cpp
//  problem_03
//
//  Created by Artur Barčij on 03/10/2020.
//  Copyright © 2020 Artur Barčij. All rights reserved.
//

#include <iostream>
#include <math.h>
using namespace std;
//void printPrimeFactors(int n) {
//    while (n%2 == 0){
//        cout<<"2\t";
//        n = n/2;
//    }
//    for (int i = 3; i <= sqrt(n); i = i+2){
//        while (n%i == 0){
//            cout<<i<<"\t";
//            n = n/i;
//        }
//    }
//    if (n > 2)
//    cout<<n<<"\t";
//}
//int main() {
//    int n = 2632;
//    cout<<"Prime factors of "<<n<<" are :\t";
//    printPrimeFactors(n);
//    return 0;
//}

void primeFactors(long n) {
    
    int x = 2;
    while (x * x <= n) {
        if (n % x == 0) {
            cout << x << endl;
            n /= x;
        }
        else
            x++;
    }
    if (n>1)
        cout << n;
}




int main() {
    long n = 600851475143;
    cout << "Prime factors for integer " << n << " are:" << endl;
    primeFactors(n);
    cout << " is the largest prime factor for the integer." << endl;
}
