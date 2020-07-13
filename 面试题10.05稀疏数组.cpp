稀疏数组搜索。有个排好序的字符串数组，其中散布着一些空字符串，编写一种方法，找出给定字符串的位置。

示例1:

 输入: words = ["at", "", "", "", "ball", "", "", "car", "", "","dad", "", ""], s = "ta"
 输出：-1
 说明: 不存在返回-1。
示例2:

 输入：words = ["at", "", "", "", "ball", "", "", "car", "", "","dad", "", ""], s = "ball"
 输出：4
提示:

words的长度在[1, 1000000]之间
 // 迭代器遍历
int findString(vector<string>& words, string s) {
	for (auto it = words.begin(); it != words.end(); ++it) {
		if (*it == s)
			return it - words.begin();
	}
	return -1;
}
// 下标遍历
int findString(vector<string>& words, string s) {
	for (int i = 0; i < words.size() / 2 + 1; ++i) {
		if (words[i] == s)
			return i;
		if (words[words.size() - i-1] == s)
			return words.size() - i-1;
	}
	return -1;
}