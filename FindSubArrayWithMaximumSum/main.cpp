#include <iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxSubArray_BruteForce(vector<int>& nums) {
        // This is the brute force implementation of the same
        int sum ,greatest;
        sum =0; greatest = 0;
       for(int i =0;i<nums.size();i++)
        {
            sum =nums[i];
            for(int j=i+1;j<nums.size();j++)
            {
                sum+= nums[j];
                if(greatest < sum)
                {
                    greatest = sum;
                }
                else
                    break;
            }

            if(greatest < sum)
            {
                greatest = sum;
            }
            
        }
        
        return greatest;
        //Time Complexity O(n^2) 
    }
    
    int maxSubArray_KadaneAlgo(vector<int>& nums)
    {
        int sum ,greatest;
        sum = greatest = nums[0];
        for(int i =1;i<nums.size();i++)
        {
            if (nums[i] < nums[i]+sum)
            {          
                sum += nums[i];     
            }
            else
            {
                sum = nums[i];
            }
            
                if (greatest < sum)
                {
                     greatest = sum;
                }
                
        }
        
        return greatest;
        // This of O(n) complexity
    }
        
    int maxSubArray_KadaneAlgo_MaxFunc(vector<int>& nums)
    {
        //Another O(n) solution
        int sum ,greatest;
        sum = greatest = nums[0];
        for(int i =1; i<nums.size();i++)
        {
              sum = max(nums[i],sum+nums[i]);
              greatest = max(greatest,sum);
         }
            return greatest;
    }

};

int main() {
  vector <int> vInput = {-2,1,-3,4,-1,2,1,-5,4};
  Solution obj;
  cout<<"Brute Force Result : "<< obj.maxSubArray_BruteForce(vInput)<<endl;
  cout<<"Kadane's Algorithm Result : "<<obj.maxSubArray_KadaneAlgo(vInput)<<endl;
  cout<<"Kadane's Algorithm with builtin max func Result : "<<obj.maxSubArray_KadaneAlgo_MaxFunc(vInput)<<endl;
}
