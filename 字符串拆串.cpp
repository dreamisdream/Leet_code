#include "common.h"

using namespace std;

void splitString(string &src,vector<string>& ret,const string &c){
    string::size_type pos1=0;
    string::size_type pos2 =src.find(c);
    while(string::npos != pos2){
        ret.push_back(src.substr(pos1,pos2-pos1));
        pos1 = pos2+c.size();
        pos2=src.find(c,pos1);
    }
    if(string::npos != pos1)
        ret.push_back(src.substr(pos1));
}