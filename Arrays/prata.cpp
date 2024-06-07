#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

bool isPossibleSol(vector<int> ranks, int prata, int mid)
{
    int currP = 0; // the cooked prata is 0
    for (int i = 0; i < ranks.size(); i++)
    {
        int R = ranks[i]; // taking each ranks in vec ranks
        int timeTaken = 0;
        int j = 1; //  use of j ==> j * R
        while (true)
        {
            if (timeTaken + j * R <= mid)
            {
                ++currP;
                timeTaken += j * R;
                ++j;
            }
            else
            {
                break;
            }
        }
        if (currP >= prata)
        {
            return true;
        }
    }
    return false;
}

int minTimeRequired(vector<int> ranks, int prata)
{
    int start = 0;
    int ans = -1;
    int high = *max_element(ranks.begin(), ranks.end());
    int end = high * (prata * (prata + 1) / 2); // finding the  time req by the 4th cook, i.e the max time required to cook.
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (isPossibleSol(ranks, prata, mid))
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return ans;
}

int main()
{
    int testCases;
    cin >> testCases;
    while (testCases--)
    {
        int cook, prata;
        cin >> prata >> cook;
        vector<int> ranks;
        while (cook--)
        {
            int rank;
            cin >> rank;
            ranks.push_back(rank);
        }
        cout << minTimeRequired(ranks, prata) << endl; // checks the MIN time required to cook the parathas
    }
    return 0;
}