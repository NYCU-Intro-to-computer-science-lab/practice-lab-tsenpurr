// p1: Calculator (Function Practice)
#include <iostream>
using namespace std;

// TODO: 實作 calculate 函數
// 參數: opcode (1-4), num1, num2
// 回傳: 根據 opcode 計算的結果
int calculate(int opcode, int num1, int num2) {
    // 在此實作你的程式碼
    if(opcode == 1) {
        return num1 + num2;
    }
    if(opcode == 2) {
        return num1 - num2;
    }
    if(opcode == 3) {
        return num1 * num2;
    }
    if(opcode == 4) {
        return num1 / num2;
    }
    return 0;
    return 0;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int opcode, num1, num2;

    // TODO: 讀取輸入並呼叫 calculate 函數
    // 提示: 使用 while(cin >> opcode >> num1 >> num2) 來讀取到 EOF
    while (cin >> opcode >> num1 >> num2) {
        int res = calculate(opcode, num1, num2);
        cout << res << endl;
    }
    return 0;
}
