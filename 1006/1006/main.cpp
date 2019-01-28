#include <iostream>

using namespace std;

typedef long long LL;
const int N = 100000 + 5;

/*
中国剩余定理
https://www.cnblogs.com/linyujun/p/5199415.html



*/


/*
扩展欧几里得算法
对于不完全为 0 的非负整数 a，b，gcd（a，b）表示 a，b 的最大公约数，必然存在整数对 x，y ，使得 gcd（a，b）=ax+by。

*/
void ex_gcd(LL a, LL b, LL &x, LL &y, LL &d){//扩展欧几里得,又称辗转相除法，计算两个整数a,b的最大公约数
	if (b == 0){d = a, x = 1, y = 0;}
	else{
		ex_gcd(b, a % b, y, x, d);//gcd(a, b) = gcd(b, a%b)
		y -= x*(a/b);
	}
}

LL inv(LL t, LL p){
	LL d, x, y;
	ex_gcd(t, p, x, y, d);
	return d == 1 ? (x%p + p) % p : -1;
}

LL china(int n, LL *a, LL *m){//中国剩余定理
	LL M = 1, ret = 0;
	for (int i = 0; i < n; i++){
		M *= m[i];
	}
	for (int i = 0; i < n; i++){
		LL w = M / m[i];
		ret = (ret + w*inv(w, m[i]) * a[i]) % M;
	}
	return (ret + M) % M;
}



int main(void){
	LL p[3], r[3], d, ans, MOD = 21252;
	int cas = 0;
	p[0] = 23; p[1] = 28; p[2] = 33;
	while (~scanf_s("%I64d%I64d%I64d%I64d", &r[0], &r[1], &r[2], &d) && (~r[0] || ~r[1] || ~r[2] || ~d)){
		ans = ((china(3, r, p) - d) % MOD + MOD) % MOD;
		printf("Case %d: the next triple peak occurs in %I64d days.\n", ++cas, ans?ans:21252);
	}
	return 0;
}
/* 另一种方法 http://exp-blog.com/2018/06/24/pid-1054/
已知(n+d)%23=p; (n+d)%28=e; (n+d)%33=i
使33×28×a被23除余1，用33×28×8=5544；
使23×33×b被28除余1，用23×33×19=14421；
使23×28×c被33除余1，用23×28×2=1288。
因此有（5544×p+14421×e+1288×i）% lcm(23,28,33) =n+d

又23、28、33互质，即lcm(23,28,33)= 21252;
所以有n=（5544×p+14421×e+1288×i-d）%21252

本题所求的是最小整数解，避免n为负，因此最后结果为n= [n+21252]% 21252

那么最终求解n的表达式就是：
n=(5544*p+14421*e+1288*i-d+21252)%21252
*/


/*
#include<iostream>
using namespace std;

int main(void)
{
	int p, e, i, d;
	int time = 1;
	while (cin >> p >> e >> i >> d)
	{
		if (p == -1 && e == -1 && i == -1 && d == -1)
			break;

		int lcm = 21252;  // lcm(23,28,33)
		int n = (5544 * p + 14421 * e + 1288 * i - d + 21252) % 21252;
		if (n == 0)
			n = 21252;
		cout << "Case " << time++ << ": the next triple peak occurs in " << n << " days." << endl;
	}
	return 0;
}

*/