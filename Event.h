#ifndef EVENT_H
#define EVENT_H

#include <string>
using namespace std;

/*
 * ============================================================================
 * File: Event.h
 * Author: Yasir Khan (15090)
 * Date: December 3, 2025
 * Description: Header file for Event class - manages campus events
 * ============================================================================
 */

// Class to represent a campus event
class Event {
private:
    string eventId;
    string eventName;
    string clubName;
    string date;
    string time;
    string venue;
    string description;
    int attendees;

public:
    // Constructors
    Event();
    Event(string id, string name, string club, string d, string t, 
          string v, string desc, int att);

    // Getters
    string getEventId() const;
    string getEventName() const;
    string getClubName() const;
    string getDate() const;
    string getTime() const;
    string getVenue() const;
    string getDescription() const;
    int getAttendees() const;

    // Setters
    void setEventId(string id);
    void setEventName(string name);
    void setClubName(string club);
    void setDate(string d);
    void setTime(string t);
    void setVenue(string v);
    void setDescription(string desc);
    void setAttendees(int att);

    // Attendee management
    void incrementAttendees();
    void decrementAttendees();

    // Display event information
    void displayEvent() const;

    // Convert to string for file storage
    string toString() const;
};

#endif