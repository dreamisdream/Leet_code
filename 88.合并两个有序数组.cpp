#include "common.h"
using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    int last = m+n-1;
    while(n){
        if(!m){
            nums1[last--] = nums2[--n];
        }else if(nums1[m-1] >nums2[n-1]){
            nums1[last--] = nums1[--m];
        }else{
            nums1[last--] = nums2[--n];
        } 
    }
}
