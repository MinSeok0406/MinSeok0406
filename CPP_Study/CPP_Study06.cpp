//#include <iostream>
//using namespace std;
//
//// ������ ���� : �б⹮
//// �����͸� �޸𸮿� �Ҵ��ϰ� �����ϰ� ����� ���� �˾ƺ�
//// ������ �����͸� �̿��ؼ� �����ΰ��� �ϰ� �ʹٸ�?
//
//int main()
//{
//#pragma region if��
//	int hp = 100;	// ���� hp
//	int damage = 90;	// �÷��̾� ������
//
//	hp -= damage;	// �ǰ� ����
//	bool isDead = (hp <= 0);	// óġ ����
//
//	// ���Ͱ� �׾����� ����ġ �߰�
//	// ��������� CMP JMP
//
//	if (isDead)
//	{
//		cout << "���͸� óġ�߽��ϴ�" << endl;
//	}
//	else if (hp <= 20)
//	{
//		cout << "���Ͱ� �������� �ֽ��ϴ�" << endl;
//	}
//	else 
//	{
//		cout << "���͸� �ݰ��߽��ϴ�" << endl;
//	}
//	
//
//#pragma endregion
//
//#pragma region switch��
//	const int ROCK = 0;
//	const int PAPER = 1;
//	const int SCISSORS = 2;
//	
//	int input = ROCK;
//
//	// ���� �迭�� ���� �� �ִ�.
//	switch (input)
//	{
//		case ROCK:
//			cout << "������ �½��ϴ�" << endl;
//			break;
//		case PAPER:
//			cout << "���� �½��ϴ�" << endl;
//			break;
//		case SCISSORS:
//			cout << "������ �½��ϴ�" << endl;
//			break;
//		default:
//			cout << "����� �����Դϴ�." << endl;
//			break;
//	}
//#pragma endregion
//}