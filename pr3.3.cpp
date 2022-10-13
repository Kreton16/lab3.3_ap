#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x; // вхідний аргумент
	double R; // вхідний параметр
	double y; // результат обчислення виразу
	cout << "R = "; cin >> R;
	cout << "x = "; cin >> x;
	// розгалуження в повній формі
	if (x <= -8 - R)
		y = R;
	else
		if (-8 - R < x && x <= -8 + R)
			y = -sqrt(R * R - x * x - 16. * x - 64.) + R;
		else
			if (-8 - R < x && x <= -4)
				y = R;
			else
				if (-4 < x && x <= 0)
					y = -(R * x) / 4.;
				else
					if (0 < x && x <= 2)
						y = -(1. / 2.) * x;
					else
						y = x - 2.;
	
	cout << endl;
	cout << "y = " << y << endl;
	cin.get();
	return 0;
}