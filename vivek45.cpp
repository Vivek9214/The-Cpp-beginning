#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char temp[5], humidity[6];
    int result1, result2, result3, result4;
    int result5, result6, result7, result8;
    cout << "Enter the Temp: ";
    cin >> temp;
    cout << "Enter the humdity: ";
    cin >> humidity;
    result1 = strcmp(temp, "warm");
    result2 = strcmp(humidity, "dry");
    if (result1 == 0 && result2 == 0)
        cout << "Play basketball";

    result3 = strcmp(temp, "warm");
    result4 = strcmp(humidity, "warm");
    if (result3 == 0 && result4 == 0)
        cout << "Play Tennis";

    result5 = strcmp(temp, "cold");
    result6 = strcmp(humidity, "humid");
    if (result5 == 0 && result6 == 0)
        cout << "Play Cricket";

    result7 = strcmp(temp, "cold");
    result8 = strcmp(temp, "humid");
    if (result7 == 0 && result8 == 0)
        cout << "Swim";

    return 0;
}