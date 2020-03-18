//the main purpose of this program is to understand the single control statment "if"and its functionality. 
#include<stdio.h>
void main()
{
    char guestno;//declaring it in char because we need to compare to a char, incase if we declare in integer it wont be possible to compare with another datatype, so we have to be careful.
	scanf("%c",&guestno);//accepting the char value from the user.
	if(guestno=='2')//evaluating the expression in this case i took '2' as the parameter you can take any value.
	{
		printf("You are allowed to enter!");// statement to be printed if the condition is evaluated as true.
	}
}
