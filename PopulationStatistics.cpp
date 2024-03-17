#include <iostream>
using namespace std;

class population
{
	private: 
		int births;
		int deaths;
		int currentP;
	public:
		population(int = 0, int = 0, int = 0);
		void setBirths(int);
		void setDeaths(int);
		void setcurrentP(int);
		double getBirths();
		double getDeaths();
};
population::population(int b, int d, int p)
{
	births = b;
	deaths = d;
	currentP = p;

}
void population::setBirths(int b)
{
	births = b;
}
void population::setDeaths(int d)
{
	deaths = d;
}
void population::setcurrentP(int p)
{
	currentP = p;
}
double population::getBirths()
{
	return (double(births) / currentP);
}
double population::getDeaths()
{
	return (double(deaths) / currentP);
}
int inputPop(int);
int inputB(int);
int inputD(int);
void printInfo(population);
int main()
{
	int death = 0, birth = 0, pop = 0;

	pop = inputPop(pop);
	birth = inputB(birth);
	death = inputD(death);
	population cp(birth, death, pop);
	printInfo(cp);

	return 0;
}
void printInfo(population p)
{
	double br = p.getBirths();
	double dr = p.getDeaths();

	cout << "The birth rate is: " << br << "\n";

	if (br < 0.05)
		cout << "The birth rate is too low.";

	cout << "The death rate is: " << dr << "\n";

	if (dr > 0.15)
		cout << "The death rate is too high.";

}
int inputB(int b)
{
	cout << "Insert the number of births: ";
	cin >> b;

	while (b < 0)
	{
		cout << "ERROR insert a valid number: ";
		cin >> b;
	}

	return b;
}
int inputD(int d)
{
	cout << "Insert the number of births: ";
	cin >> d;

	while (d < 0 )
	{
		cout << "ERROR insert a valid number: ";
		cin >> d;
	}

	return d;
}
int inputPop(int p)
{
	cout << "Insert the population: ";
	cin >> p;

	while (p < 0)
	{
		cout << "ERROR insert a valid number: ";
		cin >> p;		
	}

	return p;
}
