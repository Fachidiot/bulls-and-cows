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

	cout << "�ݾ߱����ӡ�" << endl;
	while (end == 0)
	{
		cout << "�Է��� ����3���� 1 ~ 9�� �ߺ����� �Է����ֽÿ� : ";
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


		cout << "���¼��� :\t";
		for (int i = 0; i < 3; ++i)
		{
			cout << resaultnum[i] << "\t";
		}
		cout << endl;
		cout << "����Ǽ� :\t";
		for (int i = 0; i < 3; ++i)
		{
			cout << mynum[i] << "\t";
		}
		cout << endl;
		

		switch (locationsame)
		{
		case 3:
			cout << "Ȩ���Դϴ�~! �Ǹ��ؿ�~!" << endl;
			end = 1;
			break;
		case 2:
			switch (same)
			{
			case 1:
				cout << "2��Ÿ�Դϴ�! ����ؿ�!" << endl;
				cout << "�ѹ� �� �غ��ðڽ��ϱ�?(yes : 0, no : 1) : ";
				cin >> end;
				break;
			default:
				cout << "��Ÿ�Դϴ�! ���߾��!" << endl;
				cout << "�ѹ� �� �غ��ðڽ��ϱ�?(yes : 0, no : 1) : ";
				cin >> end;
				break;
			}
			break;
		case 1:
			switch (same)
			{
			case 2:
				cout << "��Ÿ�Դϴ�! ���߾��!" << endl;
				cout << "�ѹ� �� �غ��ðڽ��ϱ�?(yes : 0, no : 1) : ";
				cin >> end;
				break;
			case 1:
				cout << "��Ʈ����ũ!" << endl;
				cout << "�ѹ� �� �غ��ðڽ��ϱ�?(yes : 0, no : 1) : ";
				cin >> end;
				break;
			default:
				cout << "��Ʈ����ũ!" << endl;
				cout << "�ѹ� �� �غ��ðڽ��ϱ�?(yes : 0, no : 1) : ";
				cin >> end;
				break;
			}
			break;
		default:
			switch (same)
			{
			case 3:
				cout << "���Դϴ�! �ƽ�����!" << endl;
				cout << "�ѹ� �� �غ��ðڽ��ϱ�?(yes : 0, no : 1) : ";
				cin >> end;
				break;
			case 2:
				cout << "��Ʈ����ũ!" << endl;
				cout << "�ѹ� �� �غ��ðڽ��ϱ�?(yes : 0, no : 1) : ";
				cin >> end;
				break;
			case 1:
				cout << "��Ʈ����ũ!" << endl;
				cout << "�ѹ� �� �غ��ðڽ��ϱ�?(yes : 0, no : 1) : ";
				cin >> end;
				break;
			default:
				cout << "�ƿ��Դϴ�!" << endl;
				cout << "�ѹ� �� �غ��ðڽ��ϱ�?(yes : 0, no : 1) : ";
				cin >> end;
				break;
			}
			break;

		}

	}

	return 0;

}
