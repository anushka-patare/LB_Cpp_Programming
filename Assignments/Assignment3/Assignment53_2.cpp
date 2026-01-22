#include<iostream>
using namespace std;

template <class T>

bool CheckSorted(T *Brr, int iLength)
{
    int iCnt = 0;
    for(iCnt=0 ; iCnt<iLength-1; iCnt++)
    {
        if(Brr[iCnt] > Brr[iCnt + 1] )
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int *Arr = NULL;
    int iSize  = 0, i = 0;

    bool bRet = false;
  
    cout<<"Enter size of array :\n";
    cin>>iSize;

    Arr = new int[iSize];

    cout<<"Enter elements into array :\n";

    for(i=0; i<iSize; i++)
    {
        cin>>Arr[i];
    }

    bRet = CheckSorted(Arr,iSize);
    if(bRet == true)
    {
        cout<<"Array is sorted\n";
    }
    else
    {
        cout<<"Array is not sorted\n";
    }

    return 0;
}