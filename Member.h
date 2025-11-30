#ifndef MEMBER_H
#define MEMBER_H

#include <string>
using namespace std;

// Class to represent a club member
class Member {
private:
    string memberId;
    string name;
    string email;
    string phone;
    string clubName;

public:
    // Constructors
    Member();
    Member(string id, string n, string e, string p, string club);

    // Getters
    string getMemberId() const;
    string getName() const;
    string getEmail() const;
    string getPhone() const;
    string getClubName() const;

    // Setters
    void setMemberId(string id);
    void setName(string n);
    void setEmail(string e);
    void setPhone(string p);
    void setClubName(string club);

    // Display member information
    void displayMember() const;

    // Convert to string for file storage
    string toString() const;
};

#endif