#include <iostream>
using namespace std;
int main()
{
    char opartor = NULL;//運算子
    int firNum = 0, secNum = 0; //運算元
    cout << "請輸入運算子:";
    cin >> opartor;
    cout << "請輸入第一位運算元";
    cin >> firNum;
    cout << "請輸入第二位運算元";
    cin >> secNum;
    if (firNum == 0 && secNum == 0) {
        cout << "請輸入運算元";
        return 0;
    }
    if (firNum == 0 ) {
        cout << secNum;
        return 0;
    }
    if (secNum == 0) {
        cout << firNum;
        return 0;
    }
    if (opartor == NULL) {
        cout << "請輸入運算子";
        return 0;
    }
    switch (opartor) {
        default:
            cout << "請輸入合法運算子";
            break;
        case '+':
            cout << firNum << "+" << secNum << "=" << firNum + secNum;
            break;
        case '-':
            cout << firNum << "-" << secNum << "=" << firNum - secNum;
            break;
        case '*':
            cout << firNum << "*" << secNum << "=" << firNum * secNum;
            break;
        case '/':
            cout << firNum << "/" << secNum << "=" << firNum / secNum;
            break;
    
    }
    return 0;
}
