//실습 0 클래스 구조 만들기
#include <iostream>
using namespace std;


/* 하는 일은 
	1. 신규계좌 개설
	2. 계좌 확인
	3. 계좌 이체
	4. 고객 등록/삭제
	5. 지점 추가/삭제
	6. 고객 정보 확인
	7. 지점 정보 확인

	class 두개(?)
	1. 고객정보 - 고객ID / 이름 / 계좌번호 / 전화 번호 / 관리 지점 ID
	2. 은행 정보 - 지점ID / 주소 / 고객 ID / 고객 수 / 활성 계좌 수

*/

class Custom_Info
{
	string Custom_ID;		// 고객 ID
	string Custom_Name;		// 이름
	string Account_Num;		// 계좌번호
	string Phone_Number;		// 전화번호
	string Manage_ID;		// 관리지점 ID

public:
	void Show_Info();	// 계좌 확인
	void Money_Depsoit();	// 계좌 이체
	void Custom_Ad_Del();	// 고객 등록/삭제
	void Custom_Check();	// 고객 정보 확인
	
};

class Bank_Info
{
	string Bank_ID;			// 지점 ID
	string Bank_AD;			// 주소
	string Custom_ID;		// 고객 ID
	string Custom_Num;		// 고객 수
	string Account_Green;		// 활성 계좌 수
	
public:
	void New_Account();		// 신규계좌 개설
	void Bank_Ad_Del();		// 지점 추가/삭제
	void Bank_Check();		// 지점 정보 확인
};


