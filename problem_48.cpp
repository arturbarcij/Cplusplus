//
//  main.cpp
//  problem_48
//
//  Created by Artur Barčij on 03/04/2021.
//  Copyright © 2021 Artur Barčij. All rights reserved.
//

#include <iostream>
#include <math.h>
#include <vector>
#include <sstream>
#include <string>

void String(unsigned long long powersum)

{
 
    std::cin >> powersum;
           std::stringstream ss;
           ss << powersum;
           std::string s;
           ss >> s;
}

int main() {
    
    
    long long sum = 0;
    for (int i = 1; i <= 10; ++i)
    {
        
        long long power = 0;
        power = pow( (i), (i));
        
        
        
        if (i <= 10)
        {
            
            std::vector <long long> digits;
            sum = sum + (pow( (i), (i)));
            digits.push_back (sum);
            std::cout << "pow " << i << ": ";
            std::cout << power << std::endl;''
            std::cout << "sum: " << digits.back() << std::endl;
            
        }
        
//        String(powersum);
        
//        std::string str1 = std::to_string(power);
        
        
        
        
//        std::cout << sum << std::endl;
        
        
        
        
    }
    
    
    std::cout << " " << std::endl;
    




    return 0;
}


