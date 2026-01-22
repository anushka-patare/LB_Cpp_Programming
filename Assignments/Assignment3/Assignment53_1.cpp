#include<iostream>
using namespace std;

template <class T>
void CopyArray(T *src, T *dest, int iLength)
{
    int iCnt = 0;
    for(iCnt=0; iCnt<iLength; iCnt++)
    {
        dest[iCnt] = src[iCnt];
    }
    
}
int main()
{
    int iCnt = 0, iSize = 0;

    cout<<"Enter size of array:\n";
    cin>>iSize;

    int *Arr = NULL;
    Arr = new int[iSize];

    int *Brr = NULL;
    Brr = new int[iSize];


    for(iCnt = 0; iCnt<iSize; iCnt++)
    {
        cin>>Arr[iCnt];
    }

    cout<<"Elements of array: \n";
    for(iCnt = 0; iCnt<iSize; iCnt++)
    {
        cout<<Arr[iCnt]<<"\n";
    }

    CopyArray(Arr,Brr,iSize);
    
    cout<<"Copied elements are :\n";
    for(iCnt = 0; iCnt<iSize; iCnt++)
    {
        cout<<Brr[iCnt]<<"\n";
    }
   
    return 0;
}