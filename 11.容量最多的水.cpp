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