#include <iostream>
#include <clocale>
using namespace std;

int main(){
	setlocale(LC_ALL,"");
	double sum,a;
	a = 0.1;
	int n;
	cin >> n;
	if (n >=1){
		sum = a;
		for (int i = 2; i <=n;i++){
			a = a*(i-1)/10;
			sum += a;
		}
		cout << sum << endl;
	}
	else{
		cout << 0 << endl;
	}
	return 0;
}
