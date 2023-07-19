#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Student {
    string name;
    int cls;
    char section;
    int mathMarks;
    int engMarks;
};

void printStudentsReverse(const vector<Student>& students) {
    for (int i = students.size() - 1; i >= 0; i--) {
        cout << students[i].name << " " << students[i].cls << " "
             << students[i].section << " " << students[i].mathMarks << " "
             << students[i].engMarks << endl;
    }
}

int main() {
    int N;
    cin >> N;
    vector<Student> students(N);

    for (int i = 0; i < N; i++) {
        cin >> students[i].name >> students[i].cls >> students[i].section >>
            students[i].mathMarks >> students[i].engMarks;
    }

    printStudentsReverse(students);
    return 0;
}
