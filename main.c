#include<stdio.h>
int main()
{
	int a, t, d, p=10;
	printf("Enter amount between $50,000 and $100,000:");
	scanf("%d", &a);
	t=a/p;
	printf("The Taxable Amount is: %d\n", t);
	d=a-t;
	printf("The Disposable Income is: %d\n", d);
	printf("Enter amount between $100,000 and $250,000:");
	scanf("%d", &a);
	p=23;
	t=a/p;
	printf("The Taxable Amount is: %d\n", t);
	d=a-t;
	printf("The Disposable Income is: %d\n", d);
	printf("Enter amount between $250,000 and $350,000:");
	scanf("%d", &a);
	p=28;
	t=a/p;
	printf("The Taxable Amount is: %d\n", t);
	d=a-t;
	printf("The Disposable Income is: %d\n", d);

return 0;
}
