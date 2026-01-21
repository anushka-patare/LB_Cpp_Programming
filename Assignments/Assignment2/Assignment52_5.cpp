#include<iostream>
using namespace std;

template <class T>
T Min(T *arr,int iSize)
{
    T Min;

    int i = 0;

    Min = arr[0];
    for(i=0; i<iSize; i++)
    {
        if(arr[i]<Min)
        {
            Min = arr[i];
        }
    }
    return Min;

}
int main()
{
    int arr[] = {10,20,30,40,50};
    float brr[] = {10.3,3.7,9.8,8.7};

    int iRet = Min(arr,5);
    cout<<"Minimum is : "<<iRet<<"\n";

    float fRet = Min(brr,4);
    cout<<"Minimum is :"<<fRet<<"\n";

    return 0;
}
