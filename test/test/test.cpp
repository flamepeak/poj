



#include <iostream>
#include <string>

using namespace std;

int main()
{
	int k, j;
	cin >> k;
	string str;
	cin.get();
	cin >> str;
	for (int i = 0; i<=str.size() - k ; i++)
	{
		j = 0;
		while (str[i] == str[i + j])
		{
			j++;
			if (j == k)
			{
				cout << str[i];
				return 0;
			}
		}
		i = i + j-1;
	}
	cout << "No";
	return 0;
}


