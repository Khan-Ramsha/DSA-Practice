#include <iostream>
using namespace std;
int bs(int a[],int start,int end,int x){
    while(start<=end){
        int mid=(start+end)/2;
        if(a[mid]==x){
            return mid;
        }
        else if(a[mid]>x){
            end=mid-1;
        }
        else{
            start=mid+1;
        }

    return -1;
    }
}
int exp_search(int a[],int n,int x){
    if(a[0]==x){
        return 0;
    }
    int i=1;
    while(i<n && a[i]<=x){
        i=i*2;
    }
    return bs(a,i/2,min(i,n-1),x);
}
int main(){
    int a[]={2,3,4,5,6,8,9,56,70}; // pre requisite: array should be sorted.
    int size=sizeof(a)/sizeof(int);
    int x=9;
    int ans= exp_search(a,size,x);
    cout<<"Element present at Index:"<<ans<<endl;
    return 0;
}