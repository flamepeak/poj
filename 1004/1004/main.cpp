#include <iostream>
#include <iomanip>
using namespace std;

int main(void){
	int i = 0;
	double sum = 0.0, temp;
	for (i = 0; i < 12; i++){
		cin >> temp;
		sum += temp;
	}
	cout.setf(ios::fixed);
	cout << "$"<<setprecision(2)<<sum / 12 << endl;
	return 0;
}
