#include<iostream>
using namespace std;

//��������Ԫ�ؽ�������֮ð������
//1. �Ƚ����ڵ�Ԫ�ء������һ���ȵڶ����󣬾ͽ�������������
//2. ��ÿһ������Ԫ����ͬ���Ĺ�����ִ����Ϻ��ҵ���һ�����ֵ��
//3. �ظ����ϵĲ��裬ÿ�αȽϴ��� - 1��ֱ������Ҫ�Ƚϣ������ڱ�ֵ


int main() {

	int arr[9] = { 4,2,8,0,5,7,1,3,9 };
	int len = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < len - 1; i++)
	{
		int flag = 0;
		for (int j = 0; j < len - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
				flag = 1;
			}
		}
		if (flag == 0)
		{
			break;
		}
	}

	for (int i = 0; i < 9; i++)
	{
		cout << arr[i] << endl;
	}

	system("pause");

	return 0;
}