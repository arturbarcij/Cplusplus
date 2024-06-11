//
//  main.cpp
//  problem_09
//
//  Created by Artur Barčij on 15/10/2020.
//  Copyright © 2020 Artur Barčij. All rights reserved.
//

#include <iostream>
using namespace std;
#include <math.h>






int main() {
    
    
    
    
    
    
    
//      for (int i = 2; i < 30; i++) {
//
//
//          for (int j = i-1; j < 30; j++) {
//
//
//              int a = i;
//              int b = j;
//              int c = ((a*a)+(b*b));
//
////              int c = (i*i) + (j*j);
//              int sum = (a*a)+(b*b)+c;
//              int prod = sqrt(c)*a*b;
//
//              if (sum == 1000) {
//                  cout << "a: " << i << " b: " << j << endl;
//                  cout << "c: " << c << endl;
//                  cout << "Sum: " << sum << endl;
//                printf("Product: %d\n", prod);
//              cout << "" << endl;
//              }
//
//
//
//
//          }
//
//        }
//
        
            
        

   
        const int sum = 1000;
        int a;
        for (a = 1; a <= sum/3; a++)
        {
            int b;
            for (b = a + 1; b <= sum/2; b++)
            {
                int c = sum - a - b;
                if ( a*a + b*b == c*c ) {
                   printf("a=%d, b=%d, c=%d\n",a,b,c);
                    cout << "Sum: " << a+b+c << endl;
                cout << "Product: " << a*b*c << endl;
                }
            }
        }
        
    
    return 0;
}
