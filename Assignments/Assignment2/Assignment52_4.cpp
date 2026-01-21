#include<iostream>
using namespace std;

template <class T>
T Max(T *arr,int iSize)
{
    T Max;

    int i = 0;

    Max = arr[0];
    for(i=0; i<iSize; i++)
    {
        if(arr[i]>Max)
        {
            Max = arr[i];
        }
    }
    return Max;

}
int main()
{
    int arr[] = {10,20,30,40,50};
    float brr[] = {10.3,3.7,9.8,8.7};

    int iRet = Max(arr,5);
    cout<<"Maximum is : "<<iRet<<"\n";

    float fRet = Max(brr,4);
    cout<<"Maximum is :"<<fRet<<"\n";

    return 0;
}
