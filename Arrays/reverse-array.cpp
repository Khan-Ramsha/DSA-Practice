#include <iostream>
using namespace std;
void reversearray(int a[],int size){
    int arr[size];
    for(int i=0;i<size;i++){

         arr[i] = a[size-i-1];
    }
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }

}
int main(){

    int a[] = {1, 2, -3, 4, -5, 7};
    int n = sizeof(a) / sizeof(a[0]);
    reversearray(a,n);
    return 0;
}

// copying in reverse order