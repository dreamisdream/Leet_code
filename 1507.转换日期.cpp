给你一个字符串 date ，它的格式为 Day Month Year ，其中：

Day 是集合 {"1st", "2nd", "3rd", "4th", ..., "30th", "31st"} 中的一个元素。
Month 是集合 {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"} 中的一个元素。
Year 的范围在 ​[1900, 2100] 之间。
请你将字符串转变为 YYYY-MM-DD 的格式，其中：

YYYY 表示 4 位的年份。
MM 表示 2 位的月份。
DD 表示 2 位的天数。
 

示例 1：

输入：date = "20th Oct 2052"
输出："2052-10-20"
示例 2：

输入：date = "6th Jun 1933"
输出："1933-06-06"
示例 3：

输入：date = "26th May 1960"
输出："1960-05-26"


string reformatDate(string date) {
    vector<string> month{"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec" };
	
	vector<string> trans{"","",""};
	int i = 0;

	for (auto j : date) {
		if (isalnum(j))
			trans[i].push_back(j);
		else
			i++;
	}
	string m, d;
	for (int i = 0; i < trans[0].size();++i)
	{
		if(trans[0][i]>= '0' && trans[0][i]<='9')
			d.push_back(trans[0][i]);
		else
			break;
	}
	for (int i = 0; i < month.size(); ++i) {
		if (month[i] == trans[1])
		{
			m = to_string(i+1);
            if(i+1<10)
                m="0"+m;
			break;
		}
	}
    if (d.size() < 2)
        d = "0" + d;
	return trans[2] + "-" + m + "-" + d;