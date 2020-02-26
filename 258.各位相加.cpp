class Solution {
public:
    int addDigits(int num) {
        while (num > 9)
        {
            int sum = 0;
            while (num)
            {
                int tmp = num % 10;
                sum += tmp;
                num /= 10;
            }
            num = sum;
        }
        return num;
    }
};

int addDigits(int num) {
	if(num>9)
	{
		num=num%9;
		if(num==0)
			return 9;
	}
	return num;
}

