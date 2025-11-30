// Member Class Implementation
// Developer: Asad Ullah Shah (15196)
// Description: Handles member data and operations

#include "Member.h"
#include <iostream>
#include <sstream>

// Default constructor
Member::Member() {
    memberId = "";
    name = "";
    email = "";
    phone = "";
    clubName = "";
}

// Parameterized constructor
Member::Member(string id, string n, string e, string p, string club) {
    memberId = id;
    name = n;
    email = e;
    phone = p;
    clubName = club;
}

// Getters
string Member::getMemberId() const { return memberId; }
string Member::getName() const { return name; }
string Member::getEmail() const { return email; }
string Member::getPhone() const { return phone; }
string Member::getClubName() const { return clubName; }

// Setters
void Member::setMemberId(string id) { memberId = id; }
void Member::setName(string n) { name = n; }
void Member::setEmail(string e) { email = e; }
void Member::setPhone(string p) { phone = p; }
void Member::setClubName(string club) { clubName = club; }

// Display member information
void Member::displayMember() const {
    cout << "\n=================================\n";
    cout << "Member ID: " << memberId << endl;
    cout << "Name: " << name << endl;
    cout << "Email: " << email << endl;
    cout << "Phone: " << phone << endl;
    cout << "Club: " << clubName << endl;
    cout << "=================================\n";
}

// Convert to string for file storage (comma separated)
string Member::toString() const {
    stringstream ss;
    ss << memberId << "," << name << "," << email << "," 
       << phone << "," << clubName;
    return ss.str();
}