#include <stdio.h>
int main(void)
{
	//This is the answer of Question one
	printf("a will print '5/3, 2'\n");
	printf("b will print '0'\n");
	printf("c will print '1'\n");
	
	//This is the answer of Question Two
	printf("The first line is '!C is cool! !C is cool!''");
	printf("The second line is 10\n");
	printf("The third line is 9\n");
	printf("The forth line is 8\n");
	printf("THe fifth line10\n");
	
	//This is the answer of Question Three
	printf("When we user While loop, we should enter brace at the beginning and the end of the loop.\n");
	printf("lack of a zero, it should be 'return 0'");
	
	//This is the answer of Question Four
	printf("---10");
	printf("\n");
	
	//This is the answer of Question Five
	printf("The final values of x,i and j is :2, 2, 0\n\n\n");
	
	//This is the answer of Question Six
	{
	int x,a,b;
	
	printf("Please input a two-digit number.\n");
	scanf("%d",&x);
     a=x/10;
     b=x%10;
     x=b*10+a;
	printf("THe reverse is %d.\n",x);
	}
}
