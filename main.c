#include<stdio.h>
#include"add.h"
#include"sub.h"
#include"mult.h"

int main(){
	int a = 100;
	int b = 25;
	printf("Addition is : %d\nSubtraction is : %d\nMultiplication is : %d\n",add(a,b),sub(a,b),mult(a,b));
	return 0;
}
