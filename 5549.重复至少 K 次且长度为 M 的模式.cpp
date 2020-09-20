#include <vector>
#include <iostream>

using namespace std;

bool containsPattern(vector<int>& arr, int m, int k) {
        int count=1;
        
        for(int i=m;i<arr.size();++m){
            for(int j=i+1;j<i+m;++j){
                if(arr[j] != arr[j-i-1])
                    return false;
                else
                    count++;
            }
            if(count>=k)
                return true;
        }
        return false;
}

int main(void){
    vector<int> arr{1,2,1,2,1,1,1,3};
    cout<<containsPattern(arr,1,3)<<endl;
    return 0;
}