/*

08:Vigenère密码
查看 提交 统计 提问
总时间限制: 1000ms 内存限制: 65536kB
描述
16世纪法国外交家Blaise de Vigenère设计了一种多表密码加密算法——Vigenère密码。Vigenère密码的加密解密算法简单易用，且破译难度比较高，曾在美国南北战争中为南军所广泛使用。

在密码学中，我们称需要加密的信息为明文，用M表示；称加密后的信息为密文，用C表示；而密钥是一种参数，是将明文转换为密文或将密文转换为明文的算法中输入的数据，记为k。 在Vigenère密码中，密钥k是一个字母串，k=k1k2…kn。当明文M=m1m2…mn时，得到的密文C=c1c2…cn，其中ci=mi®ki，运算®的规则如下表所示：



Vigenère加密在操作时需要注意：

1. ®运算忽略参与运算的字母的大小写，并保持字母在明文M中的大小写形式；

2. 当明文M的长度大于密钥k的长度时，将密钥k重复使用。

例如，明文M=Helloworld，密钥k=abc时，密文C=Hfnlpyosnd。

明文	H	e	l	l	o	w	o	r	l	d
密钥	a	b	c	a	b	c	a	b	c	a
密文	H	f	n	l	p	y	o	s	n	d


输入
输入共2行。
第一行为一个字符串，表示密钥k，长度不超过100，其中仅包含大小写字母。第二行为一个字符串，表示经加密后的密文，长度不超过1000，其中仅包含大小写字母。

对于100%的数据，输入的密钥的长度不超过100，输入的密文的长度不超过1000，且都仅包含英文字母。
输出
输出共1行，一个字符串，表示输入密钥和密文所对应的明文。


*/




#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string k,coded;
    cin>>k>>coded;
    for (int i=0;i<k.size();i++)
    {
        k[i]=tolower(k[i]);
    }
    for (int i=0,j=0;i<coded.size();i++,j++)
    {
        if (j==k.size())
            j=0;
        if (coded[i]!=' ')
        {
            if ((coded[i]-(k[j]-'a')<'A'&&coded[i]>='A')||((coded[i]-k[j]+'a')<'a'&&(coded[i])>='a'))
                coded[i]+=26;
            coded[i]-=(k[j]-'a');
        }
    }
    cout<<coded;
    return 0;
}


/*
#include <iostream>

using namespace std;

char Vige[26][26];

int main()
{
    for(int i=0;i<26;i++)
    {
        for(int j=0;j<26;j++)
        {
            Vige[i][j]=(i+j)%26;
        }
    }
    string key, cipherText;
    getline(cin, key);
    getline(cin, cipherText);
    for(int i=0;i<key.size();i++)
        key[i] = tolower(key[i]);
    if(key.size()<cipherText.size())
    {
        for(int i=0;i<cipherText.size()/key.size()+1;i++)
            key +=key;
    }
    int k=0;
    for(int i=0;i<cipherText.size();i++)
    {
        if(cipherText[i]>='a' && cipherText[i]<='z')
        {
            for(int j=0;j<26;j++)
            {
                if(Vige[key[k]-'a'][j]==(cipherText[i]-'a'))
                {
                    cout<<(char)('a'+j);
                }
            }
            k++;
        }
        else if(cipherText[i]>='A' && cipherText[i]<='Z')
        {
            for(int j=0;j<26;j++)
            {
                if(Vige[key[k]-'a'][j]==(cipherText[i]-'A'))
                {
                    cout<<(char)('A'+j);
                }
            }
            k++;
        }
        else
            cout<<cipherText[i];
    }

    return 0;
}
*/
