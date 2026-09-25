#include <iostream>
#include <string>
using namespace std;

// 1. Class (Blueprint / Pattern)
class ArmyOfficer {
public:
	// Attributes (Characteristics / Data)
	string name;
	string rank;
	string unit;
	int serviceYears;

	// Method (Action / Behavior)
	void displayProfile() {
		cout << "===== Pak Army Officer Profile =====" << endl;
		cout << "Name: " << name << endl;
		cout << "Rank: " << rank << endl;
		cout << "Unit: " << unit << endl;
		cout << "Service: " << serviceYears << " Years" << endl;
		cout << "=====================================" << endl;
	}

	// Ek aur Method (Action)
	void performDuty() {
		cout << rank << " " << name << " is currently on duty at the border." << endl;
	}
};

int main() {
	// 2. Object 1 (Real Officer)
	ArmyOfficer officer1;

	// Attributes ko values assign karna
	officer1.name = "Ali Khan";
	officer1.rank = "Captain";
	officer1.unit = "Infantry Division";
	officer1.serviceYears = 5;

	// Methods call karna
	officer1.displayProfile();
	officer1.performDuty();

	cout << endl;

	// 3. Object 2 (Dusra Real Officer)
	ArmyOfficer officer2;

	officer2.name = "Tariq Mahmood";
	officer2.rank = "Major";
	officer2.unit = "Armoured Corps";
	officer2.serviceYears = 12;

	officer2.displayProfile();
	officer2.performDuty();

	return 0;
}
