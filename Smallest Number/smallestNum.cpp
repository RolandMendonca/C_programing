#include <iostream>
using namespace std;
int main()
{
	int size = 10;								 // Size
	int a[10] = {9, 8, 4, 5, 7, 1, 2, 6, 10, 0}; // Array
	int i, j, temp;								 // Counter Variables and temporary storage
	int smallest = a[0], pos;					 //Loop essental information

	// First loop
	for (i = 1; i < 10; i++)
	{
		// Second loop
		for (j = i; j < 10; j++)
		{
			// Here we check if the smallest number is lesser than the number pointer
			// If we get the smallest number, we swap it
			if (a[j] < smallest)
			{
				smallest = a[j];
				pos = j;
			}
		}
		// Here goes the swapping algorithm
		// Write it yourself
		cout << "\n"
			 << smallest << " - " << pos << "\n";
	}
	return 0;
}
