#include <stdio.h>
#include <stdlib.h>


int sum(int n){	    
  // Write your statements here
  int i;
  int tong = 0;
  for (i = 1; i<=n;i++){
  	tong = tong + i;
	}
 

  return tong;
	 
  // End your codes  
}
//====DO NOT ADD NEW OR CHANGE STATEMENTS IN THE MAIN FUNCTION
int main()
{
  system("cls");
  printf("\nTEST Q2 (3 marks):\n");
  int n,s;
  printf("Enter n = "); scanf("%d",&n);  
  s = sum(n);
  //====DO NOT ADD NEW OR CHANGE STATEMENTS AFTER THIS LINE====
  //==THE OUTPUT AFTER THIS LINE WILL BE USED TO MARK YOUR PROGRAM==
  printf("\nOUTPUT:\n");
  printf("%d",s); 
  printf("\n");
  system ("pause");
  return(0);
}
