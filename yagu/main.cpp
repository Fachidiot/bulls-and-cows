#include <iostream>
#include <time.h>

using namespace std;

int main()
{
	int randnum[9] = {};
	int mynum[3] = {};
	int resaultnum[3] = {};
	int end = 0;

	srand((unsigned int)time(0));
	rand();

	for (int i = 1; i <= 9; ++i)
	{
		randnum[i - 1] = i;
	}

	cout << "◎야구게임◎" << endl;
	while (end == 0)
	{
		cout << "입력할 숫자3개를 1 ~ 9중 중복없이 입력해주시오 : ";
		for (int i = 0; i < 3; ++i)
		{
			cin >> mynum[i];
		}
		for (int i = 0; i < 50; ++i)
		{
			int temp, indx1, indx2;
			indx1 = rand() % 9;
			indx2 = rand() % 9;

			temp = randnum[indx1];
			randnum[indx1] = randnum[indx2];
			randnum[indx2] = temp;
		}
		for (int i = 0; i < 3; ++i)
		{
			resaultnum[i] = randnum[i];
		}
		int same = 0;
		int locationsame = 0;


		for (int i = 0; i < 3; ++i)
		{
			for (int j = 0; j < 3; ++j)
			{
				if (mynum[i] == randnum[j])
				{
					if (mynum[i] == randnum[i])
					{
						locationsame++;
						break;
					}
					else
					{
						same++;
						break;
					}
				}
			}
		}


		for (int i = 0; i < 2; ++i)
		{
			for (int j = i + 1; j < 3; ++j)
			{
				if (resaultnum[i] > resaultnum[j])
				{
					int temp;

					temp = resaultnum[i];
					resaultnum[i] = resaultnum[j];
					resaultnum[j] = temp;
				}
			}
		}
		for (int i = 0; i < 2; ++i)
		{
			for (int j = i + 1; j < 3; ++j)
			{
				if (mynum[i] > mynum[j])
				{
					int temp;

					temp = mynum[i];
					mynum[i] = mynum[j];
					mynum[j] = temp;
				}
			}
		}


		cout << "나온수는 :\t";
		for (int i = 0; i < 3; ++i)
		{
			cout << resaultnum[i] << "\t";
		}
		cout << endl;
		cout << "당신의수 :\t";
		for (int i = 0; i < 3; ++i)
		{
			cout << mynum[i] << "\t";
		}
		cout << endl;
		

		switch (locationsame)
		{
		case 3:
			cout << "홈런입니다~! 훌륭해요~!" << endl;
			end = 1;
			break;
		case 2:
			switch (same)
			{
			case 1:
				cout << "2루타입니다! 대단해요!" << endl;
				cout << "한번 더 해보시겠습니까?(yes : 0, no : 1) : ";
				cin >> end;
				break;
			default:
				cout << "안타입니다! 잘했어요!" << endl;
				cout << "한번 더 해보시겠습니까?(yes : 0, no : 1) : ";
				cin >> end;
				break;
			}
			break;
		case 1:
			switch (same)
			{
			case 2:
				cout << "안타입니다! 잘했어요!" << endl;
				cout << "한번 더 해보시겠습니까?(yes : 0, no : 1) : ";
				cin >> end;
				break;
			case 1:
				cout << "스트라이크!" << endl;
				cout << "한번 더 해보시겠습니까?(yes : 0, no : 1) : ";
				cin >> end;
				break;
			default:
				cout << "스트라이크!" << endl;
				cout << "한번 더 해보시겠습니까?(yes : 0, no : 1) : ";
				cin >> end;
				break;
			}
			break;
		default:
			switch (same)
			{
			case 3:
				cout << "볼입니다! 아쉬워요!" << endl;
				cout << "한번 더 해보시겠습니까?(yes : 0, no : 1) : ";
				cin >> end;
				break;
			case 2:
				cout << "스트라이크!" << endl;
				cout << "한번 더 해보시겠습니까?(yes : 0, no : 1) : ";
				cin >> end;
				break;
			case 1:
				cout << "스트라이크!" << endl;
				cout << "한번 더 해보시겠습니까?(yes : 0, no : 1) : ";
				cin >> end;
				break;
			default:
				cout << "아웃입니다!" << endl;
				cout << "한번 더 해보시겠습니까?(yes : 0, no : 1) : ";
				cin >> end;
				break;
			}
			break;

		}

	}

	return 0;

}
