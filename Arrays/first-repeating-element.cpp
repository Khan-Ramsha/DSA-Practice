#include <iostream>
using namespace std;
int firstRepeated(int a[], int n){
    for(int i=0;i<n;i++){
        bool isRepeated=false;
        for(int j=i+1;j<n;j++){
            if(a[i]==a[j]){
                isRepeated=true;
                return i+1;
            }
        }
    }
    return -1;
}
int main(){
    int a[]={1,3,3,4};
    int n=sizeof(a)/sizeof(a[0]);
    int value=firstRepeated(a,n); 
    cout<<value<<" ";
}
//but the above code has time complexity of O(n^2)
//Optimized solution


