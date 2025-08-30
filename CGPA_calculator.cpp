#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int semesters;
    cout << "Enter the number of semesters: ";
    cin >> semesters;

    double overallCredits = 0, overallGradePoints = 0;

    cout << fixed << setprecision(2);

    // Loop through each semester
    for (int s = 1; s <= semesters; s++) {
        int n;
        cout << "\n--- Semester " << s << " ---\n";
        cout << "Enter the number of courses in Semester " << s << ": ";
        cin >> n;

        double totalCredits = 0, totalGradePoints = 0;

        // Loop through each course in the semester
        for (int i = 1; i <= n; i++) {
            double grade, creditHours;

            cout << "\nCourse " << i << ":\n";
            cout << "Enter grade (on 10-point scale): ";
            cin >> grade;

            cout << "Enter credit hours: ";
            cin >> creditHours;

            totalCredits += creditHours;
            totalGradePoints += (grade * creditHours);

            cout << "Course " << i << " -> Grade: " << grade
                 << ", Credit Hours: " << creditHours << endl;
        }

        // Semester GPA
        double semesterGPA = totalGradePoints / totalCredits;
        cout << "\nSemester " << s << " GPA: " << semesterGPA << " / 10.00\n";

        // Add to overall totals
        overallCredits += totalCredits;
        overallGradePoints += totalGradePoints;
    }

    // Final CGPA across all semesters
    double cgpa = overallGradePoints / overallCredits;
    cout << "\n*********************************\n";
    cout << "Overall Credits: " << overallCredits << endl;
    cout << "Overall Grade Points: " << overallGradePoints << endl;
    cout << "Final CGPA: " << cgpa << " / 10.00" << endl;
    cout << "**********************************\n";

    return 0;
}
