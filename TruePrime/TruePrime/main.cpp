#include <iostream>
#include <cmath>


using namespace std;

bool IsPrime(int x);
int inverted(int n);

int main(void)
{
	int m, n, k=0;
	cin >> m >> n;
	int a[100000];
	bool flag = false;
	for (int i = m; i <= n; i++)
	{
		if (IsPrime(i) && IsPrime(inverted(i)))
		{
			k++;
			a[k] = i;
			flag = true;
		}
	}
	if (flag)
	{
		for (int i = 1; i < k; i++)
			cout << a[i] << ",";
		cout << a[k] << endl;
	}
	else
		cout << "No" << endl;

	return 0;
}

bool IsPrime(int x)
{
	int i = 2;
	if (x == 0 || x == 1) return false;
	while (i <= floor(sqrt(x)) && (x%i != 0))
		i++;
	if (i>floor(sqrt(x)))
		return true;
	return false;
}

int inverted(int n)
{
	int sum = 0;
	while (n > 0)
	{
		sum = sum * 10 + n % 10;
		n /= 10;
	}
	return sum;
}
