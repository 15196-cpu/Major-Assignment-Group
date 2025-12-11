# Campus Club and Event Manager System

## 📋 Project Information

**Course:** Software Construction & Development  
**Semester:** 5th Fall 2025  
**Instructor:** Jawad Wakeel  
**Institution:** City University of Science and Information Technology Peshawar

---

## 👥 Team Members

| Name | Registration ID | Responsibility |
|------|----------------|----------------|
| **Asad Ullah Shah** | 15196 | Member class development, GitHub setup, System testing |
| **Ayesha Abrar** | 14900 | Club class development, Documentation, Code review |
| **Yasir Khan** | 15090 | Event class development, UI design, Video demonstration |
| **Wahid Rehman** | 15134 | Manager class development, File I/O operations, Integration |

---

## 📖 Project Description

The **Campus Club and Event Manager** is a comprehensive C++ application designed to help universities manage their student clubs, campus events, and member registrations efficiently. The system provides an intuitive menu-driven interface for administrators to perform complete CRUD (Create, Read, Update, Delete) operations.

### Key Features

✅ **Club Management**
- Create new campus clubs with unique IDs
- View all registered clubs with detailed information
- Search clubs by name (supports partial matching)
- Delete clubs from the system
- Automatic member count tracking

✅ **Event Management**
- Schedule campus events with complete details
- Track event date, time, venue, and expected attendees
- View all upcoming and past events
- Search events by name
- Delete canceled or completed events

✅ **Member Management**
- Register new members with contact information
- Assign members to specific clubs
- View all registered members
- Search members by name
- Remove member registrations
- Automatic club member count updates

✅ **Data Persistence**
- All data saved to text files automatically
- Data loaded on system startup
- CSV format for easy data portability
- Separate files for clubs, events, and members

✅ **Statistics Dashboard**
- View total number of clubs
- View total number of events
- View total number of members
- Quick system overview

---

## 🛠️ Technologies Used

### Programming Language
- **C++** (Standard C++11 and above)
  - Object-Oriented Programming (OOP) principles
  - Standard Template Library (STL)
  - File I/O operations
  - String manipulation

### Development Tools
- **Compiler:** MinGW GCC/G++ (Windows) / GCC (Linux/Mac)
- **IDE:** Visual Studio Code with C++ extensions
- **Version Control:** Git
- **Repository Hosting:** GitHub
- **Collaboration:** Branch-based workflow with Pull Requests

### Data Storage
- **File Format:** Plain text files (.txt)
- **Data Format:** Comma-Separated Values (CSV)
- **Storage Location:** `data/` directory

---

## 📁 Project Structure

```
Major-Assignment-Group/
├── Member.h              # Member class header
├── Member.cpp            # Member class implementation
├── Club.h                # Club class header
├── Club.cpp              # Club class implementation
├── Event.h               # Event class header
├── Event.cpp             # Event class implementation
├── Manager.h             # Manager class header
├── Manager.cpp           # Manager class implementation
├── main.cpp              # Main program with menu system
├── README.md             # Project documentation
└── data/
    ├── clubs.txt         # Club data storage
    ├── events.txt        # Event data storage
    └── members.txt       # Member data storage
```

---

## 🚀 How to Compile and Run

### Prerequisites
- MinGW GCC compiler (Windows) or GCC (Linux/Mac)
- Git (for cloning the repository)
- Text editor or IDE (VS Code recommended)

### Step 1: Clone the Repository
```bash
git clone https://github.com/15196-cpu/Major-Assignment-Group.git
cd Major-Assignment-Group
```

### Step 2: Create Data Directory (if not exists)
```bash
mkdir data
```

### Step 3: Compile the Program
```bash
g++ -o CampusManager main.cpp Member.cpp Club.cpp Event.cpp Manager.cpp
```

### Step 4: Run the Executable
```bash
# On Windows
CampusManager.exe

# On Linux/Mac
./CampusManager
```

---

## 💻 Usage Guide

### Main Menu Options

1. **Club Management**
   - Add new clubs with president information
   - View all registered clubs
   - Search for specific clubs
   - Delete clubs (with confirmation)

2. **Event Management**
   - Schedule new events with complete details
   - View all scheduled events
   - Search for specific events
   - Delete events

3. **Member Management**
   - Register new members with contact info
   - View all registered members
   - Search for specific members
   - Delete member registrations

4. **View Statistics**
   - See total clubs, events, and members
   - Quick system overview

5. **Exit**
   - Safely close the application

---

## 📊 Object-Oriented Design

### Classes and Responsibilities

#### 1. **Member Class** (by Asad Ullah Shah)
- **Purpose:** Represents a club member
- **Attributes:** Member ID, Name, Email, Phone, Club Name
- **Methods:** Getters, Setters, Display, toString()

#### 2. **Club Class** (by Ayesha Abrar)
- **Purpose:** Represents a campus club
- **Attributes:** Club ID, Name, President, Description, Member Count
- **Methods:** Getters, Setters, Increment/Decrement Members, Display, toString()

#### 3. **Event Class** (by Yasir Khan)
- **Purpose:** Represents a campus event
- **Attributes:** Event ID, Name, Club, Date, Time, Venue, Description, Attendees
- **Methods:** Getters, Setters, Increment/Decrement Attendees, Display, toString()

#### 4. **Manager Class** (by Wahid Rehman)
- **Purpose:** System controller and coordinator
- **Attributes:** Vectors of Clubs, Events, Members
- **Methods:** CRUD operations for all entities, File I/O, ID generation

### OOP Principles Applied

✅ **Encapsulation**
- All data members are private
- Public getter and setter methods for controlled access
- Implementation details hidden from users

✅ **Abstraction**
- Complex file operations abstracted in Manager class
- Simple public interfaces for all operations
- Users don't need to know internal workings

✅ **Modularity**
- Separate header (.h) and implementation (.cpp) files
- Each class has single, well-defined responsibility
- Easy to maintain and extend

✅ **Code Reusability**
- Common patterns implemented once and reused
- Utility functions for ID generation
- Consistent data handling across all modules

---

## 🎯 Software Architecture

### Layered Architecture Pattern

**1. Presentation Layer (UI)**
- `main.cpp` - Menu system and user interaction
- Handles input/output with users
- Displays formatted information

**2. Business Logic Layer**
- `Manager` class - Coordinates all operations
- Handles business rules and validation
- Manages relationships between entities

**3. Data Model Layer**
- `Club`, `Event`, `Member` classes
- Represent core business entities
- Encapsulate data and behavior

**4. Data Persistence Layer**
- File I/O operations in Manager class
- CSV format for data storage
- Automatic save/load functionality

---

## 📝 Code Quality & Best Practices

✅ **Meaningful Naming**
- Descriptive variable and function names
- Consistent naming conventions (camelCase for variables)
- Clear class and method names

✅ **Comprehensive Comments**
- File headers with author information
- Function descriptions
- Inline comments for complex logic

✅ **Proper Formatting**
- Consistent indentation (4 spaces)
- Organized code structure
- Clear separation of concerns

✅ **Error Handling**
- Input validation
- File operation error checks
- User-friendly error messages

✅ **No Code Duplication**
- Reusable functions
- DRY (Don't Repeat Yourself) principle
- Efficient code structure

---

## 🔄 GitHub Workflow

### Branch Strategy
- **main** - Production-ready code
- **feature-member** - Member class development
- **feature-club** - Club class development
- **feature-event** - Event class development
- **feature-manager** - Manager class development

### Collaboration Process
1. Each member creates feature branch
2. Develops their assigned component
3. Creates Pull Request (PR)
4. Team member reviews the code
5. PR approved and merged to main
6. Branch deleted after merge

### Commit Guidelines
- Regular commits (daily progress)
- Clear, descriptive commit messages
- Small, focused commits
- Individual contributions visible

---

## 📈 Development Timeline

| Phase | Duration | Tasks | Responsible |
|-------|----------|-------|-------------|
| **Week 1** | Days 1-2 | GitHub setup, Member class | Asad |
| **Week 1** | Days 3-4 | Club class development | Ayesha |
| **Week 2** | Days 5-6 | Event class development | Yasir |
| **Week 2** | Days 7-8 | Manager class, integration | Wahid |
| **Week 3** | Days 9-10 | Main program, testing | All |
| **Week 3** | Days 11-12 | Documentation, video | All |

---

## 🧪 Testing

### Unit Testing
- ✅ Each class tested individually
- ✅ All methods verified for correctness
- ✅ Edge cases handled (empty inputs, invalid data)

### Integration Testing
- ✅ File I/O operations tested
- ✅ Menu navigation verified
- ✅ Data persistence confirmed
- ✅ Cross-module interactions validated

### User Acceptance Testing
- ✅ Complete workflows tested end-to-end
- ✅ All features working as expected
- ✅ User interface intuitive and functional

---

## 📊 Sample Data

### Clubs File Format (clubs.txt)
```
CLB1,Computer Science Society,Ali Ahmed,Programming and tech club,25
CLB2,Debate Club,Sara Khan,Public speaking and debates,18
```

### Events File Format (events.txt)
```
EVT1,Tech Talk 2025,Computer Science Society,15-12-2025,14:00,Main Hall,Annual technology conference,150
EVT2,Debate Competition,Debate Club,20-12-2025,10:00,Auditorium,Inter-university debate,80
```

### Members File Format (members.txt)
```
MEM1,Ahmed Ali,ahmed@example.com,0300-1234567,Computer Science Society
MEM2,Fatima Noor,fatima@example.com,0301-2345678,Debate Club
```

---

## 🎓 Learning Outcomes Achieved

### CLO 3: Software Architecture
✅ Evaluated different architectural patterns  
✅ Selected layered architecture for modularity  
✅ Implemented separation of concerns  
✅ Designed scalable system structure  

### CLO 4: OOP Implementation
✅ Applied encapsulation, abstraction, modularity  
✅ Implemented classes with proper relationships  
✅ Followed C++ best practices  
✅ Created maintainable, readable code  

### Additional Skills Gained
✅ Git & GitHub collaboration  
✅ Branch-based workflow  
✅ Code review process  
✅ Team coordination  
✅ Project documentation  

---

## 🚧 Known Limitations

- Text-based UI (no graphical interface)
- Basic input validation (could be enhanced)
- No user authentication system
- Single-user system (no concurrent access)
- No advanced search filters

---

## 🔮 Future Enhancements

### Potential Improvements
- 🎨 Graphical User Interface (GUI)
- 🔐 User authentication and authorization
- 📧 Email notifications for events
- 📊 Advanced reporting and analytics
- 🔍 Advanced search with multiple filters
- 📱 Mobile application version
- 🌐 Web-based interface
- 🗄️ Database integration (SQLite/MySQL)

---

## 📞 Contact Information

For any queries regarding this project:

- **Asad Ullah Shah (15196):** [GitHub Profile](https://github.com/15196-cpu)
- **Ayesha Abrar (14900):** ayeshabrar@example.com
- **Yasir Khan (15090):** yasirkhan@example.com
- **Wahid Rehman (15134):** wahidrehman@example.com

---

## 📜 License & Academic Integrity

This project is created for educational purposes as part of the Software Construction & Development course at City University of Science and Information Technology Peshawar.

**Academic Integrity Statement:**
- All code is original work by our team
- No plagiarism or copying from other groups
- Proper citations for any external resources used
- Collaborative development through GitHub

---

## 🙏 Acknowledgments

- **Instructor:** Jawad Wakeel - For guidance and support
- **University:** City University of Science and Information Technology Peshawar
- **Team Members:** For excellent collaboration and dedication

---

## 📊 Repository Statistics

- **Total Commits:** 15+
- **Total Branches:** 5
- **Pull Requests:** 4
- **Contributors:** 4
- **Lines of Code:** ~1000+
- **Files:** 11

---

**Last Updated:** December 2025  
**Version:** 1.0  
**Status:** ✅ Completed

---

### 🌟 Thank you for reviewing our project!