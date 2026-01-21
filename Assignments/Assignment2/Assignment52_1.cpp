#include<iostream>
using namespace std;

template <class T>

T Multiply(T no1, T no2)
{
    T ans;
    ans = no1 * no2;
    return ans;
}
int main()
{
    int iRet = 0;

    iRet = Multiply(10,20);
    cout<<"Multiplication is : "<<iRet<<"\n";

    float fRet = 0.0f;
    fRet = Multiply(10.4f,20.4f);
    cout<<"Multiplication is : "<<fRet<<"\n";

    return 0;
}