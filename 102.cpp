// 102.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//BGC BCG CGB CBG GBC GCB

#include <iostream>
using namespace std;

int main()
{
	int b[3] = { 0 };
	int g[3] = { 0 };
	int c[3] = { 0 };
	int bin[6] = { 0 };
	while (cin >> b[0] >> g[0] >> c[0] >> b[1] >> g[1] >> c[1] >> b[2] >> g[2] >> c[2])//BGC
	{
		bin[0] = g[0] + c[0] + b[1] + c[1] + b[2] + g[2];//BGC
		bin[1] = g[0] + c[0] + b[1] + g[1] + b[2] + c[2];//BCG
		bin[2] = b[0] + c[0] + g[1] + c[1] + b[2] + g[2];//GBC
		bin[3] = b[0] + c[0] + g[1] + b[1] + g[2] + c[2];//GCB
		bin[4] = b[0] + g[0] + g[1] + c[1] + b[2] + c[2];//CBG
		bin[5] = b[0] + g[0] + b[1] + c[1] + g[2] + c[2];//CGB

		int result = bin[0];
		for (int i = 1; i < 6; i++)
			result = min(result, bin[i]);

		if (result == bin[1])
			cout << "BCG ";
		else if (result == bin[0])
			cout << "BGC ";
		else if (result == bin[4])
			cout << "CBG ";
		else if (result == bin[5])
			cout << "CGB ";
		else if (result == bin[2])
			cout << "GBC ";
		else if (result == bin[3])
			cout << "GCB ";

		cout << result << endl;
	}
}

// 執行程式: Ctrl + F5 或 [偵錯] > [啟動但不偵錯] 功能表
// 偵錯程式: F5 或 [偵錯] > [啟動偵錯] 功能表

// 開始使用的提示:
//   1. 使用 [方案總管] 視窗，新增/管理檔案
//   2. 使用 [Team Explorer] 視窗，連線到原始檔控制
//   3. 使用 [輸出] 視窗，參閱組建輸出與其他訊息
//   4. 使用 [錯誤清單] 視窗，檢視錯誤
//   5. 前往 [專案] > [新增項目]，建立新的程式碼檔案，或是前往 [專案] > [新增現有項目]，將現有程式碼檔案新增至專案
//   6. 之後要再次開啟此專案時，請前往 [檔案] > [開啟] > [專案]，然後選取 .sln 檔案