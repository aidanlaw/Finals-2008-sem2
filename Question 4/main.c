//
//  main.c
//  Question 4
//
//  Created by Aidan Law on 17/06/2014.
//  Copyright (c) 2014 Aidan Law. All rights reserved.
//

#include <stdio.h>

int main(void)
{
    int num;
    
    printf("Guess a whole number between -6 and 6: ");
    scanf("%d", &num);
    
    if (num==0)
    {
        printf("Correct\n");
    }
    
    else if (num==1 || num==-1)
    {
        printf("Hot\n");
    }
    
    else if (num==-3 || num==-2 || num==2 || num==3)
    {
        printf("Warm\n");
    }
    
    else if (num==-5 || num==-4 || num==4 || num==5)
    {
        printf("Cold\n");
    }
    
    else
    {
        printf("Not a valid input\n");
    }
    return 0;
}

