#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
  //=============DO NOT ADD NEW OR CHANGE THIS STATEMENTS========
  system("cls");
  printf("\nTEST Q3 (2 marks):\n");      
  int numberOfVowels = 0;
  char ch;
  //============================================================   
  do{
  	 printf("Enter character : "); 
	 scanf("%c%*c",&ch);  
	 fflush(stdin); 	 
	 //Begin your statements here
     //Note: after processing the result will be stored in the numberOfVowels variable  
	 //........
	 //........
	 //.........	
	 //End your statements
  	 switch(ch){
  	 	case 'u':
		    numberOfVowels += 1;
		    break;	
  	 	case 'e':
		    numberOfVowels += 1;
		    break;	
  		case 'o':
		    numberOfVowels += 1;
		    break;	
  	 	case 'a':
		    numberOfVowels += 1;
		    break;	
  	 	case 'i':
		    numberOfVowels += 1;
		    break;	
  	 	case 'U':
		    numberOfVowels += 1;
		    break;	
  	 	case 'E':
		    numberOfVowels += 1;
		    break;	
  	 	case 'O':
		    numberOfVowels += 1;
		    break;	
  	 	case 'A':
			numberOfVowels += 1;
		    break;	
  	 	case 'I':
  	 		numberOfVowels += 1;
		    break;
		default:break;
  	}
  	 	
  }while(ch!='#');  
  
  //=============DO NOT ADD NEW OR CHANGE THIS STATEMENTS========
  printf("\nOUTPUT:\n"); 
  printf("%d",numberOfVowels );
  printf("\n");
  system ("pause");
  return(0);
  //============================================================ 
}
