#include "Club.h"
#include <iostream>
#include <sstream>

// Default constructor
Club::Club() {
    clubId = "";
    clubName = "";
    president = "";
    description = "";
    memberCount = 0;
}

// Parameterized constructor
Club::Club(string id, string name, string pres, string desc, int count) {
    clubId = id;
    clubName = name;
    president = pres;
    description = desc;
    memberCount = count;
}

// Getters
string Club::getClubId() const { return clubId; }
string Club::getClubName() const { return clubName; }
string Club::getPresident() const { return president; }
string Club::getDescription() const { return description; }
int Club::getMemberCount() const { return memberCount; }

// Setters
void Club::setClubId(string id) { clubId = id; }
void Club::setClubName(string name) { clubName = name; }
void Club::setPresident(string pres) { president = pres; }
void Club::setDescription(string desc) { description = desc; }
void Club::setMemberCount(int count) { memberCount = count; }

// Member management
void Club::incrementMemberCount() {
    memberCount++;
}

void Club::decrementMemberCount() {
    if (memberCount > 0) {
        memberCount--;
    }
}

// Display club information
void Club::displayClub() const {
    cout << "\n=================================\n";
    cout << "Club ID: " << clubId << endl;
    cout << "Club Name: " << clubName << endl;
    cout << "President: " << president << endl;
    cout << "Description: " << description << endl;
    cout << "Total Members: " << memberCount << endl;
    cout << "=================================\n";
}

// Convert to string for file storage
string Club::toString() const {
    stringstream ss;
    ss << clubId << "," << clubName << "," << president << "," 
       << description << "," << memberCount;
    return ss.str();
}