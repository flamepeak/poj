#include <iostream>

#define N 200

using namespace std;


int main(void)
{
	char plaintext[N];
	char ciphertext[N];
	//cin>> plaintext;  //这种读入时错误的
	cin.get(plaintext, N); //可以用这种方法
	//gets_s(plaintext); //可以用这种方法
	int i = 0;

	while (plaintext[i] != '\0')
	{
		if (plaintext[i] <= 'E' && plaintext[i] >= 'A')
		{
			ciphertext[i] = plaintext[i] + 'V' - 'A';
			cout << ciphertext[i];
		}
		else if (plaintext[i] >= 'F' && plaintext[i] <= 'Z')
		{
			ciphertext[i] = plaintext[i] + 'A' - 'F';
			cout << ciphertext[i];
		}
		else
			cout << plaintext[i];

		i++;
	}
	cout << endl;

	return 0;
}