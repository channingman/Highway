class Vehicle
{
public:
	int getDesiredSpeed() { return desiredSpeed; }
	int getSpeed(){ return speed; }
	double getFollowingTime(), getMergeDistance(), getXLocation(), getYlocation();
	void setYLocation(double), setSpeed(int), setXLocation(double);
	bool merging;
	Vehicle *next, *last, *mergeBack, *mergeFront;

protected:
	int desiredSpeed, speed;
	double followingTime, mergeDistance;
	double xLocation, yLocation;
};

class Car: public Vehicle
{
};

class FastCar : public Car
{
public: FastCar(double);
};

class AverageCar : public Car
{
public: AverageCar(double);
};

class AggressiveCar : public Car
{
public: AggressiveCar(double);
};

class Grandma : public Car
{
public: Grandma(double);
};
