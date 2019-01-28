/*
不知道对不对

*/



#include <iostream>

using namespace std;


int main(void)
{
	int member[100000];
	member[1] = 1000000;
	int n, cmp_val = 100000, id;
	unsigned int  smaller_id = 1, bigger_id = 2, smaller_val = 1000000, bigger_val = 1000000;
	cin >> n;
	for (int i = 2; i < n + 2; i++)
	{
		cin >> id >> member[i];
	}	

	for (int i = 2; i < n + 2; i++)
	{
		for (int j = 2; j <= i - 1; j++)
		{
			if (member[i]>member[j] && (member[i] - member[j]) <= cmp_val)
			{
				smaller_id = j;
				cmp_val = member[i] - member[j];
			}
			if (member[i]<member[j] && (member[j] - member[i]) <= cmp_val)
			{
				bigger_id = j;
				cmp_val = member[i] - member[j];
			}	
			
		}
		if (smaller_id <= bigger_id)
		{
			id = smaller_id;
		}
		else
		{
			id = bigger_id;
		}
		
		
		cout << i<<" " << id << endl;
	}

	return 0;
}