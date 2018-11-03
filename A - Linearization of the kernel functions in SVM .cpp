#include<iostream>
#include<cstdio>
using namespace std;
/*前九项系数判断：①  系数为0，则两个数组都不输出；
                  ②  系数为正——为+1，输出 + ，否则输出 +%d ;
                      系数为负——为-1，输出 - ，否则输出 -%d ;
			首项特殊：    为正——为+1，不输出 ，否则输出  %d ;
			              为负——为-1，输出 - ，否则输出  %d ;
  最后一项常数项判断：    为正  ，输出  +%d ,   为负,输出  %d ;

        
*/

int main()
{
	int t, a[15];
	char s[] = { 'p','q','r','u','v','w','x','y','z' };//读入数组，之后分配
	cin >> t;
	while (t--)  //行数控制
	{
		for (int i = 0; i < 10; i++)
			cin>>a[i];//把10个系数读入数组a[]
		int blag = 0;
		for (int i = 0; i < 9; i++)//前九项一起考虑
		{
			if (a[i])      //非0 
			{
				if (blag)      //判断   
				{
					if (a[i] > 0)  //不是第一个数
					{
						if (a[i] == 1)
							cout << "+" ;
						else
							cout<<"+"<<a[i];
					}
					else
					{
						if (a[i] == -1)
							cout<<"-";
						else
							cout<<a[i];
					}
				}
				else     // 是第一个数 
				{
					if (a[i] != 1)   //序号如果为1  则不用输出1
					{
						if (a[i] == -1)    //序号为-1 保留'-' 
							cout<<"-";
						else
							cout<<a[i];
					}
				}
				cout<<s[i];
				blag = 1;
			}
		}
		if (a[9])   //判断是否为0
		{
			if (blag == 0)  //判断   是首项
				cout << a[9] << endl;
			else if (blag&&a[9] > 0)
				cout << "+" << a[9] << endl;
			else
				cout << a[9] << endl;
		}
		else
			cout << endl;
	}
	return 0;
}