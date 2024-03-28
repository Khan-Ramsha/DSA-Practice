#include <iostream>
using namespace std;
int main()
{
int arr[]={0,1,1,2,0,0,1,2,0};  // 0 , 1 , 2 represents the color red,white,blue. 
// Aim is to seprate the colors. expected output- 0,0,0,0,1,1,1,2,2
int n = sizeof(arr)/sizeof(arr[0]);

return 0;
}