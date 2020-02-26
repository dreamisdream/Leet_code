

/*
	输入：A = [1,2,0,0], K = 34
	输出：[1,2,3,4]
	解释：1200 + 34 = 1234
*/

vector<int> addToArrayForm(vector<int>& A, int K) {
        vector<int> result;
        for (int i = A.size() - 1; i >= 0; i --) {
            int num = A[i];
            K += num; //得到末位和
            int remind = K % 10;
            result.insert(result.begin(), remind);
            K /= 10;
        }
        if (K) {
            while (K > 9) { //如果K 比较大，那么此时还需要把K循环放进去
                int remind = K % 10;
                result.insert(result.begin(), remind);
                K /= 10;
            }
            result.insert(result.begin(), K);
        }
        return result;
    }