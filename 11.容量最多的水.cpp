#include <vector>
int maxArea(vector<int>& height)
{
    int size = height.size();
    int left=0，right=size-1;
    int ans=0;
    while(left<right)
    {
        ans=max(ans,(right-left)*min(height[left],height[right]));
        if(height[left]>height[right])
            --right;
        else
            ++left;
    }
}

class Solution {
public:
    int maxArea(vector<int>& height) {
        if(height.size() <= 1) return -1;
        int i = 0, j = height.size() - 1, res = 0;
        while(i < j){
            int h = min(height[i], height[j]);
            res = max(res, h * (j - i));
            if(height[i] < height[j]) ++i;
            else --j;
        }
        return res;
    }
};s