//
//  main.c
//  Question 7
//
//  Created by Aidan Law on 19/06/2014.
//  Copyright (c) 2014 Aidan Law. All rights reserved.
//

#include <stdio.h>

int main(void)
{
    printf("The following code will create two floating point vectors p and q that each consist of three elements so they have the values:\n");
    printf("\tp:\t2.0\t2.6\t2.8\n\tq:\t4.3\t1.5\t6.2\n\n");
    printf("Then use a looping method to multiply the vector p by the transpose of vector q to produce one  scalar value called result\n\n");
    
    //Code begins here
    
    float p[3]={2.0,2.6,1.8};
    float q[3]={4.3,1.5,6.2};
    float result=0.0;
    int i;
    
    for(i=0;i<3;i++)
        result=result+(p[i]*q[i]);
    
    printf("Result is: %.1f\n\n", result);
    
    

    return 0;
}

