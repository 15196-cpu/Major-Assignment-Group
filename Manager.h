/*
 * ============================================================================
 * File: Manager.h
 * Project: Campus Club and Event Manager
 * Author: Wahid Rehman (15134)
 * Date: December 2025
 * Description: Header file for Manager class - main system controller
 *              Coordinates all operations for clubs, events, and members
 * ============================================================================
 */

#ifndef MANAGER_H
#define MANAGER_H

#include "Club.h"
#include "Event.h"
#include "Member.h"
#include <vector>
#include <string>

using namespace std;

// Main manager class that handles all system operations
class Manager {
private:
    vector<Club> clubs;       // List of all clubs
    vector<Event> events;     // List of all events
    vector<Member> members;   // List of all members

    // File paths for data persistence
    const string clubsFile = "data/clubs.txt";
    const string eventsFile = "data/events.txt";
    const string membersFile = "data/members.txt";

    // Helper functions for file operations
    void loadClubs();
    void loadEvents();
    void loadMembers();
    void saveClubs();
    void saveEvents();
    void saveMembers();

    // Helper functions to generate unique IDs
    string generateClubId();
    string generateEventId();
    string generateMemberId();

public:
    // Constructor - loads all data from files
    Manager();

    // Club management operations
    void addClub();
    void viewAllClubs();
    void searchClub();
    void deleteClub();

    // Event management operations
    void addEvent();
    void viewAllEvents();
    void searchEvent();
    void deleteEvent();

    // Member management operations
    void addMember();
    void viewAllMembers();
    void searchMember();
    void deleteMember();

    // System statistics display
    void displayStatistics();
};

#endif