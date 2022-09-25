#include<iostream>
using namespace std;

int main()
{
    int i, j, temp;
    int num;
    int arr[30];
    cout<<"Enter the number of elements:\n";
    cin>>num;
    cout<<"Enter the numbers:";
    
    for(i=0;i<num;i++)
    {
        cin>>arr[i];
    }

    for(int i=1;i<=num-1;i++)
    {
        temp=arr[i];
        j=i-1;

        while((temp<arr[j]) && (j>=0)){
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=temp;  
    }     
    
    cout<<"Sorted elements are:\t";
    for(i=0;i<num;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}