#include <iostream>
using namespace std;

// 상수인건 알겠는데, 너무 따로 따로 노는 느낌?
const int SCISSOR = 1;
const int ROCK = 2;
const int PAPER = 3;

// 숫자를 지정 안하면 첫 값은 0부터 시작
// 그 다음 값들은 이전 값 + 1
enum ENUM_SRP
{
	ENUM_SCISSOR = 1,
	ENUM_ROCK,
	ENUM_PAPER
};

// #이 붙은거 -> 전처리 지시문
// #include <iostream>이라는 파일을 찾아서 해당 내용을 그냥 복붙!
// 1) 전처리 2) 컴파일 3) 링크
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
		cout << "가위(1) 바위(2) 보(3) 골라주세요!" << endl;
		cout << "> ";
		
		if (total == 0)
		{
			cout << "현재 승률 : 없음" << endl;
		}
		else
		{
			int winPercentage = (win * 100) / total;
			cout << "현재 승률 : " << winPercentage << endl;
		}
		
		cin >> input_me;

		if (input_me == SCISSOR && value == SCISSOR)
		{
			cout << "가위(님) vs 가위(컴퓨터) 비겼습니다!" << endl;
		}
		else if (input_me == SCISSOR && value == ROCK)
		{
			cout << "가위(님) vs 바위(컴퓨터) 졌습니다!" << endl;
			total++;
		}
		else if (input_me == SCISSOR && value == PAPER)
		{
			cout << "가위(님) vs 보(컴퓨터) 이겼습니다!" << endl;
			total++;
			win++;
		}
		else if (input_me == ROCK && value == SCISSOR)
		{
			cout << "바위(님) vs 가위(컴퓨터) 이겼습니다!" << endl;
			total++;
			win++;
		}
		else if (input_me == ROCK && value == ROCK)
		{
			cout << "바위(님) vs 바위(컴퓨터) 비겼습니다!" << endl;
		}
		else if (input_me == ROCK && value == PAPER)
		{
			cout << "바위(님) vs 보(컴퓨터) 졌습니다!" << endl;
			total++;
		}
		else if (input_me == PAPER && value == SCISSOR)
		{
			cout << "보(님) vs 가위(컴퓨터) 졌습니다!" << endl;
			total++;
		}
		else if (input_me == PAPER && value == ROCK)
		{
			cout << "보(님) vs 바위(컴퓨터) 이겼습니다!" << endl;
			total++;
			win++;
		}
		else if (input_me == PAPER && value == PAPER)
		{
			cout << "보(님) vs 보(컴퓨터) 비겼습니다!" << endl;
		}
		else
		{
			run = false;
		}
		cout << endl;
	}
}