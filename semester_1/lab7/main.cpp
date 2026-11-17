#include <iostream>
#include <clocale>
#include <cstring>
#include <iomanip>
using namespace std;
float armf(float* a,int n){
	float sum = 0;
	for (int i = 0; i < n; i++){
		sum += a[i];
	}
	return sum/n;
}
double armf(double* a,int n){
	double sum = 0;
	for (int i = 0; i < n; i++){
		sum += a[i];
	}
	return sum/n;
}
int count_l(char* s,int len){
	int let = 0;
	for (int i = 0;i < len; i++){
		if ((0 <= (s[i] - 'a')) &&  ((s[i] - 'a')< 28)) let++;
		else if((0 <= (s[i] - 'A')) &&  ((s[i] - 'A')< 28)) let++;
	}
	return let;
}
long count_l(char* s,long len){
	long let = 0;
	for (long i = 0;i < len; i++){
		if ((0 <= (s[i] - 'a')) &&  ((s[i] - 'a')< 28)) let++;
		else if((0 <= (s[i] - 'A')) &&  ((s[i] - 'A')< 28)) let++;
	}
	return let;
}

int main(){
	setlocale(LC_ALL,"");
	cout << setprecision(17);
	int f_n = 6;
	int d_n = 6;
	float f_a[] = {7 , 2 , 3 , 4, 5,6};
	double d_a[] = {9 , 2 , 3 , 4, 5,6};
	cout << armf(f_a,f_n) << endl;
	cout << armf(d_a,d_n) << endl;
	char s[] = "I am the power";
	long len_l = strlen(s);
	int len_i = strlen(s);
	cout << count_l(s,len_i) << endl;
	cout << count_l(s,len_l) << endl;
}
