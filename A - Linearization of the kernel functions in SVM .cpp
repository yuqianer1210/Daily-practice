#include<iostream>
#include<cstdio>
using namespace std;
/*ǰ����ϵ���жϣ���  ϵ��Ϊ0�����������鶼�������
                  ��  ϵ��Ϊ������Ϊ+1����� + ��������� +%d ;
                      ϵ��Ϊ������Ϊ-1����� - ��������� -%d ;
			�������⣺    Ϊ������Ϊ+1������� ���������  %d ;
			              Ϊ������Ϊ-1����� - ���������  %d ;
  ���һ������жϣ�    Ϊ��  �����  +%d ,   Ϊ��,���  %d ;

        
*/

int main()
{
	int t, a[15];
	char s[] = { 'p','q','r','u','v','w','x','y','z' };//�������飬֮�����
	cin >> t;
	while (t--)  //��������
	{
		for (int i = 0; i < 10; i++)
			cin>>a[i];//��10��ϵ����������a[]
		int blag = 0;
		for (int i = 0; i < 9; i++)//ǰ����һ����
		{
			if (a[i])      //��0 
			{
				if (blag)      //�ж�   
				{
					if (a[i] > 0)  //���ǵ�һ����
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
				else     // �ǵ�һ���� 
				{
					if (a[i] != 1)   //������Ϊ1  �������1
					{
						if (a[i] == -1)    //���Ϊ-1 ����'-' 
							cout<<"-";
						else
							cout<<a[i];
					}
				}
				cout<<s[i];
				blag = 1;
			}
		}
		if (a[9])   //�ж��Ƿ�Ϊ0
		{
			if (blag == 0)  //�ж�   ������
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