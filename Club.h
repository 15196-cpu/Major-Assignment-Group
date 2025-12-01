#ifndef CLUB_H
#define CLUB_H

#include <string>
#include <vector>
using namespace std;

// Class to represent a campus club
class Club {
private:
    string clubId;
    string clubName;
    string president;
    string description;
    int memberCount;

public:
    // Constructors
    Club();
    Club(string id, string name, string pres, string desc, int count);

    // Getters
    string getClubId() const;
    string getClubName() const;
    string getPresident() const;
    string getDescription() const;
    int getMemberCount() const;

    // Setters
    void setClubId(string id);
    void setClubName(string name);
    void setPresident(string pres);
    void setDescription(string desc);
    void setMemberCount(int count);

    // Member management
    void incrementMemberCount();
    void decrementMemberCount();

    // Display club information
    void displayClub() const;

    // Convert to string for file storage
    string toString() const;
};

#endif