//喝汽水问题，一瓶汽水一块钱，两个瓶子换一个汽水，问能喝几瓶
int main()
{
	int m = 0;//有多少钱
	int n = 0;//统计一共有几瓶汽水
	printf("请问你有多少钱？");
	scanf("%d", &m);
	//int e = m;//整理有几个瓶子
	//int t = m;//能换几瓶汽水
	//while (e >= 2 )
	//{
	//	t += e / 2;
	//	e = e / 2 + e % 2;
	//}
	//n += t;
	//优化版：其实规律就是2*n-1，但是m==0时不对，n==-1
	n = 2 * m - 1;
	if (m == 0)
	{
		n = 0;
	}
	printf("一共可以换%d瓶汽水", n);
	return 0;
}
