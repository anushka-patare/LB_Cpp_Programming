#include<iostream>
using namespace std;

template <class T>
int SearchLast(T *arr,int iSize, T iNo)
{
    int iCnt=0, last = 0;
    for(iCnt=1; iCnt<=iSize; iCnt++)
    {
        if(arr[iCnt] == iNo)
        {
            last = iCnt;
        }
    }
    return last;
}
int main()
{
    int iRet = 0, iCnt = 0;
    float iValue = 0;
    int iSize = 0;

    float iArr[iSize];
    
    cout<<"Enter size of array: \n";
    cin>>iSize;

    for(iCnt=1; iCnt<=iSize; iCnt++)
    {
        cin>>iArr[iCnt];
    }

    cout<<"Enter number to check its last occurence:\n";
    cin>>iValue;

    iRet = SearchLast(iArr,iSize,iValue);
    cout<<"Last occurence of "<<iValue<<" is :"<<iRet<<"\n";

    return 0;
}