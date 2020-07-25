#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
    vector<int>vResult;
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // declare a map to get the index and complement.
       // index will be unique;
       map<int,int>map_Complement;
        map<int,int>::iterator it;
        vector<int> vResult;
        for(int i = 0; i<nums.size();i++)
        {
            // if found in array push the index in vector and break;
            if(( it = map_Complement.find(nums[i])) != map_Complement.end())
            {
                vResult.push_back(it->second);
                vResult.push_back(i);
                map_Complement.insert({(target-nums[i]),i});
                break;
                
            }
            map_Complement.insert({(target-nums[i]),i});
        }
        return vResult;
        //Time Complexity - O(n)
        //Space Complexity - O(n)
    }

};
int main()
{
Solution obj;
vector<int> v = {2,7,8,4};
vector<int> R = obj.twoSum(v, 9);
cout<<R[0]<<","<<R[1];
}
