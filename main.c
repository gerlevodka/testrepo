#include <stdio.h>
int main()
{
	printf("gerlevodka/testrepo\n");
	printf("Adding 5 + 8\n");
	int reurnvalue = addtest(5, 8);
	printf("Equals: %d", reurnvalue);
	return 0;
}
int addtest(int a, int b)
{
	return a+b;
}