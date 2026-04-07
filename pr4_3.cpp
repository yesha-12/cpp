#include<iostream>
using namespace std;


int main()
{
    int n;
    cin>>n;
    int m;
    cin>>m;
    int k=0;
   

    int *arr1=new int[n];

    cout << "array 1: ";
    for(int i = 0; i < n; i++) {
        cin >> arr1[i];
    }

   

    int *arr2=new int[m];

    cout << "array 2: ";
    for(int i = 0; i < m; i++) {
        cin >> arr2[i];
    }

   
    int i=0,j=0;
     int *merge=new int[n+m];
    while(k<n+m)
    {
        if (arr1[i]<=arr2[j])
        {
            merge[k++]=arr1[i++];

        }
        else
        {
        merge[k++]=arr2[j++];
        }

    }
    for(int i=0;i<k;i++)
    {
        cout<<merge[i];
    }
    
   
    return 0;
}