#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

bool isPossibleSol(vector <long long int> tree, long long int m, long long int mid){
        long long int woodCollected = 0;
        for(long long int i=0;i<tree.size();i++){
            if(tree[i]>mid){
                woodCollected+=tree[i]-mid;
            }
            
        }
    return woodCollected >=m;
    
}

long long int maxSawBladeHeight(vector <long long int> tree, long long int m){
    long long int start=0,end,ans=-1;
    end = *max_element(tree.begin(),tree.end());
    while(start<=end){
        long long int mid = start + (end-start) / 2;
        if(isPossibleSol(tree,m,mid)){
            ans=mid;
            start=mid+1;

        }
        else{
            end=mid-1;
        }
    }
    return ans;


}
int main(){

    long long int n,m;
    cin>>n>>m;
    vector<long long int> tree;
    while(n--){
        long long int height;
        cin >> height;
        tree.push_back(height);
    }
cout << maxSawBladeHeight(tree,m) << endl;



    return 0;
}