#include <bits/stdc++.h>
using namespace std;

class Student
{
    public:
    int id;
    char name[101];
    char sec;
    int marks;
};
int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        Student std1, std2, std3;

        // cin >> std1.id;
        // cin.ignore();
        // cin.getline(std1.name,101);
        // cin >> std1.sec >> std1.marks;

        // cin >> std2.id;
        // cin.ignore();
        // cin.getline(std2.name,101);
        // cin >> std2.sec >> std2.marks;

        // cin >> std3.id;
        // cin.ignore();
        // cin.getline(std3.name,101);
        // cin >> std3.sec >> std3.marks;

        cin >> std1.id >> std1.name >> std1.sec >> std1.marks;
        cin >> std2.id >> std2.name >> std2.sec >> std2.marks;
        cin >> std3.id >> std3.name >> std3.sec >> std3.marks;

        Student topper = std1;
        if (std2.marks > topper.marks || (std2.marks == topper.marks && std2.id < topper.id))
        {
            topper = std2;
        }

        if (std3.marks > topper.marks || (std3.marks == topper.marks && std3.id < topper.id))
        {
            topper = std3;
        }
        cout << topper.id << " " << topper.name << " " << topper.sec << " " << topper.marks << endl;

    }
    

    return 0;
}