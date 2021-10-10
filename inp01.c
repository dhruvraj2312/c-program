// inp01.c - accept user inputs
//
# include <stdio.h>
//
void main() {
	int a, b;
// Task: To accept input value for a and print 2*a
	printf("Enter an integer value: ");
	scanf("%d", &a);
//
// Processing
	b = 2 * a;
	printf("2*%d = %d\n", a, b);
}

