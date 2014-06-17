//
//  main.c
//  Question 1
//
//  Created by Aidan Law on 17/06/2014.
//  Copyright (c) 2014 Aidan Law. All rights reserved.
//

#include <stdio.h>
#include <math.h>

#define sqr(x) ((x)*(x))                        //defines sqr(x) as x*x (removes the calculation from the main section so it does not need to be done)

int main(void)
{
    float base, height, area, hypot;
    
    base = 10.0;
    height = 1.0;
    
    while(height <= 10.0)                      //starts and continues loop if height is less than or equal to 10.0
    {
        area = base * height / 2.0;
        printf("area of triangle: %7.2f", area);        //prints out the variable "area" with 7 digits in front and 2 digits after the decimal
        hypot = sqrt(sqr(base) + sqr(height));
        printf("base: %7.2f height: %7.2f hypotenuse: %7.2f\n", base, height, hypot);   //prints the variables with %7.2f suggesting a float with 0000000.00
        height += 1.0;                                                                  //adds 1.0 to the height and the loop starts again as long as height is <=10.0
    }

    return 0;
}

