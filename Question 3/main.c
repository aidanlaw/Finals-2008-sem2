//
//  main.c
//  Question 3
//
//  Created by Aidan Law on 17/06/2014.
//  Copyright (c) 2014 Aidan Law. All rights reserved.
//

#include <stdio.h>      //standard input outputs
#include <math.h>       //math.h needed for math functions

#define ELEMENTS 10     //setting elements to 10 which will be called upon later

int main(void)

{                       //DO NOT FORGET (;) FROM THIS POINT!!! and always make sure curly-wurlys open and close sections
    
    float depth[ELEMENTS] = {10.0, 11.0, 13.5, 10.1, 8.3, 20.4, 19.7, 14.0, 3.7, 7.7};
    /*
     Creating a matrix called depth where the values are floats.
     Setting the size of the matrix to 10 as ELEMENTS == 10
     This creates a matrix of 1x10 */
    
    int i;                                  //creating an integer called "i". integers hold whole values, no decimals; handy for counting
    float min, max, sum, average;           //creating 4 float values
    min = depth[0];                         //sets the following three floats to 0
    max = depth[0];
    sum = depth[0];
    
    for(/*i=2*/i=1; i<ELEMENTS; i++)       //i=1 was i=2  setting to 1 means the first value in the matrix can be read by the for loop
    {
        if(depth[i] > max)          //in the first run, this will read in the first matrix value (10.0) and as it is greater than max==0 then it falls in this section
        {
            max = depth[i];         //sets the float "max" as the current matrix value being read
        }
        else if(depth[i] /*>*/ < min)       //loop falls into this section if the matrix value being read is less than the current "max" value
        {                                   //">" should be "<" or else min will rise with a higher value when a small value is wanted
            min = depth[i];                 //sets the float "min" as the current matrix value being read
        }
        sum += depth[i];                //suggests that the current value in the matrix will be added to the current variable "sum"
    }                                   //DO NOT FORGET THE END CURLY-WURLYS!!!
    average = sum / ELEMENTS/* - 1*/;   //the math problem of "- 1" exists here and can be removed as it offers no worth
    //equation shows that the value in the sum is divided by 10 as defined at the top of the program
    
    printf("min depth: %8.2f\n", min);          //prints the minimum depth value with 8 digits before the decimal and 2 digits after. Also produces a new line (\n)
    printf("max depth: %8.2f\n", max);          //prints the maximum depth value with 8 digits before and 2 digits after the decimal
    printf("average depth: %8.2f\n", average);  //prints the average depth.
    //The values printed are %f as they were previously set as floats (variables able to hold decimals)
    
    return 0;               //stops the program
}                           //Curly-wurly to end the entire written code
