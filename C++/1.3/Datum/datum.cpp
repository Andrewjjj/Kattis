#include <iostream>
#include <ctime>
#include <string>
using namespace std;

int main()
{
    //a = day, b = month
    string days[7] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
                    //{"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"}
                    //  {“Sunday”, “Monday”, “Tuesday”, “Wednesday”, “Thursday”, “Friday”, “Saturday”};

    struct tm time;

    cin >> time.tm_mday >> time.tm_mon;

    time.tm_year = 2009;
    time.tm_mday;
    time.tm_mon--;

    mktime(&time);
    // cout << time.tm_year+1900 << " : " << time.tm_mon << " : " << time.tm_mday << endl;
    cout << days[time.tm_wday] << endl;

    return 0;
}
