#include <iostream>
#include <cmath>
using namespace std;

int findprime(int input)
{
    int i;
    bool isPrime = true;
    for(i = 2; i <= sqrt(input); i++)
    {
        if(input % i == 0)
        {
            isPrime = false;
            break;
        }
    }
    if(isPrime)
    {
        return input;
    }
    else
    {
        return 0;
    }
}

int main(int argc, char const *argv[])
{
    int a;
    long long int b = 0;
    for(a = 2; a <= 2000000; a++)
    {
        int c = findprime(a);
        if(c != 0)
        {
            b += c;
        }
        if(a % 100000 == 0) cout << a << endl;
    }
    cout << b << endl;

    return 0;
}