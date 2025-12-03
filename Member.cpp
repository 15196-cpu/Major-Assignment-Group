/*
 * ============================================================================
 * File: Member.cpp
 * Author: Asad Ullah Shah (15196)
 * Date: December 2, 2025
 * Description: Implementation of Member class for Campus Club Manager
 *              Handles member registration, data management, and display
 * ============================================================================
 */

#include "Member.h"
#include <iostream>
#include <sstream>

// Default constructor - initializes all member attributes to empty values
Member::Member() {
    memberId = "";
    name = "";
    email = "";
    phone = "";
    clubName = "";
}

// Parameterized constructor - creates member with provided details
Member::Member(string id, string n, string e, string p, string club) {
    memberId = id;
    name = n;
    email = e;
    phone = p;
    clubName = club;
}

// Getter methods - provide read-only access to private data
string Member::getMemberId() const { return memberId; }
string Member::getName() const { return name; }
string Member::getEmail() const { return email; }
string Member::getPhone() const { return phone; }
string Member::getClubName() const { return clubName; }

// Setter methods - allow controlled modification of member data
void Member::setMemberId(string id) { memberId = id; }
void Member::setName(string n) { name = n; }
void Member::setEmail(string e) { email = e; }
void Member::setPhone(string p) { phone = p; }
void Member::setClubName(string club) { clubName = club; }

// Display member information in formatted output
void Member::displayMember() const {
    cout << "\n=================================\n";
    cout << "Member ID: " << memberId << endl;
    cout << "Name: " << name << endl;
    cout << "Email: " << email << endl;
    cout << "Phone: " << phone << endl;
    cout << "Club: " << clubName << endl;
    cout << "=================================\n";
}

// Convert member data to string format for file storage
string Member::toString() const {
    stringstream ss;
    ss << memberId << "," << name << "," << email << "," 
       << phone << "," << clubName;
    return ss.str();
}