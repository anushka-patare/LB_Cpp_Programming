#include<iostream>
using namespace std;

template <class T>

T Sub(T no1, T no2)
{
    if(no2 == 0)
    {
        cout<<"Invalid number\n";
        return -1;
    }

    T Ans;
    Ans = 0;
    Ans = no1 / no2;
    return Ans;
}

int main()
{
    int iRet = Sub(40,0);
    cout<<"Division of integer is :"<<iRet<<"\n";

    float fRet = Sub(10.5f,20.3f);
    cout<<"Division of float is :"<<fRet<<"\n";

    return 0;
}