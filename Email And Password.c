#include <stdio.h> 
#include <string.h> 
 
main() 
{ 
    char email[100]; 
    char password[65]; 
 
 
    printf("Enter your email = "); 
    gets(email);
 
    printf("Enter your password  = "); 
    gets(password);
 
    if(strcmp(email,"aashishdabhi29@gmail.com")==0)
	{ 
	
 		printf("\n Correct E-mail ID");
 		
    }
	else
	{ 
   	
	   	printf("\n Incorrect E-mail ID"); 
	   	
	} 
	
	if(strcmp(password,"Aashish@$6578")==0)
	{ 
	
        printf("\n Correct password"); 
        
    }
	else
	{ 
	
    	printf("\n Incorrect password"); 
    	
	}
 
} 