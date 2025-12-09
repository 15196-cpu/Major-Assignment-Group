/*
 * ============================================================================
 * File: Manager.cpp
 * Project: Campus Club and Event Manager
 * Author: Wahid Rehman (15134)
 * Date: December 2025
 * Description: Implementation of Manager class - main system controller
 *              Handles all CRUD operations and file I/O for the system
 * ============================================================================
 */

#include "Manager.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <algorithm>

// Constructor - loads all data from files on system startup
Manager::Manager() {
    loadClubs();
    loadEvents();
    loadMembers();
}

// Load clubs from file
void Manager::loadClubs() {
    ifstream file(clubsFile);
    string line;
    
    while (getline(file, line)) {
        if (line.empty()) continue;
        
        stringstream ss(line);
        string id, name, president, description, countStr;
        
        getline(ss, id, ',');
        getline(ss, name, ',');
        getline(ss, president, ',');
        getline(ss, description, ',');
        getline(ss, countStr, ',');
        
        int count = stoi(countStr);
        clubs.push_back(Club(id, name, president, description, count));
    }
    file.close();
}

// Load events from file
void Manager::loadEvents() {
    ifstream file(eventsFile);
    string line;
    
    while (getline(file, line)) {
        if (line.empty()) continue;
        
        stringstream ss(line);
        string id, name, club, date, time, venue, desc, attStr;
        
        getline(ss, id, ',');
        getline(ss, name, ',');
        getline(ss, club, ',');
        getline(ss, date, ',');
        getline(ss, time, ',');
        getline(ss, venue, ',');
        getline(ss, desc, ',');
        getline(ss, attStr, ',');
        
        int att = stoi(attStr);
        events.push_back(Event(id, name, club, date, time, venue, desc, att));
    }
    file.close();
}

// Load members from file
void Manager::loadMembers() {
    ifstream file(membersFile);
    string line;
    
    while (getline(file, line)) {
        if (line.empty()) continue;
        
        stringstream ss(line);
        string id, name, email, phone, club;
        
        getline(ss, id, ',');
        getline(ss, name, ',');
        getline(ss, email, ',');
        getline(ss, phone, ',');
        getline(ss, club, ',');
        
        members.push_back(Member(id, name, email, phone, club));
    }
    file.close();
}

// Save clubs to file
void Manager::saveClubs() {
    ofstream file(clubsFile);
    for (const auto& club : clubs) {
        file << club.toString() << endl;
    }
    file.close();
}

// Save events to file
void Manager::saveEvents() {
    ofstream file(eventsFile);
    for (const auto& event : events) {
        file << event.toString() << endl;
    }
    file.close();
}

// Save members to file
void Manager::saveMembers() {
    ofstream file(membersFile);
    for (const auto& member : members) {
        file << member.toString() << endl;
    }
    file.close();
}

// Generate unique club ID
string Manager::generateClubId() {
    return "CLB" + to_string(clubs.size() + 1);
}

// Generate unique event ID
string Manager::generateEventId() {
    return "EVT" + to_string(events.size() + 1);
}

// Generate unique member ID
string Manager::generateMemberId() {
    return "MEM" + to_string(members.size() + 1);
}

// Add new club to the system
void Manager::addClub() {
    string name, president, description;
    
    cout << "\n--- Add New Club ---\n";
    cout << "Enter Club Name: ";
    cin.ignore();
    getline(cin, name);
    cout << "Enter President Name: ";
    getline(cin, president);
    cout << "Enter Description: ";
    getline(cin, description);
    
    string id = generateClubId();
    Club newClub(id, name, president, description, 0);
    clubs.push_back(newClub);
    saveClubs();
    
    cout << "\n✓ Club added successfully! Club ID: " << id << endl;
}

// View all clubs in the system
void Manager::viewAllClubs() {
    if (clubs.empty()) {
        cout << "\nNo clubs registered yet.\n";
        return;
    }
    
    cout << "\n--- All Registered Clubs ---\n";
    for (const auto& club : clubs) {
        club.displayClub();
    }
}

// Search for a club by name
void Manager::searchClub() {
    string searchName;
    cout << "\nEnter club name to search: ";
    cin.ignore();
    getline(cin, searchName);
    
    bool found = false;
    for (const auto& club : clubs) {
        if (club.getClubName().find(searchName) != string::npos) {
            club.displayClub();
            found = true;
        }
    }
    
    if (!found) {
        cout << "\nNo club found with that name.\n";
    }
}

// Delete a club from the system
void Manager::deleteClub() {
    string clubId;
    cout << "\nEnter Club ID to delete: ";
    cin >> clubId;
    
    for (auto it = clubs.begin(); it != clubs.end(); ++it) {
        if (it->getClubId() == clubId) {
            clubs.erase(it);
            saveClubs();
            cout << "\n✓ Club deleted successfully!\n";
            return;
        }
    }
    cout << "\nClub not found.\n";
}

// Add new event to the system
void Manager::addEvent() {
    string name, clubName, date, time, venue, description;
    int attendees;
    
    cout << "\n--- Add New Event ---\n";
    cout << "Enter Event Name: ";
    cin.ignore();
    getline(cin, name);
    cout << "Enter Club Name: ";
    getline(cin, clubName);
    cout << "Enter Date (DD-MM-YYYY): ";
    getline(cin, date);
    cout << "Enter Time: ";
    getline(cin, time);
    cout << "Enter Venue: ";
    getline(cin, venue);
    cout << "Enter Description: ";
    getline(cin, description);
    cout << "Expected Attendees: ";
    cin >> attendees;
    
    string id = generateEventId();
    Event newEvent(id, name, clubName, date, time, venue, description, attendees);
    events.push_back(newEvent);
    saveEvents();
    
    cout << "\n✓ Event added successfully! Event ID: " << id << endl;
}

// View all events in the system
void Manager::viewAllEvents() {
    if (events.empty()) {
        cout << "\nNo events scheduled yet.\n";
        return;
    }
    
    cout << "\n--- All Scheduled Events ---\n";
    for (const auto& event : events) {
        event.displayEvent();
    }
}

// Search for an event by name
void Manager::searchEvent() {
    string searchName;
    cout << "\nEnter event name to search: ";
    cin.ignore();
    getline(cin, searchName);
    
    bool found = false;
    for (const auto& event : events) {
        if (event.getEventName().find(searchName) != string::npos) {
            event.displayEvent();
            found = true;
        }
    }
    
    if (!found) {
        cout << "\nNo event found with that name.\n";
    }
}

// Delete an event from the system
void Manager::deleteEvent() {
    string eventId;
    cout << "\nEnter Event ID to delete: ";
    cin >> eventId;
    
    for (auto it = events.begin(); it != events.end(); ++it) {
        if (it->getEventId() == eventId) {
            events.erase(it);
            saveEvents();
            cout << "\n✓ Event deleted successfully!\n";
            return;
        }
    }
    cout << "\nEvent not found.\n";
}

// Add new member to the system
void Manager::addMember() {
    string name, email, phone, clubName;
    
    cout << "\n--- Register New Member ---\n";
    cout << "Enter Member Name: ";
    cin.ignore();
    getline(cin, name);
    cout << "Enter Email: ";
    getline(cin, email);
    cout << "Enter Phone: ";
    getline(cin, phone);
    cout << "Enter Club Name: ";
    getline(cin, clubName);
    
    string id = generateMemberId();
    Member newMember(id, name, email, phone, clubName);
    members.push_back(newMember);
    saveMembers();
    
    // Update club member count
    for (auto& club : clubs) {
        if (club.getClubName() == clubName) {
            club.incrementMemberCount();
            saveClubs();
            break;
        }
    }
    
    cout << "\n✓ Member registered successfully! Member ID: " << id << endl;
}

// View all members in the system
void Manager::viewAllMembers() {
    if (members.empty()) {
        cout << "\nNo members registered yet.\n";
        return;
    }
    
    cout << "\n--- All Registered Members ---\n";
    for (const auto& member : members) {
        member.displayMember();
    }
}

// Search for a member by name
void Manager::searchMember() {
    string searchName;
    cout << "\nEnter member name to search: ";
    cin.ignore();
    getline(cin, searchName);
    
    bool found = false;
    for (const auto& member : members) {
        if (member.getName().find(searchName) != string::npos) {
            member.displayMember();
            found = true;
        }
    }
    
    if (!found) {
        cout << "\nNo member found with that name.\n";
    }
}

// Delete a member from the system
void Manager::deleteMember() {
    string memberId;
    cout << "\nEnter Member ID to delete: ";
    cin >> memberId;
    
    for (auto it = members.begin(); it != members.end(); ++it) {
        if (it->getMemberId() == memberId) {
            string clubName = it->getClubName();
            members.erase(it);
            saveMembers();
            
            // Update club member count
            for (auto& club : clubs) {
                if (club.getClubName() == clubName) {
                    club.decrementMemberCount();
                    saveClubs();
                    break;
                }
            }
            
            cout << "\n✓ Member deleted successfully!\n";
            return;
        }
    }
    cout << "\nMember not found.\n";
}

// Display system statistics
void Manager::displayStatistics() {
    cout << "\n========== SYSTEM STATISTICS ==========\n";
    cout << "Total Clubs: " << clubs.size() << endl;
    cout << "Total Events: " << events.size() << endl;
    cout << "Total Members: " << members.size() << endl;
    cout << "=======================================\n";
}