#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Student {
    string name;
    int cls;
    char section;
    int id;
};

void reverseIds(vector<Student>& students) {
    int left = 0;
    int right = students.size() - 1;

    while (left < right) {
        swap(students[left].id, students[right].id);
        left++;
        right--;
    }
}

void printStudents(const vector<Student>& students) {
    for (const auto& student : students) {
        cout << student.name << " " << student.cls << " " << student.section
             << " " << student.id << endl;
    }
}

int main() {
    int N;
    cin >> N;
    vector<Student> students(N);

    for (int i = 0; i < N; i++) {
        cin >> students[i].name >> students[i].cls >> students[i].section >>
            students[i].id;
    }

    reverseIds(students);
    printStudents(students);
    return 0;
}
