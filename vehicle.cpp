#include <iostream>
#include <iomanip>
#include "vehicle.h"
using namespace std;

/*int Vehicle::getDesiredSpeed()
{
	return desiredSpeed;
}*/

double Vehicle::getFollowingTime()
{
	return followingTime;
}

double Vehicle::getMergeDistance()
{
		return mergeDistance;
}

double Vehicle::getXLocation()
{
	return xLocation;
}

double Vehicle::getYlocation()
{
	return yLocation;
}

void Vehicle::setXLocation(double a)
{
	xLocation = a;
	return;
}

void Vehicle::setYLocation(double a)
{
	yLocation = a;
	return;
}

void Vehicle::setSpeed(int a)
{
	speed = a;
}


FastCar::FastCar(double a)
{
	desiredSpeed = rand() % 20 + 70;
	followingTime = 1.1 + (double)(rand() % 100) / 100 ;
	yLocation = a;
	xLocation = -1.0;
	next = NULL;
}

AggressiveCar::AggressiveCar(double a)
{
	desiredSpeed = rand() % 15 + 65;
	followingTime = 0.5 + (double)(rand() % 100) / 100 *0.8;
	yLocation = a;
	xLocation = -1.0;
	next = NULL;
}

Grandma::Grandma(double a)
{
	desiredSpeed = rand() % 10 + 55;
	followingTime = 2.2 + (double)(rand() % 100) / 100 * 1.3;
	yLocation = a;
	xLocation = -1.0;
	next = NULL;
}

AverageCar::AverageCar(double a)
{
	desiredSpeed = rand() % 10 + 60;
	followingTime = 1.7 + (double)(rand() % 100) / 100 * 0.6;
	yLocation = a;
	xLocation = -1.0;
	next = NULL;
}