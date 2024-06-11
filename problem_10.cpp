//
//  main.cpp
//  problem_10
//
//  Created by Artur Barčij on 13/10/2020.
//  Copyright © 2020 Artur Barčij. All rights reserved.
//

#include <iostream>
using namespace std;


int main() {
    
    
    unsigned long long sum = 2;
    int j = 2;
    for (; j <= 2*1000000; j++) {

        int i = 2;
        for (; i <= j-1; i++)
        {

            if (j%i == 0)
            break;
        }
        
        if (i == j && i != 2) {
            

           sum = sum + j;
            
           cout << "Num: " << j << " Sum:" << sum << endl;
            
        }
        
    
            }
                
        
   
    return 0;
}
