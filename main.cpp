#include <iostream>
#include <windows.h>
#include <clocale>
#include <ctime>


using namespace std;

int main()
{
    setlocale(LC_CTYPE, "rus");
    srand(time(NULL));

    int n=0, a=0, b=0;

    cout << "������� ���������� �������:\n";
    cin >> n;

    cout << "�������� ����� �����:\n";
    cin >> a;

    b=1+rand()%n;
    cout << "��� �����:" << b << endl;


    return 0;
}
