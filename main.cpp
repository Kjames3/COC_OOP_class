#include <iostream>
#include <sstream>
using namespace std;

// Function to convert month/day/year to a single integer
int convertDays(int month, int day, int year) {
    // Use the given formula
    return year * 10000 + month * 100 + day;
}

int main() {
    // Example date format, test is convertDays works correctly
    // int month = 12;
    // int day = 6;
    // int year = 1988;

    // Get user input for date
    string dateInput;
    cout << "Enter a date in the format MM/DD/YYYY (include '/' characters): ";
    getline(cin, dateInput);

    // Split the input string into month, day, and year
    int month, day, year;
    istringstream obj(dateInput);
    char character;
    obj >> month >> character >> day >> character >> year;

    // Convert the date to a single integer
    int convertedDate = convertDays(month, day, year);
    cout << "The converted date is: " << convertedDate << endl;

    return 0;
}
