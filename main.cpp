/*
 * ============================================================================
 * File: main.cpp
 * Project: Campus Club and Event Manager
 * Team Members: Asad Ullah Shah (15196), Ayesha Abrar (14900),
 *               Yasir Khan (15090), Wahid Rehman (15134)
 * Date: December 2025
 * Description: Main program entry point with menu-driven user interface
 * ============================================================================
 */

#include <iostream>
#include "Manager.h"

using namespace std;

// Function to display main menu
void displayMenu() {
    cout << "\n\n";
    cout << "|========================================|\n";
    cout << "|   CAMPUS CLUB & EVENT MANAGER SYSTEM   |\n";
    cout << "|========================================|\n";
    cout << "\n";
    cout << "  [1] Club Management\n";
    cout << "  [2] Event Management\n";
    cout << "  [3] Member Management\n";
    cout << "  [4] View Statistics\n";
    cout << "  [5] Exit\n";
    cout << "\n";
    cout << "Enter your choice: ";
}

// Function to display club management submenu
void displayClubMenu() {
    cout << "\n--- Club Management ---\n";
    cout << "1. Add New Club\n";
    cout << "2. View All Clubs\n";
    cout << "3. Search Club\n";
    cout << "4. Delete Club\n";
    cout << "5. Back to Main Menu\n";
    cout << "Enter choice: ";
}

// Function to display event management submenu
void displayEventMenu() {
    cout << "\n--- Event Management ---\n";
    cout << "1. Add New Event\n";
    cout << "2. View All Events\n";
    cout << "3. Search Event\n";
    cout << "4. Delete Event\n";
    cout << "5. Back to Main Menu\n";
    cout << "Enter choice: ";
}

// Function to display member management submenu
void displayMemberMenu() {
    cout << "\n--- Member Management ---\n";
    cout << "1. Register New Member\n";
    cout << "2. View All Members\n";
    cout << "3. Search Member\n";
    cout << "4. Delete Member\n";
    cout << "5. Back to Main Menu\n";
    cout << "Enter choice: ";
}

int main() {
    Manager manager;
    int choice, subChoice;

    // Display welcome screen with team information
    cout << "\n";
    cout << "|================================================|\n";
    cout << "|                                                |\n";
    cout << "|     WELCOME TO CAMPUS CLUB MANAGER SYSTEM      |\n";
    cout << "|                                                |\n";
    cout << "|         Developed by:                          |\n";
    cout << "|         Asad Ullah Shah (15196)              |\n";
    cout << "|         Ayesha Abrar (14900)                 |\n";
    cout << "|         Yasir Khan (15090)                   |\n";
    cout << "|         Wahid Rehman (15134)                 |\n";
    cout << "|================================================|\n";
    cout << "\n";

    // Main program loop
    while (true) {
        displayMenu();
        cin >> choice;

        switch (choice) {
            case 1: // Club Management
                while (true) {
                    displayClubMenu();
                    cin >> subChoice;
                    
                    switch (subChoice) {
                        case 1:
                            manager.addClub();
                            break;
                        case 2:
                            manager.viewAllClubs();
                            break;
                        case 3:
                            manager.searchClub();
                            break;
                        case 4:
                            manager.deleteClub();
                            break;
                        case 5:
                            goto mainMenu;
                        default:
                            cout << "\nInvalid choice! Try again.\n";
                    }
                }
                mainMenu:
                break;

            case 2: // Event Management
                while (true) {
                    displayEventMenu();
                    cin >> subChoice;
                    
                    switch (subChoice) {
                        case 1:
                            manager.addEvent();
                            break;
                        case 2:
                            manager.viewAllEvents();
                            break;
                        case 3:
                            manager.searchEvent();
                            break;
                        case 4:
                            manager.deleteEvent();
                            break;
                        case 5:
                            goto mainMenu2;
                        default:
                            cout << "\nInvalid choice! Try again.\n";
                    }
                }
                mainMenu2:
                break;

            case 3: // Member Management
                while (true) {
                    displayMemberMenu();
                    cin >> subChoice;
                    
                    switch (subChoice) {
                        case 1:
                            manager.addMember();
                            break;
                        case 2:
                            manager.viewAllMembers();
                            break;
                        case 3:
                            manager.searchMember();
                            break;
                        case 4:
                            manager.deleteMember();
                            break;
                        case 5:
                            goto mainMenu3;
                        default:
                            cout << "\nInvalid choice! Try again.\n";
                    }
                }
                mainMenu3:
                break;

            case 4: // Statistics
                manager.displayStatistics();
                break;

            case 5: // Exit
                cout << "\n|==================================|\n";
                cout << "|   Thank you for using our system!   |\n";
                cout << "|          Goodbye! 👋                |\n";
                cout << "|======================================|\n\n";
                return 0;

            default:
                cout << "\nInvalid choice! Please try again.\n";
        }
    }

    return 0;
}