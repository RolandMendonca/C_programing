#include <iostream.h>
#include <conio.h>
void main()
{
	int i, j, a[10], n = 10, temp, c = 0, b[10];
	clrscr();
	cout << "Enter a array:"; //Input
	for (i = 0; i < n; i++)
		cin >> a[i];
	for (i = 0; i < n; i++) //bubble sort
		for (j = 0; j < n - i - 1; j++)
			if (a[j] > a[j + 1])
			{
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
	for (i = 0; i < n; i++) //Counting single digit number
		if (0 == a[i] / 10)
			c++;
	j = 0;
	for (i = c; i < n; i++) //pushing elements to array only two digit
	{
		b[j] = a[i];
		j++;
	}
	for (i = 0; i < n; i++)
		cout << "\n"
			 << b[i];
	for (i = 0; i < c; i++) //Not working
		for (j = 0; j < n; j++)
		{
			if (b[j] / 10 < a[i])
			{
				for (int x = n - 1; x == j; x--)
					b[x] = b[x - 1];
				break;
			}
		} //till here
	for (i = 0; i < n; i++)
		cout << "\t" << a[i]; //output
	cout << "\n";
	for (i = 0; i < n; i++)
		cout << b[i];
	cout << "\n"
		 << c;
	getch();
}
