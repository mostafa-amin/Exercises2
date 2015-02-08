//
//  main.cpp
//  training
//
//  Created by mostafa amin on 07/02/15.
//  Copyright (c) 2015 mostafa amin. All rights reserved.
// write a program to convert 5 digit integer of zeros and ones (Binary Format)
//into the decimal equivalent



#include <iostream>
#include<math.h>
using namespace std;




int main(int argc, const char * argv[]){    // insert code here...
    
    short x;
    short y;
    short decimal;
    short i;
    
    cout<<"Please Enter a binary number "<<"\n";
    cin>>x;
    
    
    for(i=0;i<5;i++)

        {
            y=x%10;
            if (y==1)
                decimal+=pow(2,i);
            x/=10;
        }
        cout<<decimal<<"\n";
}
