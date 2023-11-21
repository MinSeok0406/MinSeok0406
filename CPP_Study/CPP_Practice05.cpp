#include <iostream>
using namespace std;

// ����ΰ� �˰ڴµ�, �ʹ� ���� ���� ��� ����?
const int SCISSOR = 1;
const int ROCK = 2;
const int PAPER = 3;

// ���ڸ� ���� ���ϸ� ù ���� 0���� ����
// �� ���� ������ ���� �� + 1
enum ENUM_SRP
{
	ENUM_SCISSOR = 1,
	ENUM_ROCK,
	ENUM_PAPER
};

// #�� ������ -> ��ó�� ���ù�
// #include <iostream>�̶�� ������ ã�Ƽ� �ش� ������ �׳� ����!
// 1) ��ó�� 2) ������ 3) ��ũ
#define DEFINE_SCISSORS 1
#define DEFINE_TEST cout << "Hello World" << endl;

int main()
{
	srand(unsigned(time(NULL)));
	int input_me = 0, total = 0, win = 0;
	bool run = true;
	
	while (run)
	{
		int value = (rand() % 3) + 1;
		cout << "����(1) ����(2) ��(3) ����ּ���!" << endl;
		cout << "> ";
		
		if (total == 0)
		{
			cout << "���� �·� : ����" << endl;
		}
		else
		{
			int winPercentage = (win * 100) / total;
			cout << "���� �·� : " << winPercentage << endl;
		}
		
		cin >> input_me;

		if (input_me == SCISSOR && value == SCISSOR)
		{
			cout << "����(��) vs ����(��ǻ��) �����ϴ�!" << endl;
		}
		else if (input_me == SCISSOR && value == ROCK)
		{
			cout << "����(��) vs ����(��ǻ��) �����ϴ�!" << endl;
			total++;
		}
		else if (input_me == SCISSOR && value == PAPER)
		{
			cout << "����(��) vs ��(��ǻ��) �̰���ϴ�!" << endl;
			total++;
			win++;
		}
		else if (input_me == ROCK && value == SCISSOR)
		{
			cout << "����(��) vs ����(��ǻ��) �̰���ϴ�!" << endl;
			total++;
			win++;
		}
		else if (input_me == ROCK && value == ROCK)
		{
			cout << "����(��) vs ����(��ǻ��) �����ϴ�!" << endl;
		}
		else if (input_me == ROCK && value == PAPER)
		{
			cout << "����(��) vs ��(��ǻ��) �����ϴ�!" << endl;
			total++;
		}
		else if (input_me == PAPER && value == SCISSOR)
		{
			cout << "��(��) vs ����(��ǻ��) �����ϴ�!" << endl;
			total++;
		}
		else if (input_me == PAPER && value == ROCK)
		{
			cout << "��(��) vs ����(��ǻ��) �̰���ϴ�!" << endl;
			total++;
			win++;
		}
		else if (input_me == PAPER && value == PAPER)
		{
			cout << "��(��) vs ��(��ǻ��) �����ϴ�!" << endl;
		}
		else
		{
			run = false;
		}
		cout << endl;
	}
}