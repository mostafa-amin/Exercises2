//
//  main.cpp
//  training
//
//  Created by mostafa amin on 07/02/15.
//  Copyright (c) 2015 mostafa amin. All rights reserved.


#include <iostream>
#include<math.h>
using namespace std;

//(Calculating the Value of π) Calculate the value of π from the infinite series 44444...
//π = 4 – - + -- – - + - – -- + 3 5 7 9 11


int main(int argc, const char * argv[])

    {
        int count = 0;
        long int side1;
        long int side2;
        long int hypotenuse;
        long int hyptSquared;
        long int sidesSquared;
        
      
        for ( side1 = 1; side1 <= 500; side1++ ) {
            /* side2 values range from current side1 to 500 */
            for ( side2 = 1; side2 <= 500; side2++ ) {
                /* hypotenuse values range from current side2 to 500 */
                for ( hypotenuse = 1; hypotenuse <= 500; hypotenuse++ ) { /* calculate square of hypotenuse value */
                     hyptSquared = hypotenuse * hypotenuse;
                    
                    /* calculate sum of squares of sides */
                    sidesSquared = side1 * side1 + side2 * side2;
                    /* if hypotenuse squared = side1 squared + side2 squared, Pythagorean triple */
                    if ( hyptSquared == sidesSquared ) { /* display triple */
                     
                        printf( "%ld %ld %ld\n", side1, side2, hypotenuse );
                        ++count; /* update count */ } /* end if */
                } /* end for */
            } /* end for */
        } /* end for */
        /* display total number of triples found */
        printf( "A total of %d triples were found.\n", count );
        return 0; /* indicate successful termination */
    }/*endmain*/
