#include <iostream>

using namespace std;

int main(void)
{
	char plaintext[200];
	char ciphertext[200];
	//cin >> plaintext;  //这种读入时错误的
	gets_s(plaintext);
	int i=0;
	
	while (plaintext[i]!='\0')
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