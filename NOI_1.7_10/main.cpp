#include <iostream>
#include <string>

using namespace std;


int main()
{
    string cipher;
    getline(cin, cipher);
    for(int i=0;i<cipher.size();i++)
    {
        if(cipher[i]>='F'&&cipher[i]<='Z')
            cipher[i] = cipher[i]- 'F'+'A';
        else if(cipher[i]>='A' && cipher[i]<='E')
            cipher[i] = cipher[i] - 'A' + 'V';
        cout<<cipher[i];
    }
    return 0;
}
