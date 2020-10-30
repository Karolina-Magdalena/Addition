#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;

int t,dlugosc1,dlugosc2,dlugosc3,n,m,a,b,o=0,reszta=0,suma=0;
char jeden[1010], dwa[1010],wynik[1100],cyfra;

int main()
{
    cin>>t;
    for (int i=1;i<=t;i++)
    {
        cin>>jeden>>dwa;
        dlugosc1=strlen(jeden);
        dlugosc2=strlen(dwa);
        if ((dlugosc1>dlugosc2)||(dlugosc1==dlugosc2))
        {
            n=dlugosc1-1;
            m=dlugosc2-1;
            while (n>=0)
            {
                if (m>=0)
                {cyfra = jeden[n];
                int a = cyfra-'0';
                cyfra = dwa[m];
                int b = cyfra-'0';
                suma=a+b+reszta;
                reszta=0;}
                else
                {cyfra = jeden[n];
                int a = cyfra-'0';
                suma=a+reszta;
                reszta=0;}
                if (suma>9)
                {reszta=suma/10;
                suma=suma%10;
                if (n==0)
                {cyfra=suma+'0';
                wynik[o]=cyfra;
                cyfra=reszta+'0';
                o=o+1;
                wynik[o]=cyfra;
                reszta=0;}
                else
                {cyfra=suma+'0';
                wynik[o]=cyfra;}}
                else
                {cyfra=suma+'0';
                wynik[o]=cyfra;}
                n=n-1;
                m=m-1;
                o=o+1;
            }
        }
        else if (dlugosc1<dlugosc2)
        {
        n=dlugosc1-1;
        m=dlugosc2-1;
        while (m>=0)
            {
                if (n>=0)
                {cyfra = jeden[n];
                int a = cyfra-'0';
                cyfra = dwa[m];
                int b = cyfra-'0';
                suma=a+b+reszta;
                reszta=0;}
                else
                {cyfra = dwa[m];
                int b = cyfra-'0';
                suma=b+reszta;
                reszta=0;}
                if (suma>9)
                {reszta=suma/10;
                suma=suma%10;
                if (m==0)
                {cyfra=suma+'0';
                wynik[o]=cyfra;
                cyfra=reszta+'0';
                o=o+1;
                wynik[o]=cyfra;
                reszta=0;}
                else
                {cyfra=suma+'0';
                wynik[o]=cyfra;}}
                else
                {cyfra=suma+'0';
                wynik[o]=cyfra;}
                n=n-1;
                m=m-1;
                o=o+1;
            }
        }
            for (int j=o-1;j>=0;j--)
            {
                cout<<wynik[j];
            }
            cout<<endl;
            wynik[0]='\0';
            n=0;
            m=0;
            o=0;
    }
    return 0;
}
