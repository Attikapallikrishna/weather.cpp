/*
Weather report

Name : ATTIKAPALLI KRISHNA PRIYA
College name : VIVEKANANDHA COLLEGE OF ENGINEERING FOR WOMEN

Location 
1. Today 
2. Yesterday
3. Tomorrow

cloudy
dry
rain 
temperature 
rain possibility
humidity 

functions
class and objects 
string
switch case

*/

#include<iostream>
#include<string>

using namespace std;

class WeatherReport {
    private:
        string location;
        string condition;
        float temperature;
        float rainPossibility;
        float humidity;

    public:
        WeatherReport(string loc, string cond, float temp, float rain, float hum) {
            location = loc;
            condition = cond;
            temperature = temp;
            rainPossibility = rain;
            humidity = hum;
        }

        void displayReport() {
            cout << "Location: " << location << endl;
            cout << "Condition: " << condition << endl;
            cout << "Temperature: " << temperature << " °C" << endl;
            cout << "Rain Possibility: " << rainPossibility << "%" << endl;
            cout << "Humidity: " << humidity << "%" << endl;
        }
};

int main() {
    string location;
    int choice;

    cout << "Enter your location: ";
    cin >> location;

    WeatherReport today(location, "Cloudy", 25.0, 30.0, 75.0);
    WeatherReport yesterday(location, "Rain", 22.5, 90.0, 85.0);
    WeatherReport tomorrow(location, "Dry", 28.0, 10.0, 60.0);

    cout << "Select an option:\n";
    cout << "1. Today's Weather\n";
    cout << "2. Yesterday's Weather\n";
    cout << "3. Tomorrow's Weather\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch(choice) {
        case 1:
            today.displayReport();
            break;
        case 2:
            yesterday.displayReport();
            break;
        case 3:
            tomorrow.displayReport();
            break;
        default:
            cout << "Invalid choice!" << endl;
    }

    return 0;
}
