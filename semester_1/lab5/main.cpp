#include <iostream>
#include <clocale>
using namespace std;
int sumer(int* t,int m,int r,int c){
	int sum = 0;
	for(int i = r;i < r+3;i++){
			for(int j = c;j < c + 3;j++){
				sum += t[i*m + j];
			}
		}
	return sum;
}
int main(){
	setlocale(LC_ALL,"");
	int n,m;
	int mi=0,mj=0,max=0;
	cin >> n >> m;
	if (n < 3 or m <3){
	cout << "too small" << endl;
		return 0;
	}
	int a[n][m];
	for(int i = 0;i < n;i++){
		for(int j = 0;j<m;j++){
			cin >> a[i][j];
		}
	}
	for (int i=0; i <= n-3;i++){
		for (int j=0; j <= m-3;j++){
			int tempi = sumer(&a[0][0],m,i,j);
			//cout << tempi << '\n';
			if (max < tempi){
				max = tempi;
				mi = i;
				mj = j;
			}
		}
	}
	cout << '\n';
	for(int i = mi;i < n;i++){
		for(int j = mj;j<m;j++){
			cout << a[i][j] << " ";
		}
		cout << '\n';
	}
	cout << "size = " <<max << endl;
return 0;
}
