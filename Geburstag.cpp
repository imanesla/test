#include <iostream>
#include <ctime>

using namespace std;

struct Date {
    int day, month, year;
};

int main() {
    Date birthdate;
    Date today;
    
    // Get current date
    time_t now = time(0);
    tm *ltm = localtime(&now);
    today.day = ltm->tm_mday;
    today.month = 1+ ltm->tm_mon;
    today.year = 1900 + ltm->tm_year;

    // Input birthdate
    cout << "Enter your birthdate (DD MM YYYY): ";
    cin >> birthdate.day >> birthdate.month >> birthdate.year;

    // Calculate age
    int age = today.year - birthdate.year;
    if (today.month < birthdate.month || (today.month == birthdate.month && today.day < birthdate.day)) {
        age--;
    }

    // Output age
    cout << "Your age is: " << age << endl;
  
    
    return 0;

}
