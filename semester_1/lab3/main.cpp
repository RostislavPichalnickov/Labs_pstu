#include <iomanip>
#include <iostream>
#include <cmath>
#include <clocale>
using namespace std;
int main(){
	cout << setprecision(5);
	setlocale(LC_ALL,"");
	double a = 0.1;
	double b = 1.0;
	double x, y, sn, se, a_n,a_e;
	int n = 10;
	double e = 0.0001;
	double step = (b-a)/10;
	cout <<"x	sn	se	y" << '\n';
	for (int i = 0; i <=n; i++){
		x =  a +i*step;
		sn=1;
		se = 1;
		a_n = 1;
		a_e = 1;
		for(int k = 1; k <= n; k++){
			a_n = a_n*(x*x) / (4*k*k - 2*k);
			sn += a_n;
		}
		int k = 1;
		while(abs(a_e) >= e){
			a_e = a_e*(x*x) / (4*k*k - 2*k);
			se += a_e;
			k++;
		}
		y = cosh(x);
		cout << x << '	' << sn << '	' << se << '	' <<  y << '\n';
	}
}
