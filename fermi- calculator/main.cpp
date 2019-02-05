#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;

int main()
{
	///////////////////////////////// FERMION DISTRIBTION//////////////////////////////////////////////////////////////////////
	float n, T = 0;
	int g = 2;
	float Pi = 3.14159265359;
	double E, m, N, E_max, E_min, E_delta;
	int i, j, n_j=0, I;
	//float z = pow(10, -5);
	//float K = 8.6173324*z;
	cout << "Input temperature (K):" << endl;
	cin >> T;
	cout << "Input E_max \n";
	cin >> E_max;
	cout << "Input E_min \n";
	cin >> E_min;
	cout << "Choose value for m (MeV)" << endl;
	cin >> m;
	float FermiDistribution = (1 / ((pow(2.71828182846, (E_max - E_min) / T)) + 1));

	if (T == 0.0)
	{
		cout << "The Fermi distribution: [1/(e^(E_max-E_min)/T) + 1] = 1.0\n" << FermiDistribution;


	}
	else
	{
		cout << "The Fermi distribution: [1/(e^(E_max-E_min)/T) + 1] = " << FermiDistribution;
	}

	///////////////////////////// DENSITY ////////////////////////////////////////////////////////////////
	//cout << E << endl;

	N = 3000;
	E_delta = (E_max - E_min) / (N - 1);
	 n = 0; E = m;
	 I = FermiDistribution * (sqrt(pow(E, 2) - pow(m, 2))*E);
	
		for (j = 0; j = N - 1; j++) {

			E += E_delta;
			n_j = I*E_delta;
			n += n_j;
			
			cout << " density= " << (g / (2 * pow(Pi, 2))) * I << endl;
			break;
		}
		
	
	///////////////////////////  PRESSURE  ////////////////////////////////////////////////////////////////////////

















	/////////////////////////////////////// n_i //////////////////////////////////////////////////////////////////////////































	///////////////////////////////////e_i////////////////////////////////////////////////////////////////////////////////






	system("PAUSE");
	return 0;
}