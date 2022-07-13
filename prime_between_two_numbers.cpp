//C++ program to find prime numbers in a given range

#include <iostream>
using namespace std;

void prime(int , int);

int main()
{
    int a, b, i, flag;
    cout << "\nEnter the start value : ";
    cin >> a;
    cout << "\nEnter the end value : ";
    cin >> b;
    prime(a,b);
    return 0;
}

void prime(int m, int n)
{
    int flag,i;
    cout << "\nPrime Numbers between "<< m << " and " << n <<" : ";
    while(m<=n)
    {
        flag = 0;
        for(i = 2; i <= m/2; i++)
        {
            if(m % i == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
            cout << m << ” “;
        ++m;
    }
}