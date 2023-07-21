#include <stdio.h> 
main() 
{ 
    char username[15]; 
    char password[10]; 
 
 
    printf("Enter your username:\n"); 
    scanf("%s",&username); 
 
    printf("Enter your password:\n"); 
    scanf("%s",&password); 
 
    if(strcmp(username,"tushar")==0)
	{ 
        if(strcmp(password,"9913792685")==0)
		{ 
 
        printf("\nWelcome.Login Success!"); 
        }
		else
		{ 
          printf("\nwrong password"); 
        } 
    }
	else
	{ 
         printf("\nUser doesn't exist"); 
    } 
}
