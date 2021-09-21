#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int numMonkey = 3;
	int numDays = 7;
	int leastRow = 0;
	int leastCol = 0;
	int mostRow = 0;
	int mostCol = 0;
	int food[numDays][numMonkey];
	double poundFood;
	double leastFood;
	double mostFood;
	double total = 0;
	string arr[7] = {"Sunday","Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
	
	for(int row = 0; row < 7; row++)
	{
		for(int col = 0; col < 3; col++)
		{
			do
			{
				cout << "Enter the food eaten by monkey #"<< col+1 << " on " << arr[row] << ":";
				cin >> poundFood;
				
				if (poundFood < 0)
				{
					cout << "Error! Number of pounds must be greater than 0." << endl;
				}
				
				food[row][col] = poundFood;
				total = total + poundFood;
			}
			while(poundFood < 0);
		}
	}
	
	leastFood = food[0][0];
	mostFood = food[0][0];
	
	for (int row = 0; row < 7; row++)
	{
		for (int col = 0; col < 3; col++)
		{
			
			if (food[row][col] < leastFood)
			{ 
				leastFood = food[row][col];
				leastRow = row;
				leastCol = col;
			}
			if (food[row][col] > mostFood)
			{ 
				mostFood = food[row][col];
				mostRow = row;
				mostCol = col;
			}
		}
	}

	cout << "Average food consumed daily: "<< total / 7 << endl;
	cout << "The least daily food consumed was by Monkey #" << leastCol+1 << " on " << arr[leastRow]<<"." <<endl;
	cout << "The most daily food consumed was by Monkey #"  << mostCol+1 << " on " << arr[mostRow]<<"."<<endl;

	return 0;
}
