#include <iostream>
#include <functional>

typedef void(*CALLBACK_fUNC)(int);

using namespace std;

CALLBACK_fUNC cbf = NULL;

void RegisterCallback(CALLBACK_fUNC cb)
{
    cbf =cb;
}


void StartCallback() // 콜백 테스트를 위한 함수
{
	if(cbf == NULL)
	{
		cout << "Callback Function is not Registed" << endl;
		return;
	}

	cout << "Server calls CB." << endl;
	cbf(1); // 서버 측에 등록된 콜백함수 호출 / 인자로 1을 전달.
	
}

void UserCallback(int n)
{
	if(n == 1)
		cout << "True" << endl;
	else
		cout << "False" << endl;
}

int main()
{
	///////////// Client ///////////////	
	RegisterCallback(UserCallback); // Callback 등록


	///////////// Server ///////////////
	StartCallback(); 

	return 0;
}