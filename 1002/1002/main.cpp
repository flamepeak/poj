#include <stdio.h>
#include <stdlib.h>

int main(){
	int Table[256];
	int Count[1000][10000] = { 0 };

	Table['A'] = Table['B'] = Table['C'] = 2;
	Table['D'] = Table['E'] = Table['F'] = 3;
	Table['G'] = Table['H'] = Table['I'] = 4;
	Table['J'] = Table['K'] = Table['L'] = 5;
	Table['M'] = Table['N'] = Table['O'] = 6;
	Table['P'] = Table['R'] = Table['S'] = 7;
	Table['T'] = Table['U'] = Table['V'] = 8;
	Table['W'] = Table['X'] = Table['Y'] = 9;
	for (unsigned char x = '0'; x <= '9'; x++){
		Table[x] = (int)(x - '0');
		//printf("Table[%d]:%d\n", x, Table[x]);
	}

	int n;
	scanf("%d", &n);
	char Tel[201];
	for (int j = 0; j < n; j++){
		scanf("%s", Tel);
		int t1 = 0, t2 = 0;
		int Tmp[7];
		int Index = 0;
		int i = 0;
		while (Tel[i] != 0){
			if (Tel[i] != '-'){
				Tmp[Index] = Table[Tel[i]];
				//printf("%d %d\n", Tmp[Index], Index);
				Index++;
			}
			i++;
		}
		t1 = 100 * Tmp[0] + 10 * Tmp[1] + Tmp[2];
		t2 = 1000 * Tmp[3] + 100 * Tmp[4] + 10 * Tmp[5] + Tmp[6];
		//printf("%d %d\n", t1, t2);		
		Count[t1][t2]++;
		//printf("%d\n", Count[t1][t2]);
	}
	char si[5] = { 0 };
	char sj[5] = { 0 };
	bool Out = true;
	for (int i = 0; i < 1000; i++)
		for (int j = 0; j < 10000; j++){
			if (Count[i][j] > 1){
				sprintf(si, "%.3d", i);
				//printf("%s\n",si);
				sprintf(sj, "%.4d", j);
				printf("%s-%s %d\n", si, sj, Count[i][j]);
				//printf("%.3d-%.4d %d\n", i, j, Count[i][j]);
				Out = false;
			}
	}
	if (Out)
		printf("No duplicates.");
	return 0;
}













/*
#include<iostream>
#include<iomanip>
#include<stdlib.h>
#include<string.h>
using namespace std;

const int maxn = 10000000 + 100;
int n;
char map[] = "22233344455566677778889999";
int a[maxn];

void init(){
	for (int i = 0; i <= 10000000; i++) a[i] = 0;
}

int pow2(int a){
	if (a == 0) return 1;
	int t = 1;
	for (int i = 1; i <= a; i++) t *= 10;
	return t;
}

void solve(){
	char s[100], t;
	int i = 1, num = 0;
	while (i <= 7) {
		cin >> t;
		if (t != '-'){
			s[i] = t;
			i++;
		}
	}
	for (int i = 1; i <= 7; i++) {
		int j = pow2(7 - i);
		if (s[i] >= '0'&&s[i] <= '9') num += j*(s[i] - '0');
		else num += j*(map[s[i] - 'A'] - '0'); //注意要把字符映射回数字
	}
	a[num]++;
}

int main(){
	cin >> n;
	init();
	for (int i = 1; i <= n; i++) solve();
	bool res = false;
	for (int i = 0; i <= 10000000; i++) if (a[i]>1) res = true, cout << setfill('0') << setw(3) << i / 10000 << '-' << setfill('0') << setw(4) << i % 10000 << ' ' << a[i] << endl;
	if (!res) cout << "No duplicates." << endl;
	return 0;
	}
*/