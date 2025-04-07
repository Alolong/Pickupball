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
	//같으면 다시 반복
	
	


}


//섞은 후 차례대로 뽑을지,
//
// 현실에 있는 걸 똑같이 만든다는 생각을 가질 것
// 
// 
// 아니면 랜덤으로 뽑을지



