#include <iostream>
#include <string>

using namespace std;

 
bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}
 
string dayToDate(int dayNumber, int year) {
    int monthDays[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};  
    string monthNames[] = {"January", "February", "March", "April", "May", "June", 
                           "July", "August", "September", "October", "November", "December"};
    
    
    if (isLeapYear(year)) {
        monthDays[1] = 29;
    }

    int month = 0;
    int day = 0;
    
    for (int i = 0; i < 12; i++) {
        if (dayNumber <= monthDays[i]) {
            day = dayNumber;
            break;
        } else {
            dayNumber -= monthDays[i];
            month++;
        }
    }
    
    return to_string(day) + " " + monthNames[month] + " " + to_string(year);
}

int main() {
    int dayNumber, year;
    
     
    cout << "Enter the day number (1-365 or 1-366): ";
    cin >> dayNumber;
    cout << "Enter the year: ";
    cin >> year;
    
   
    if (dayNumber >= 1 && dayNumber <= (isLeapYear(year) ? 366 : 365)) {
        string dateResult = dayToDate(dayNumber, year);
        cout << "The date is: " << dateResult << endl;
    } else {
        cout << "Invalid day number! Please enter a number between 1 and 365 or 366" << endl;
    }

    return 0;
}