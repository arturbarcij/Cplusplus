//
//  main.cpp
//  problem_04
//
//  Created by Artur Barčij on 04/10/2020.
//  Copyright © 2020 Artur Barčij. All rights reserved.
//

#include <iostream>
using namespace std;


//void Palindromic(int x) {
//
//    int n, digit,  rev = 0;
//
//    n = x;
//
//    do {
//        digit = x % 10; //seperates last digit from the integer
//
//        /* digit will add to the rev, but first we shift numbers to the left to add the last digit(nth place), so instead of (12 + last digit) we need (120 + last digit), etc. 10 + 2 = 12, 120 + 3 = 123, and so on. */
//
//        rev = (rev * 10) + digit;
//
//        /* now we shift the integer back to right by dividing by 10, 120 / 10 = 12, etc. */
//
//        x = x / 10;
//
//    } while (x != 0);
//    // now i print the reversed number of the input(integer).
//    cout << "Reverse of the integer is: " << rev << endl;
//    /* comparing reversed output with input, if they are same, it's a palindrome. */
//
//    if (n == rev)
//
//        cout << "Is palindrom. " << endl;
//
//
//
//};

bool isPalin(int i, int j) {
    
    
    int digit, num = 0, rev = 0;
    int prod = i * j;
    num += prod;

    do {

        digit = num % 10;
        rev = (rev * 10) + digit;
        num = num / 10;
    }   while (num != 0);
    
    if (prod == rev) {
        
        //assuming that the first digit of the largest palindrome is 9, so prod > 900k
        if (prod > 900*10*10*10) {
        cout << "Largest palindrome made from the product of two three-digit numbers is: " << prod << endl;
        }
        else
            return 0;
    }
    else {
        
        
    }
    return 0;
}
    



int main () {
    
    for (int i = 0; i < 1000; i ++) {
        for (int j = i+1; j < 1000; j++) {
            
            
            isPalin(i, j);
            
        }
    }
    
    for(int g = 0; g < 6; g++) {
    cout << "" << endl;
    }
        

        
        
        
        

            return 0;

}
    
    
    
    
   

