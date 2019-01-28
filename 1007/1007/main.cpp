#include <iostream>
#include <string>
#include <algorithm>

#define M 110

using namespace std;

struct dna{
	char str[M]; //dna序列
	int num;//逆序数
};

int main(void){
	int n, m;		   	
	cin >> n >> m;
	struct dna d[M];
	struct dna t;
	for (int i = 0; i < m; i++){
		d[i].num = 0;
		cin >> d[i].str;
		for (int j = 0; j < n-1; j++)
			for (int k = j + 1; k < n;k++){
				if (j<k && d[i].str[j]>d[i].str[k])
					d[i].num++;
				}
	}	
	for (int i = 0; i < m; i++)			   //冒泡排序
	for (int j = i; j < m; j++)
	{
		if (d[i].num > d[j].num)
		{
			t = d[i];
			d[i] = d[j];
			d[j] = t;
		}
	}

	for (int i = 0; i < m; i++)
		cout << d[i].str << endl;
	
	return 0;
}
