#include<iostream>
using namespace std;

template <class T>
int Frequency(T *arr,int iSize, T iNo)
{
    int iCount = 0, iCnt=0;
    for(iCnt=0; iCnt<iSize; iCnt++)
    {
        if(arr[iCnt] == iNo)
        {
            iCount++;
        }
    }
    return iCount;
}
int main()
{
    int iRet = 0, iCnt = 0, iValue = 0;
    int iSize = 0;

    int iArr[iSize];
    
    cout<<"Enter size of array: \n";
    cin>>iSize;

    for(iCnt=0; iCnt<iSize; iCnt++)
    {
        cin>>iArr[iCnt];
    }

    cout<<"Enter number to check its frequency:\n";
    cin>>iValue;

    iRet = Frequency(iArr,iSize,iValue);
    cout<<"Frequency of "<<iValue<<" is :"<<iRet<<"\n";

    return 0;
}