#include<iostream>
using namespace std;

template <class T>

T Sub(T no1, T no2)
{
    T Ans;
    Ans = 0;
    Ans = no1 - no2;
    return Ans;
}

int main()
{
    int iRet = Sub(10,20);
    cout<<"Subtraction of integer is :"<<iRet<<"\n";

    float fRet = Sub(10.5f,20.3f);
    cout<<"Subtraction of float is :"<<fRet<<"\n";

    return 0;
}