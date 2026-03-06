#include <iostream>
using namespace std;

class Time
{
private:
    int hour, minute, second;

public:
    void getTime()
    {
        cout << "Enter Hours: ";
        cin >> hour;

        cout << "Enter Minutes: ";
        cin >> minute;

        cout << "Enter Seconds: ";
        cin >> second;
    }

    void addHours(int h)
    {
        hour += h;
    }

    void addMinutes(int m)
    {
        minute += m;
        hour += minute / 60;
        minute = minute % 60;
    }

    void addSeconds(int s)
    {
        second += s;
        minute += second / 60;
        second = second % 60;
        hour += minute / 60;
        minute = minute % 60;
    }

    void display()
    {
        cout << "Modified Time: ";
        cout << hour << ":" << minute << ":" << second << endl;
    }
};

int main()
{
    Time t;
    int choice, value;

    t.getTime();

    cout << "\n1. Add Hours\n";
    cout << "2. Add Minutes\n";
    cout << "3. Add Seconds\n";
    cout << "Enter choice: ";
    cin >> choice;

    cout << "Enter value to add: ";
    cin >> value;

    switch(choice)
    {
        case 1:
            t.addHours(value);
            break;

        case 2:
            t.addMinutes(value);
            break;

        case 3:
            t.addSeconds(value);
            break;

        default:
            cout << "Invalid choice\n";
    }

    t.display();

    return 0;
}