#include <stdio.h>
#include <stdlib.h>
int isPrime(int n){
    //Begin your statements here
    int i;
    if(n<=1) return 0;   
    	for(i=2;i*i<=n;i++){
    		if(n%i==0) return 0;
    	} return 1;
	
    
    //End your statements
}
/*
========================DO NOT EDIT GIVEN STATEMENTS IN THE MAIN FUNCTION.============================
===IF YOU CHANGE, THE GRADING SOFTWARE CAN NOT FIND THE OUTPUT RESULT TO SCORE, THUS THE MARK IS 0.===
*/
int main()
{
  system("cls");
  printf("\nTEST Q2 (2 marks):\n");
  int n,r,s; 
  printf("Enter n = "); scanf("%d",&n);   
  r = isPrime(n);
  printf("\nOUTPUT:\n");
  s = (r==1?n*n:n*2);
  printf("%d",s);
  printf("\n");
  system ("pause");
  return(0);  
}
//============================================================ 
