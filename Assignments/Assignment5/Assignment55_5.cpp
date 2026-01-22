
#include<iostream>
using namespace std;

template <class T>

T Max(T a, T b, T c, T d)
{
    if(a>b && a>c && a>d)
    {
        return a;
    }
    else if(b>a && b>c && b>d)
    {
        return b;
    }
    else if(c>a && c>b && c>d)
    {
        return c;
    }
    else
    {
        return d;
    }
}
int main()
{
    int iNo1 = 0, iNo2 = 0, iNo3 = 0, iNo4 = 0;
    int iRet = 0;
    cout<<"Enter first number :\n";
    cin>>iNo1;

    cout<<"Enter second number :\n";
    cin>>iNo2;

    cout<<"Enter third number :\n";
    cin>>iNo3;

    cout<<"Enter fourth number :\n";
    cin>>iNo4;

    iRet = Max(iNo1, iNo2, iNo3, iNo4);
    cout<<"Maximum number is :"<<iRet<<"\n";

    float iValue1 = 0, iValue2 = 0, iValue3 = 0, iValue4 = 0;
    float fRet = 0;
    cout<<"Enter first number :\n";
    cin>>iValue1;

    cout<<"Enter second number :\n";
    cin>>iValue2;

    cout<<"Enter third number :\n";
    cin>>iValue3;

    cout<<"Enter fourth number :\n";
    cin>>iValue4;

    fRet = Max(iValue1, iValue2, iValue3, iValue4);
    cout<<"Maximum number is :"<<fRet<<"\n";
    return 0;
}