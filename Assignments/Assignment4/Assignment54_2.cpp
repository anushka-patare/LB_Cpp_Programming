#include<iostream>
using namespace std;

template <class T>

T SumEven(T *arr, int iSize)
{
    int iCnt =  0;
    T Sum;
    Sum = 0;
    for(iCnt = 0; iCnt<iSize; iCnt++)
    { 
        if(arr[iCnt]%2==0)
        {
            Sum = Sum + arr[iCnt];
        }
    }
    return Sum;
}
int main()
{
    int iSize = 0,iCnt = 0, No = 0;
    int iRet = 0;

    cout<<"Enter size of array :\n";
    cin>>iSize;

    int *Arr = NULL;
    Arr = new int [iSize];

    cout<<"Enter elements into array :\n";
    for(iCnt = 0; iCnt<iSize; iCnt++)
    {
        cin>>Arr[iCnt];
    }

    iRet = SumEven(Arr,iSize);
    cout<<"Summation of even numbers is : "<<iRet<<"\n";
    return 0;

}