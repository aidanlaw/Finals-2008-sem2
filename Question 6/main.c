//
//  main.c
//  Question 6
//
//  Created by Aidan Law on 19/06/2014.
//  Copyright (c) 2014 Aidan Law. All rights reserved.
//

#include <stdio.h>
#include <math.h>

int main(void)
{
    printf("The following code prompts the user for a pair of floating point values called a and b to be read from the keyboard\n");
    printf("The program will check the values given and will keep prompting the user until the values fit both of the following statements\n");
    printf("\t- Between 100.0 and 150.0 (inclusive)\n\t- Difference between inputs is less than or equal to 10.0\n\n");
    printf("The program will show appropriate error messages if the numbers do not fit the criteria\n\n");
    
    float num1=0.0, num2=0.0;
    
    do
    {
        printf("Enter two numbers from 100.0 to 150.0 (inclusive) with a difference less than or equal to 10: ");
        scanf("%f %f", &num1, &num2);
        printf("\n\n");
    
        if ((num1<100.0) || (num1>150.0) || (num2<100.0) || (num2>150.0) || (fabs(num1-num2)>10.0))
        {
            printf("The numbers entered, %f and %f, are not valid inputs.\n Please adjust these values\n\n", num1, num2);
        }
    }
    while ((num1<100.0) || (num1>150.0) || (num2<100.0) || (num2>150.0) || (fabs(num1-num2)>10.0));
        
        printf("Thankyou\n");
    
    return 0;
}

