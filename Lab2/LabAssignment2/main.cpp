//
//  main.cpp
//  LabAssignment2
//
//  Created by Immanuel Amirtharaj and Eric Castronovo on 1/12/15.
//  Copyright (c) 2015 Immanuel Amirtharaj and Eric Castronovo. All rights reserved.
//

#include "Complex.h"
#include <iostream>

using namespace std;

int main()
{
    Complex test(5.0, 3);
    Complex x(3.0, 1);
    
    Complex add = test + x;
    cout << add << endl; //Should output 8+4*i
    
    
    Complex mul = test * x;
    cout << mul << endl; //Should output 12+14*i
    
    Complex y(3, 2);
    
    cout << "Please input a complex number" << endl;
    cin >> y;
    
    cout << y << endl; //Should output what user entered
    return 1;
}
