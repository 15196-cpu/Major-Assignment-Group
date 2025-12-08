#include "Event.h"
#include <iostream>
#include <sstream>

// Default constructor
Event::Event() {
    eventId = "";
    eventName = "";
    clubName = "";
    date = "";
    time = "";
    venue = "";
    description = "";
    attendees = 0;
}

// Parameterized constructor
Event::Event(string id, string name, string club, string d, string t,
             string v, string desc, int att) {
    eventId = id;
    eventName = name;
    clubName = club;
    date = d;
    time = t;
    venue = v;
    description = desc;
    attendees = att;
}

// Getters
string Event::getEventId() const { return eventId; }
string Event::getEventName() const { return eventName; }
string Event::getClubName() const { return clubName; }
string Event::getDate() const { return date; }
string Event::getTime() const { return time; }
string Event::getVenue() const { return venue; }
string Event::getDescription() const { return description; }
int Event::getAttendees() const { return attendees; }

// Setters
void Event::setEventId(string id) { eventId = id; }
void Event::setEventName(string name) { eventName = name; }
void Event::setClubName(string club) { clubName = club; }
void Event::setDate(string d) { date = d; }
void Event::setTime(string t) { time = t; }
void Event::setVenue(string v) { venue = v; }
void Event::setDescription(string desc) { description = desc; }
void Event::setAttendees(int att) { attendees = att; }

// Attendee management
void Event::incrementAttendees() {
    attendees++;
}

void Event::decrementAttendees() {
    if (attendees > 0) {
        attendees--;
    }
}

// Display event information
void Event::displayEvent() const {
    cout << "\n=================================\n";
    cout << "Event ID: " << eventId << endl;
    cout << "Event Name: " << eventName << endl;
    cout << "Organized by: " << clubName << endl;
    cout << "Date: " << date << endl;
    cout << "Time: " << time << endl;
    cout << "Venue: " << venue << endl;
    cout << "Description: " << description << endl;
    cout << "Expected Attendees: " << attendees << endl;
    cout << "=================================\n";
}

// Convert to string for file storage
string Event::toString() const {
    stringstream ss;
    ss << eventId << "," << eventName << "," << clubName << "," 
       << date << "," << time << "," << venue << "," 
       << description << "," << attendees;
    return ss.str();
}