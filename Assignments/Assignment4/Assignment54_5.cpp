#include<iostream>
using namespace std;

template <class T>

T Min(T *arr, int iSize)
{
    int iCnt =  0;
    T Min;
    Min = arr[0];
    for(iCnt = 0; iCnt<iSize; iCnt++)
    { 
        if(arr[iCnt]< Min)
        {
            Min = arr[iCnt];
        }
    }
    return Min;
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

    iRet = Min(Arr,iSize);
    cout<<"Minimum number is : "<<iRet<<"\n";
    return 0;

}