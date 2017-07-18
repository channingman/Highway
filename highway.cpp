#include <iostream>
#include <time.h>
#include <stdlib.h>
#include "vehicle.h"
#include <iomanip>

using namespace std;
void cycle(Vehicle*, int);
void AI(Vehicle);

int main()
{
	srand(time(NULL));
	AverageCar first(1);
	for (int i = 0; i < 100; i++)
	{
		cycle (&first, 0);
		cout << "The next car has a desired speed of " << first.next->getDesiredSpeed() << endl;
	}
	Vehicle highway[100];
	char dontStop;
	cin >> dontStop;
	return 0;
}

void cycle(Vehicle *current, int a)
{
	cout << "test 1" << endl;
	if (!(*current).next)
	{
		cout << "There's a null pointer!\n";
		int carType = rand()%100;
		if (carType < 10)
		{
			cout << "zt1" << endl;
			FastCar another((int)(*current).getYlocation());
			(*current).next = &another;

		}
		else if (carType < 15)
		{
			cout << "zt2" << endl;
			AggressiveCar another((int)(*current).getYlocation());
			(*current).next = &another;
		}
		else if (carType < 50)
		{
			cout << "zt3" << endl;
			Grandma another((int)(*current).getYlocation());
			(*current).next = &another;
		}
		else
		{
			cout << "zt4" << endl;
			AverageCar another((int)(*current).getYlocation());
			(*current).next = &another;
		}
	}
	else
	{
		cout << "zt5 Here's the pointer: " << (*current).next << endl;
		cycle((*current).next, a);
		
	}
}

void AI(Vehicle current)
{

}