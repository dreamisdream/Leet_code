
/*
输入: a = "11", b = "1"
输出: "100"
*/
string addBinary(string a, string b) {
        if(a.size() < b.size()) 
            return addBinary(b,a);
        string ans=a;
        int num =0;
        for(int ai =a.size()-1,bi=b.size()-1;ai>=0 || bi>=0;ai--,bi-- )
        {
            num+=a[ai] - '0' + (bi<0 ? 0:(b[bi]-'0'));
            ans[ai] = (num%2) + '0';
            num/=2;
        }
        if(num ==1)
            ans = '1' +ans;
        return ans;
    }