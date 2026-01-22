#include<iostream>
using namespace std;

template <class T>

void Reverse(T *arr, int iSize)
{
    int iCnt = 0;
    int End = 0;

    while(End <iSize)
    {
        End++;
    }
    End--;
    
    cout<<"Reverse array is :\n";
    for(iCnt=End; iCnt>=0; iCnt--)
    {
        cout<<arr[iCnt]<<"\n";
    }

   /*
   
    ANOTHER LOGIC FOR THIS QUESTION
    
    while(Start < End)
    {
        temp = arr[Start];
        arr[Start] = arr[End];
        arr[End] = temp;

        Start++;
        End--;
    }*/

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

    Reverse(Arr,iSize);
   
    /*
    ANOTHER LOGIC FOR THIS QUESTION

    cout<<"Reverse array is :\n";
    for(iCnt = 0; iCnt<iSize; iCnt++)
    {
        cout<<Arr[iCnt]<<"\n";
    }
   */

    return 0;

}