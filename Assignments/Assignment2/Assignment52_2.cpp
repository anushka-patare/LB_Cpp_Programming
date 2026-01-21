#include<iostream>
using namespace std;

template <class T>

T Max(T No1,T No2, T No3)
{
    if(No1 > No2 && No1 > No3)
    {
        return No1;
    }
    else if(No2>No1 && No2>No3)
    {
        return No2;
    }
    else
    {
        return No3;
    }
}
int main()
{
    int iRet = 0;
    iRet = Max(15,67,45);
    cout<<"Maximum number is : "<<iRet<<"\n";
    
    float fRet = 0.0f;
    fRet = Max(23.5f,67.5f,89.5f);
    cout<<"Maximum number is : "<<fRet<<"\n";

    return 0;
}