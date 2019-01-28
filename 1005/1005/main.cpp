#include <iostream>
#include <math.h>

using namespace std;

const static double PI = 3.1415926;
const static double HALF_PI = PI / 2;
const static double EACH_AREA = 50; //每次扩散面积

/*
求解扩散次数
x 扩散坐标x
y 扩散坐标y
return 扩散次数
*/
int diffuse(double x, double y);

int main(void){
	int n; 
	cin >> n;
	double x, y;
	for (int i = 0; i < n; i++){
		cin >> x >> y;
		int cnt = diffuse(x, y);
		cout << "Property " << i+1 << ": This property will begin eroding in year " << cnt << '.' << endl;
	}
	cout << "END OF OUTPUT." << endl;
	return 0;
}

int diffuse(double x, double y){
	double R2 = x * x + y * y;
	double Area = HALF_PI * R2;
	return (int)ceil(Area / EACH_AREA);
}