#include <stdio.h.
int main(){
	int a, b, choice;
	printf("enter two integers:");
	scanf("%d %d", &a &b);
	printf("\n1. addition");
	printf("\n. substraction");
	printf("\n. muitiplication");
	prinf("\n. division");
	printf("\n. remainder");
	printf("\nenter your choice:");
	scanf("%d", & chocie);
	switch (choice){
		case 1:
			printf ("sum = %d\n", a + b);
			break;
		case 2:
		printf("difference = %d\n", a-b);
		break;
		case 3:
			printf ("product = %d\n", a * b);
			break;
			case 4:
				if (b !=0)
				printf("quotient = %d\n", a / b);
				else 
				printf ("division by zero is not possible.\n");
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
}