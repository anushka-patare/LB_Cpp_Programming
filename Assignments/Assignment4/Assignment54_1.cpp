#include<iostream>
using namespace std;

template <class T>

bool Search(T *arr, int iSize, T Value)
{
    int iCnt = 0 ,iCount = 0;
    for(iCnt=0; iCnt<iSize; iCnt++)
    {
        if(arr[iCnt] == Value )
        {
            iCount++;
        }
    }

    if(iCount>0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int iSize = 0,iCnt = 0, No = 0;
    bool bRet = false;

    cout<<"Enter size of array :\n";
    cin>>iSize;

    int *Arr = NULL;
    Arr = new int [iSize];

    cout<<"Enter elements into array :\n";
    for(iCnt = 0; iCnt<iSize; iCnt++)
    {
        cin>>Arr[iCnt];
    }

    cout<<"Enter value to search :\n";
    cin>>No;

    bRet = Search(Arr,iSize,No);
    if(bRet == true)
    {
        cout<<No<<" is present in array\n";
    }
    else
    {
        cout<<No<<" is not present in array\n";
    }
    return 0;

}