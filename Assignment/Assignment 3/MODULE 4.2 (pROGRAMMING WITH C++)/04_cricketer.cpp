#include <iostream>
#include <string>
using namespace std;

// Base Class
class Cricketer {
protected:
    string name;
    int age;

public:
    void getCricketerData() {
        cout << "Enter Player Name: ";
        getline(cin >> ws, name); // ws consumes any leading whitespace
        cout << "Enter Age: ";
        cin >> age;
    }
};

// Derived Class
class Batsman : public Cricketer {
private:
    int totalRuns;
    double averageRuns;
    int bestPerformance;
    int matchesPlayed;

public:
    // Member function to input data
    void inputData() {
        getCricketerData(); // Calling base class function
        cout << "Enter Matches Played: ";
        cin >> matchesPlayed;
        cout << "Enter Total Runs: ";
        cin >> totalRuns;
        cout << "Enter Best Performance (High Score): ";
        cin >> bestPerformance;
        
        calculateAverageRuns(); // Calculate average immediately after input
    }

    // Member function to calculate average runs
    void calculateAverageRuns() {
        if (matchesPlayed != 0) {
            averageRuns = (double)totalRuns / matchesPlayed;
        } else {
            averageRuns = 0;
        }
    }

    // Member function to display data
    void displayData() {
        cout << "\n----- Player Statistics -----" << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Matches Played: " << matchesPlayed << endl;
        cout << "Total Runs: " << totalRuns << endl;
        cout << "Best Performance: " << bestPerformance << endl;
        cout << "Average Runs: " << averageRuns << endl;
        cout << "-----------------------------" << endl;
    }
};

int main() {
    Batsman player;
    
    player.inputData();
    player.displayData();

    return 0;
}

