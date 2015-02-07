//
//  main.cpp
//  training
//
//  Created by mostafa amin on 07/02/15.
//  Copyright (c) 2015 mostafa amin. All rights reserved.
//write a progrm to test palindrome number
//palindrome numbers can be read from left to right and vice vers i.e(12321,52125)


#include <iostream>
using namespace std;




int main(int argc, const char * argv[]){    // insert code here...
    
    
    
    int x;
    cout<<"please enter a five digit number"<<"\n";
    cin>>x;
    int frist_digit;
    int fourth_digit;
    int second_digit;
    int fifth_digit;
    
    fifth_digit=x%10;
    
    fourth_digit=((x%100)/10);
    second_digit=((x%10000)/1000);
    frist_digit=((x%100000)/10000);
    
    if ((second_digit==fourth_digit)&&(fifth_digit==frist_digit))
        
        cout<<"Palindrome Number"<<"\n";
      
    
    else
        cout<<"Non-Palindrome Nmber"<<"\n";
 
    
}
