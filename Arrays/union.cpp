#include <bits/stdc++.h>
#include <set>
using namespace std;
// THE BRUTE FOR APPROACH WHERE U USE SET AND INSERT THE ELEMENTS FROM ARR1 AND ARR2. 
// TIME COMPLEXITY- O(N1 LOGN) + O(N2 LOGN) , SPACE COMPLEXITY- O(N1+N2) , WHERE N1 AND N2 SIZE OF 2 ARRAYS. 
// set <int> st;
// void Union(int a[],int num[],int n,int size){
//     for(int i = 0; i < size; i++)
//     {
//         st.insert(a[i]);
//     }
//     for(int i = 0; i < size; i++)
//     {
//         st.insert(num[i]);
//     }
//     int arr[st.size()];
//     int i=0;
//     for (auto it:st)
//     {
//         arr[i++]=it;
//     }
//     for (int i = 0; i < st.size(); i++)
//     {
//         cout<<arr[i]<<" ";
//     }
// }
// THE OPTIMAL APPROACH - USING TWO POINTER APPROACH
void Union(vector <int> v1,vector <int> v2){
    int n1=v1.size();
    int n2=v2.size();
    int i=0,j=0;
    vector<int> Union_Arr;
    while (i<n1 && j<n2)
    {   
        if(v1[i]<=v2[j]){
            if(Union_Arr.size()==0 || Union_Arr.back()!=v1[i]){
                Union_Arr.push_back(v1[i]);
            }
            i++;
        }
        else 
        {
            if(Union_Arr.size()==0 || Union_Arr.back()!=v2[j]){
                Union_Arr.push_back(v2[j]);
            }
            j++;
        }     
    }
     while (j < n2) {
        if (Union_Arr.size() == 0 || Union_Arr.back() != v2[j])
        {
            Union_Arr.push_back(v2[j]);
        }
        j++;
    }
    while (i<n1)
    {
        if (Union_Arr.size() == 0 || Union_Arr.back() != v1[i]) 
        {
            Union_Arr.push_back(v1[i]);
        }
        i++;
    }
    for (int i = 0; i < Union_Arr.size(); i++)
    {
        cout<<Union_Arr[i]<<" ";
    }
}
int main(){
    vector<int> v1={1,1,2,5};
    vector<int> v2={1,2,3,4,5,6,7,8};
    Union(v1,v2);
    return 0;

}