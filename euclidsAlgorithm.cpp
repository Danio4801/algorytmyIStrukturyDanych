#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cout<<"Euclid's algorithm implementation in the CPP"<<endl;
    cout<<"Input a:";
    cin>>a;
    cout<<"Input b:";
    cin>>b;

    if (a >= b)
    {
        while (b > 0)
        {
            c = (a % b);
            a = b;
            b = c;
        }
        cout<<"Greatest common divisor:"<<a<<"."<<endl;
    }
    else
    {
        cout<<"a must be greater than or equal to b"<<endl;
    }

    return 0;
}

/*
Euclid's alogrithm operates on integers
Pseudocode scheme:
a >= b
while b > 0 do
c:=a mod b;
a:=b
b:=c
end while
Greatest common divisor := a
 */