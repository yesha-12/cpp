#include<iostream>
using namespace std;
int recursivesum(int arr[],int n)
{
    if(n == 0)
        return 0;
    return arr[n-1] + recursivesum(arr,n-1);
}

int iterativesum(int arr[], int n)
{
    int sum=0;

    for(int i=0;i<n;i++)

        sum+=arr[i];
    return sum;
}

int main()
{
    int n;
    cout<<"enter size:";
    cin>>n;

    int* arr=new int[n];

    cout<<"enter element of array:";
    for(int i=0;i<n;i++)
    cin>>arr[i];

    cout<<"recursivesum:"<<recursivesum(arr,n)<<endl;
    cout<<"iterativesum:"<<iterativesum(arr,n)<<endl;

    delete[] arr;


}
