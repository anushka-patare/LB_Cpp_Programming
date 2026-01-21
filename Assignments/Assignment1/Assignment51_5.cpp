#include<iostream>
using namespace std;

template <class T>

void Reverse(T *arr , int iLength)
{
    int iStart = 0;
    int iEnd = iLength -1;
    T temp;

    while(iStart < iEnd )
    {
        temp = arr[iStart];
        arr[iStart] = arr[iEnd];
        arr[iEnd] = temp;

        iStart++;
        iEnd--;
    }
}

int main()
{
    int iSize = 0, iCnt = 0;
    int arr[iSize];

    cout<<"Enter size of array :\n";
    cin>>iSize;

    for(iCnt=0; iCnt<iSize; iCnt++)
    {
        cin>>arr[iCnt];
    }

    cout<<"Elements of array is :\n";
    for(iCnt=0; iCnt<iSize; iCnt++)
    {
        cout<<arr[iCnt]<<"\n";
    }
    
    Reverse(arr,iSize);

    cout<<"Reverse array is :\n";

    for(iCnt=0; iCnt<iSize; iCnt++)
    {
        cout<<arr[iCnt]<<"\n";
    }

    return 0;
}