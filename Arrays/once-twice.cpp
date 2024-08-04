#include <bits/stdc++.h>
using namespace std;

// BRUTE FORCE APROACH- IDEA IS TO TAKE EVERY ELEMENT FROM ARRAY AND COUNT THEIR OCCURANCES. THIS REQUIRE 2 NESTED LOOPS WHICH END UP TIME COMPLEXITY OF O(N^2)
// int once(int a[],int size){
//     for (int i = 0; i < size; i++)
//     {   
//         int number=a[i];
//         int count=0;
//         for (int j = 0; j < size; j++)
//         {
//             if(a[j]==number){
//                 count++;
//             }
//         }
//         if(count==1){
//             return a[i];
//         }
//     }
// }
// BETTER APPROACH- USING HASHING,TO KEEP TRACK OF THE ELEMENTS OCCURED, BUT AS IT REQUIRES EXTRA SPACE AND DISADVANTAGE IS WHEN SIZE OF ARRAY IS TOO LARGE LIKE 10 RAISE 9 OR SOMETHING , 
//THATS WHEN WE CAN USE MAP DATA STRUCTURE WITH BIGGER DATA TYPE(LONG, LONG) AS A KEY.
// int once(int a[],int size){
//     int m=a[0];
//     for (int i = 0; i < size; i++)
//     {
//         m=max(m,a[i]);
//     }
//     int hash[m + 1] = {0};
//     for (int i = 0; i < size; i++) { // the time complexity of this loop is O(n)
//         hash[a[i]]++;
//     }
//     for (int i = 0; i < size; i++)
//     {
//         if(hash[a[i]]==1){
//             return a[i];
//         }
//     }
// }

// OPTIMAL APPROACH- USING XOR : 1^1 =0 , 0^1=1
int once(int a[],int size){
    int xorr=0;
    for (int i = 0; i < size; i++)
    {
        xorr=xorr ^ a[i];
    }
    return xorr;
    
}
int main(){
    int a[]={1,1,2,2,3,3,4,4,5};
    int size=sizeof(a)/sizeof(a[0]);
    int result=once(a,size);
    cout<<result<<" ";
    return 0;
}