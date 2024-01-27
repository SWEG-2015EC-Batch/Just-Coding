/*Grade Calculator
Just coding Team
Members..................ID
Rebira Oli............ETS1128/15
Sosena Gossaye........ETS1270/15
Tekta Tewodros........ETS1299/15
Selamawit Tefera......ETS1223/15
Suad Abrar............ETS1278/15*/

#include<iostream>
#include<iomanip>
#include<string>

using namespace std;

const int MAX_STUDENTS = 100;
const int MAX_COURSES = 10;

double totalMarksForCourse[MAX_STUDENTS][MAX_COURSES] = {0};
double totalMarks[MAX_STUDENTS][MAX_COURSES] = {0};
string gradeLetter[MAX_STUDENTS][MAX_COURSES];

int main() {
    int numStudents, numCourses;

    cout << "\n\n\t\t----- WELCOME -----\n" << endl;

    // Set precision for floating-point output
    cout << fixed << setprecision(2);

    cout << "Enter the number of courses: ";
    cin >> numCourses;

    // Check if the number of courses exceeds the maximum limit
    if (numCourses > MAX_COURSES) {
        cout << "Error: Input value exceeds the maximum limit." << endl;
        return 1;
    }

    string courseNames[MAX_COURSES];
    int creditHours[MAX_COURSES];

    // Input course names and credit hours
    for (int i = 0; i < numCourses; ++i) {
        cout << "Enter name for course " << i + 1 << ": ";
        cin >> courseNames[i];

        cout << "Enter credit hours for course " << i + 1 << ": ";
        cin >> creditHours[i];
    }

    cout << "Enter the number of students: ";
    cin >> numStudents;

    // Check if the number of students exceeds the maximum limit
    if (numStudents > MAX_STUDENTS) {
        cout << "Error: Input value exceeds the maximum limit." << endl;
        return 1;
    }

    int studentIDs[MAX_STUDENTS];
    double cgpas[MAX_STUDENTS];
    double averageMarks[MAX_STUDENTS];

    // Input student information and calculate CGPA
    for (int i = 0; i < numStudents; ++i) {
        double totalGradePoints = 0.0;
        double totalCreditHours = 0.0;

        cout << "Enter ID for student " << i + 1 << ": ";
        cin >> studentIDs[i];

        // Input total marks for each course and calculate grade points
        for (int j = 0; j < numCourses; ++j) {
            cout << "Enter total marks for " << courseNames[j] << " for student " << i + 1 << ": ";
            cin >> totalMarksForCourse[i][j];

            double gradePoint = 0.0;

            // Determine grade point based on total marks
            if (totalMarksForCourse[i][j] >= 85) {
                gradePoint = 4.0;
            } else if (totalMarksForCourse[i][j] >= 75) {
                gradePoint = 3.5;
            } else if (totalMarksForCourse[i][j] >= 70) {
                gradePoint = 3.0;
            } else if (totalMarksForCourse[i][j] >= 60) {
                gradePoint = 2.5;
            } else if (totalMarksForCourse[i][j] >= 50) {
                gradePoint = 2.0;
            } else if (totalMarksForCourse[i][j] >= 40) {
                gradePoint = 1.5;
            } else {
                gradePoint = 0.0;
            }

            // Display the grade letter for each course
            if (gradePoint == 4.0) {
                gradeLetter[i][j] = "A";
            } else if (gradePoint == 3.5) {
                gradeLetter[i][j] = "B+";
            } else if (gradePoint == 3.0) {
                gradeLetter[i][j] = "B";
            } else if (gradePoint == 2.5) {
                gradeLetter[i][j] = "C+";
            } else if (gradePoint == 2.0) {
                gradeLetter[i][j] = "C";
            } else if (gradePoint == 1.5) {
                gradeLetter[i][j] = "D";
            } else {
                gradeLetter[i][j] = "F";
            }

            totalGradePoints += gradePoint * creditHours[j];
            totalCreditHours += creditHours[j];
            totalMarks[i][j] += totalMarksForCourse[i][j];
        }

        // Calculate average mark out of 100 for the student
        for (int j = 0; j < numCourses; ++j) {
            averageMarks[i] += totalMarks[i][j];
        }
        averageMarks[i] /= numCourses;

        // Calculate CGPA for the student
        cgpas[i] = (totalGradePoints / totalCreditHours);
    }

    // Display Students' Mark Sheet
    cout << "\n\t\t\t\tStudents' Mark Sheet:\n";
 
    cout << "   Stud. ID\t ";
    
    for (int i = 0; i < numCourses; ++i) {
        cout << "   " << courseNames[i] << "\t\t\t ";
    }
    cout << "Average\t\t CGPA\n";

    for (int i = 0; i < numCourses; i++) {
        cout << "\t\t  Mark|Grade";
    }
    cout << endl;

    for (int i = 0; i < numStudents; ++i) {
        cout << setw(9) << studentIDs[i] << "\t ";

        for (int j = 0; j < numCourses; ++j) {
            cout << setw(5) << totalMarksForCourse[i][j] << " | " << gradeLetter[i][j] << "\t\t";
        }

        cout << setw(8) << averageMarks[i] << "\t\t " << cgpas[i] << endl;
    }

    // Additional functionality for HOD
    cout << "\nHead of Department (HOD) Options:\n";
    cout << "1. Search for a specific student\n";
    cout << "2. See top five ranked students\n";
    int hodOption;
    cout << "Enter your choice (1 or 2): ";
    cin >> hodOption;

    switch (hodOption) {
        case 1: {
            int studentID;
            cout << "Enter the student ID to search for: ";
            cin >> studentID;

            // Search for the student by ID
            bool found = false;
            for (int i = 0; i < numStudents; ++i) {
                if (studentIDs[i] == studentID) {
                    cout << "\nStudent found!\n";
                    cout << "    Stud. ID\t ";
                    for (int j = 0; j < numCourses; ++j) {
                        cout << "  " << courseNames[j] << "\t\t\t";
                    }
                    cout << "Average\t\t CGPA\n";
                    for (int i = 0; i < numCourses; i++) {
                        cout << "\t\t  Mark|Grade";
                    }
                    cout << endl;

                    cout << setw(10) << studentIDs[i] << "\t ";
                    for (int j = 0; j < numCourses; ++j) {
                        cout << setw(5) << totalMarksForCourse[i][j] << " | " << gradeLetter[i][j] << "\t\t";
                    }
                    cout << setw(7) << averageMarks[i] << "\t  " << cgpas[i] << endl;
                    found = true;
                    break;
                }
            }

            if (!found) {
                cout << "Student with ID " << studentID << " not found.\n";
            }

            break;
        }
        case 2: {
            // Sort students based on CGPA in descending order
            for (int i = 0; i < numStudents - 1; ++i) {
                for (int j = 0; j < numStudents - i - 1; ++j) {
                    if (cgpas[j] < cgpas[j + 1]) {
                        // Manually swap CGPA, averageMarks, and studentIDs
                        double tempCGPA = cgpas[j];
                        cgpas[j] = cgpas[j + 1];
                        cgpas[j + 1] = tempCGPA;

                        double tempAverage = averageMarks[j];
                        averageMarks[j] = averageMarks[j + 1];
                        averageMarks[j + 1] = tempAverage;

                        int tempID = studentIDs[j];
                        studentIDs[j] = studentIDs[j + 1];
                        studentIDs[j + 1] = tempID;
                    }
                }
            }

            // Print top five ranked students
            cout << "\nTop five ranked students:\n";
            cout << "Stud. ID\t| Average\t| CGPA\n";
            for (int i = 0; i < min(5, numStudents); ++i) {
                cout << setw(8) << studentIDs[i] << "\t| " << averageMarks[i] << "\t        | " << cgpas[i] << endl;
            }
            break;
        }
        default:
            cout << "Invalid option. Exiting.\n";
    }

    return 0;
}
