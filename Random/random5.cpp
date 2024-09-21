class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        if(nums.size()>1)
        {
        if(k<nums.size())
        {
        reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.begin()+(k));
        reverse(nums.begin()+(k),nums.end());
        }
        else if(k>nums.size() && k%2==0)
        {
            while(k>0)
            {
            nums.insert(nums.begin(),*(nums.end()-1));
            nums.erase(nums.begin()+nums.size());
            k--;
            break;
            }
        }
        else if(k>nums.size() && k%2!=0)
        {
            while(k>0)
            {
            nums.insert(nums.begin(),*(nums.end()-1));
            nums.erase(nums.begin()+nums.size());
            k--;
            }
        }
        else if(k>nums.size() && nums.size()==2 && k%2!=0)
        {
            while(k>0)
            {
            nums.insert(nums.begin(),*(nums.end()-1));
            nums.erase(nums.begin()+nums.size());
            k--;
            break;
            }            
        }
        else if(k==nums.size())
        {
            reverse(nums.begin(),nums.end());
            reverse(nums.begin(),nums.end());
        }
        }
    }
};