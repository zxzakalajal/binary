#include<stdio.h>
void DecToBinary(int n){
	if(n < 2) printf("%d",n);
	else{
		DecToBinary(n/2);
		printf("%d",n%2);
	}
}
