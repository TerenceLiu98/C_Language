//
//  main.c
//  C_UIC
//
//  Created by 刘骏杰 on 12/10/2017.
//  Copyright © 2017 刘骏杰. All rights reserved.
//

#include<stdio.h>
int main()
{
    //this is for question 1
    printf("My name:Terry Liu\n My address: UIC new campus\n");
    
    //this is for question 2
    int age,convert;
    printf("My age is 19\n");
    age = 19;
    convert = 19*365;/*This is for Question two */
    
    //this is for question c-a
    printf("Baa Baa Black Sheep.");/*It will print 'Baa Baa Black Sheep */
    printf("Have you any wool?\n");/* I will print'Have you any wool' '\n' this symbol means new line*/
    
    //this is for quesiton 3-b
    printf("Begone!\n O creature of lard!\n");/* print ' Begone! '\n'means newline print 'O creature of lard' '\n'means newline*/
    
    //this is for question 3-c
    printf("What?\nNo/nfish?\n");/*print'What?' 'n' means newline print'No/n' print'fish?'*/
    
    //this is for question 3-d
    int num;
    num = 2;
    printf("%d + %d\n", num,num,num+num);
    
    //this is for question 4
    printf("lack of '#include<stdio.h>'\n");
    printf("change / into // \n");
    printf("change into 'int  cow,leg\n");
    printf("lack of double qoutes\n");
    printf("change %%c into %%d; lack of '&'\n");
    printf("change %%f into %%d\n");
    
    //This is for question 5
    printf("change %%s into %%c\n");
    printf("change %%f into %%d\n");
    printf("I could not found the veriable that name is 'X'\n");
    printf("I could not found the verialbe that name is 'B'and the veriable'xp' isn't difine as it is int or float\n");
    
    //this is for question 6
    /*
     Day=1 number of chickens=10 number of rabbits=6
     cost of chicken=   23.50 cost of rabbit=   18.00
     total cost=343.000000
     Day=12 number of chickens=10 number of rabbits=10
     cost of chicken=   23.50 cost of rabbit=   19.55
     total cost=430.500000
     */
    printf("You can see the conten of the program in the comment.\n");
    
    //this is fro question 7
    char a_b=0;
    printf("input the ASCII code value");
    scanf("%d",&a_b);
    printf("output %c\n",a_b);
    return 0;
}

