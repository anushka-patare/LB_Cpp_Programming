#include<iostream>
using namespace std;

template <class T>
int SearchFirst(T *arr,int iSize, T iNo)
{
    int iCnt=0;
    for(iCnt=1; iCnt<=iSize; iCnt++)
    {
        if(arr[iCnt] == iNo)
        {
            return iCnt;
            break;
        }
    }
    return -1;
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

    cout<<"Enter number to check its first occurence:\n";
    cin>>iValue;

    iRet = SearchFirst(iArr,iSize,iValue);
    cout<<"First occurence of "<<iValue<<" is :"<<iRet<<"\n";

    return 0;
}