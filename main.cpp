#include <iostream>
#include <windows.h>
#include <ctime>


using namespace std;

int main()
{
    srand(time(NULL));

    int n=0, a=0, b=0, c=0;

    cout << "Vvedite kolichestvo biletov:\n";
    cin >> n;

   while(true) {
        system ("cls");
        cout << "Napishite lyboe chislo:\n";
        cin >> a;

    b=1+rand()%n;
    cout << "Vash bilet:" << b << endl;
    system ("pause");}

    return 0;
}
