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
        int product;
        int quantity;
        int i;
        float total_retail1=0;
        float total_retail2=0;
        float total_retail3=0;
        float total_retail4=0;
        float total_retail5=0;
        
        
        cout<<"Please Enter the product\n";
        cin>>product;

        switch (product) {
            case 1:
                cout<<"Please Enter quantity for the seven days";
                for (i=1; i<=7; i++) {
                    cin>>quantity;
                    total_retail1+= quantity*2.98;
                }
                break;
                
            case 2:
                cout<<"Please Enter quantity for the seven days";
                for (i=1; i<=7; i++) {
                    cin>>quantity;
                    total_retail2+= quantity*4.50;
                }
                break;
                
                
            case 3:
                cout<<"Please Enter quantity for the seven days";
                for (i=1; i<=7; i++) {
                    cin>>quantity;
                    total_retail3+= quantity*9.89;
                }
                break;
                
                
            case 4:
                cout<<"Please Enter quantity for the seven days";
                for (i=1; i<=7; i++) {
                    cin>>quantity;
                    total_retail4+= quantity*4.49;
                }
                break;
                
            case 5:
                cout<<"Please Enter quantity for the seven days";
                for (i=1; i<=7; i++) {
                    cin>>quantity;
                    total_retail4+= quantity*6.87;
                }
                break;
                
            default:
                break;
        }
        
        cout<<total_retail1<<"\n"<<total_retail2<<"\n"<<total_retail3<<"\n"<<total_retail4<<"\n"<<total_retail5<<"\n";
    
    }


