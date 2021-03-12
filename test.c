#include<stdio.h>
void DecToBinary(int n){
	if(n < 2) printf("%d",n);
	else{
		DecToBinary(n/2);
		printf("%d",n%2);
	}
}

void Binary(int n){
	
	unsigned i = 1 << 31;
	int check = 0;
	while (i)
	{
		if(i & n)
		{
			printf("1");
			check = 1;
		}
		else 
		{
			if(check !=0)
			{
				printf("0");
			}
		}
		i = n >> 1;
	}
}
int main(void){
	DecToBinary(10);
	printf("\n");
	Binary(12);
	print("\n");
}
