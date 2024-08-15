#include <iostream>
using namespace std;

class Date {
private:
    int day, month, year;
public:
    Date(int d = 1, int m = 1, int y = 1999) : day(d), month(m), year(y) {}

    void displayDate() const {
        cout << day << "-" << month << "-" << year << endl;
    }

    void addDays(int days) {
        day += days;
        if (day > 31) {
            month += day / 31;
            day %= 31;
        }
        if (month > 12) {
            year += month / 12;
            month %= 12;
        }
    }

    static int getDaysInMonth(int month) {
        if (month == 2) return 28;
        else if (month == 4 || month == 6 || month == 9 || month == 11) return 30;
        else return 31;
    }

    void addDaysAccurate(int days) {
        while (days > 0) {
            int daysInMonth = getDaysInMonth(month);
            if (day + days <= daysInMonth) {
                day += days;
                days = 0;
            } else {
                days -= daysInMonth - day + 1;
                day = 1;
                month++;
                if (month > 12) {
                    month = 1;
                    year++;
                }
            }
        }
    }
};

inline void calculateDueDate(Date issueDate, int days) {
    Date dueDate = issueDate;
    dueDate.addDaysAccurate(days);
    cout << "Due Date: ";
    dueDate.displayDate();
}

int main() {
    int day, month, year, days;
    cout << "Enter issue date (dd-mm-yyyy): ";
    cin >> day >> month >> year;
    cout << "Enter number of days: ";
    cin >> days;
    Date issueDate(day, month, year);
    calculateDueDate(issueDate, days);
    return 0;
}
