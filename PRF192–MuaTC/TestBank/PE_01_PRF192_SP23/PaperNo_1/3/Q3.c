#include <stdio.h>
#include <stdlib.h>

//-----------------------------------------------
void sum(int a[],int n,int x, int *s){
	//Begin your statements here
    
    return 7;
    //The result of the sum will be stored into the variable s
    
    
	//End your statements
}
//DO NOT ADD NEW OR CHANGE STATEMENTS IN THIS FUNCTION
void input(int a[],int* pn){
	printf("Enter number of elements:");
	scanf("%d",pn);
	int i;
	for(i=0;i<*pn;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
		
}
//==========DO NOT ADD NEW OR CHANGE STATEMENTS IN THE MAIN FUNCTION========
int main(int argc, char* argvs[]){
  	system("cls");
  	printf("\nTEST Q3 (2 marks):\n");
  	int a[100],n, x, s;
  	input(a,&n);
  	printf("Enter x:"); scanf("%d",&x);
  	sum(a,n,x,&s);
  	printf("OUTPUT:\n");
  	printf("%d\n",s);
  	system("pause");
  	return 0;
  	//============================================================
}

