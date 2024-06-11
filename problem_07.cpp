//
//  main.cpp
//  problem_07
//
//  Created by Artur Barčij on 14/10/2020.
//  Copyright © 2020 Artur Barčij. All rights reserved.
//
//
#include <iostream>
using namespace std;


int isPrime(int i) {

    
    int m = i/2;
    int flag = 0;

    for (int z = 2; z <= m; z++) {

        if (i % z == 0) {
            return false;
        
        break;
        }
    }


        if (flag == 0)
            return i;









    return 0;
}


int main() {


//Wikipedia gives the bounds 𝑛ln𝑛+𝑛(lnln𝑛−1)<𝑝𝑛<𝑛ln𝑛+𝑛lnln𝑛, where 𝑝𝑛 is the 𝑛th prime. So the 10001st prime is between 104318 and 114320.

    int i = 2;
    int k = 1;

         do {
             
         for (; i != 105'000; i++)
         {

            

             if (isPrime(i)) {
                 
                printf( "Prime nr.(%d) %d\n", k, isPrime(i));

                 
                 k++;
                 
             }
                 
         }

             
             } while (k < 10001);
    

        




    return 0;
}





//#include <iostream>
//using namespace std;
//
//int main() {
//
//int antal = 0;
//
//int testtal = 2;
//int test = 2;
//for ( ; antal != 10001 ; test++)
//{
//testtal = 2;
//
//for ( ; testtal <= test ; testtal++)
//{
//if (test % testtal == 0 && testtal != test)
// { break; }
//
//else if (testtal == test)
//{ antal += 1; }
//
//}
//
//}
//
//cout << test;
//
//return 0;
//}
