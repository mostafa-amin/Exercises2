//
//  main.cpp
//  training
//
//  Created by mostafa amin on 07/02/15.
//  Copyright (c) 2015 mostafa amin. All rights reserved.


#include <iostream>
#include<math.h>
using namespace std;


int main(int argc, const char * argv[])

    {
        int line; /* line counter */
        int space; /* space counter */
        int asterisk; /* asterisk counter */
    
         /* top half */
         for(line=1;line<=9;line+=2){
          
            /* print preceding spaces */
            for(space=(9-line)/2;space>0;space--){ printf( " " );
            }/*endfor*/
            /* print asterisks */
            for ( asterisk = 1; asterisk <= line; asterisk++ ) { printf( "*" );
              
            } /* end for */
            printf( "\n" );
        } /* end for */
        
        for ( line = 7; line >= 0; line -= 2 ) {
            /* print preceding spaces */
            for ( space = ( 9 - line ) / 2; space > 0; space-- ) { printf( " " );
            } /* end for */
            /* print asterisks */
            for ( asterisk = 1; asterisk <= line; asterisk++ ) { printf( "*" );
            } /* end for */
            printf( "\n" );
        } /* end for */
         return 0; /* indicate successful termination */
         }/*endmain*/
            
