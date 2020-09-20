#include <vector>

bool threeConsecutiveOdds(std::vector<int>& arr) {
    int ret = 3;
    bool stauts = false;
    for(int i:arr){
        if(i&0x01){
            stauts = true;
            ret--;
            if(!ret)
                break;
        }else{
            stauts = true;
            ret = 3;
        }
    }
    return !ret;
}