//                                             An Armstrong number is a number that is equal to the 
//											 sum of its digits raised to the power of the number of digits1.
//											  For example, 153 is an Armstrong number because 153 = 1³ + 5³ + 3³1.
//											   There are no 2-digit Armstrong numbers12, because no two-digit number
//											    can be expressed as the sum of the squares of its digits2.
//                                               The only Armstrong numbers with less than three digits are the numbers 1 to 9
//                                                           1^1,  2^1,  3^1,  4^1,  5^1,  6^1,  7^1,   8^1,   9^1
#include <stdio.h>
#include <math.h>
	
int main(){

    int n;
    scanf("%d",&n);
    int i;
    printf("NUMBER OF DIGITS:  ");
    scanf("%d",&i);
    
    int sum =0;
    int originaln=n;
    while (n>0){
        int lastdigit =n%10;
        sum=sum+pow(lastdigit,i);
        n=n/10;
    }
    if (sum==originaln){
        printf(" ARMSTRONG NUMBER");
    }
    else{
        printf(" NOT  ARMSTRONG NUMBER");
    }

    return 0;	}