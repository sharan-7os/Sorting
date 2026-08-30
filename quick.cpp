#include<bits/stdc++.h>
using namespace std;
int partition(vector<int> &arr,int low,int high)
{
    int pivot=arr[low];
    int i=low;
    int j=high;
    while(i<j)
    {
        while(arr[i]<=pivot && i<=high-1){
        i++;
    }
        while(arr[j]>pivot && j>low){
        j--;
    }
        if(i<j) swap(arr[i],arr[j]);
    }
    swap(arr[low],arr[j]);
    return j;
}
void quicksort(vector<int> &arr,int low,int high)
{
    if(low<high)
    {
        int p=partition(arr,low,high);
        quicksort(arr,low,p-1);
        quicksort(arr,p+1,high);
    }
}
int main()
{
    vector<int> arr={2,5,7,6,1,3,4};
    quicksort(arr,0,arr.size()-1);
    for(int x:arr){
        cout<<x<<" ";
    }
}
