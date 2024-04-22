#include <stdio.h>
#include<math.h>

 
int main(){
	int i;
	
	printf("enter number:");
	scanf ("%d",& i);
	
	if (i==0){
	    printf("number is not natural number");
	}
	else if (i>=1){
		  printf("number is natural number");
	}
	else {
		  printf("number is not natural number");
	}
	return 0;
}



