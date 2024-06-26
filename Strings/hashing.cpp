// Character hashing
#include <iostream>
#include<map>
using namespace std;

int main(){
    // string s="aygadbda";
    // int hash[26]={0};
    // for (int i = 0; i < s.size(); i++)
    // {
    //     int val=s[i]-'a';
    //     hash[val]++;
    // }
    // char c='d';
    // cout<<  hash[c-'a']<< "";
    // string s="AygadbdA";
    // int hash[256]={0};
    // for (int i = 0; i < s.size(); i++)
    // {
    //     int val=s[i];
    //     hash[val]++;
    // }
    // char c='a';
    // cout<<  hash[c]<< "";
  
    int n=8;
    int arr[n]{2,3,1,2,3,5,2,6};
    
    map<int, int> mapp;

    for (int i = 0; i < n; i++)
    {
        mapp[arr[i]]++;
    }
    int num=2;
    cout<<mapp[num]<<endl;
    
    for(auto it:mapp){
        cout<<it.first<<" "<<it.second<<endl;
    }
    

}
