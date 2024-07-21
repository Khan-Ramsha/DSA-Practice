// LEFT ROTATE AN ARRAY BY 1 PLACE
//  This is the optimal solution which have Time complexity of O(N) and utilizing extra space as O(1) but this algoritm uses give array itself so this algo uses an array SC=O(N) but no extra space needed.
#include <bits/stdc++.h>
using namespace std;
void leftrotate(int a[],int size){
    int temp=a[0];
    for(int i=1;i<size;i++){

         a[i-1]=a[i];
    }
    a[size-1]=temp;
    for (int i = 0; i < size; i++)
    {
        cout<<a[i]<<" ";
    }

}
int main(){

    int a[] = {1, 2, -3, 4, -5, 7};
    int n = sizeof(a) / sizeof(a[0]);
    leftrotate(a,n);
    return 0;
}
