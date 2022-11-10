#include<stdio.h>
#include"add.h"
#include"sub.h"
#include"mult.h"

int main(){
	int a = 25;
	int b = 10;
	printf("Addition is : %d\nSubtraction is : %d\nMultiplication is : %d\n",add(a,b),sub(a,b),mult(a,b));
	return 0;
}
