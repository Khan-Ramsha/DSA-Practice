
#include <iostream>
using namespace std;
void insertion_sort(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        int j=i;
        while (j>0 && arr[j-1]>arr[j])
        {
            int temp=arr[j];
            arr[j]=arr[j-1];
            arr[j-1]=temp;
            j--;
        }
        
    }
    

}
int main(){
    int arr[]={4,1,3,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    insertion_sort(arr,n);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}
