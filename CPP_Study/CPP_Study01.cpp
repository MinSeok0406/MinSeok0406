//#include <iostream>
//using namespace std;
//
//// Ctrl + K + C(Comment) Ctrl + K + U(UnComment) 단축키
//
//// 변수 선언 방법
//// [타입] [이름];
//// [타입] [이름] = [초기값];
//
//// 0이 아닌 초기화 값이 있으면 .data 영역
//int hp = 100;
//
//// 초기값이 0이거나, 초기값이 없는 변수라면 .bss 영역
//
//char a; // 1바이트 (-128~127)
//short b; // 2바이트 (-32768~32767)
//int c; // 4바이트 (-21.4억~21.4억)
//__int64 d; // 8바이트 (long long) (어마어마하게 크다)
//
//unsigned char ua; // 1바이트 (0~255)
//unsigned short ub; // 2바이트 (0~65536)
//unsigned int uc; // 4바이트 (0~42.9억)
//unsigned __int64 ud; // 8바이트 (long long) (어마어마하게 크다)
//
//// 귀찮은데 그냥 대충 4바이트로 가면 안될까?
//// -> 콘솔/모바일 게임 -> 메모리가 늘 부족합니다.
//// -> 온라인 게임 -> 4바이트 * 1만명
//
//int main()
//{
//    // 정수 오버플로우
//    b = 32767;
//    b += 1;
//    cout << b << endl;
//
//    // 정수 언더플로우
//    ub = 0;
//    ub -= 1;
//    cout << ub << endl;
//
//    //cout << "체력이 " << hp << " 남았습니다" << endl;
//}

