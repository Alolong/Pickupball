#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void main()
{
int i = 53;
int nRandNum = 0;
bool bSame = false;
nRandNum = rand() % 52 + 1;
int nNum[53] = { 0 };
nNum[i] = nRandNum;

for (int j = 1; j < i; j++)

	
	{
		if (j == nRandNum)
		{
			bSame = true;
			break;
				
		}
		else (bSame)
		{
			i--;
			continue;
		}
		cout << "You Picked up the Ball number" << j << endl;
	}
	//������ �ٽ� �ݺ�
	
	


}


//���� �� ���ʴ�� ������,
//
// ���ǿ� �ִ� �� �Ȱ��� ����ٴ� ������ ���� ��
// 
// 
// �ƴϸ� �������� ������



