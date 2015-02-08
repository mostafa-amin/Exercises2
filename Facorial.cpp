//
//  main.cpp
//  training
//
//  Created by mostafa amin on 07/02/15.
//  Copyright (c) 2015 mostafa amin. All rights reserved.
//  write a program to calculate factorial


#include <iostream>
using namespace std;





int main(int argc, const char * argv[])
{
    int x;
    int fac=1;
    cout<<"Please enter non-negative number "<<"\n";
    cin>>x;
    while (x!=0) {
        fac*=x;
        x--;
        
    }
    cout<<fac<<"\n";
}


    

