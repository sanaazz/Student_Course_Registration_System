
#ifndef Student_h
#define Student_h
#include <string>
#include <iostream>
#include <iomanip>
#include "Course.h"
using namespace std;


class Student{
public:
    Student(const int studnetId = 0, const string fisrtName = "", const string lastName = "");
    Student(const Student &otherStudent);
    
    ~Student();
    
    int getStudentId() const;
    string getFirstName() const;
    string getLastName() const;
    
    void StudentAddCourse(const int courseId, const string courseTitle);
    void StudentRemoveCourse(const int courseId);
    void RemoveAllCourses();
    
    void showCourses() const;
    
    bool isCourseExist(const int courseId) const;
    bool isCourseExist(const int courseId, string &courseTitle);
    
private:
    int studentId;
    string firstName;
    string lastName;
    
    //single linked list of courses
    struct CourseNode{
        Course course;
        CourseNode *next;
    };
    int size;
    CourseNode* head;
    
    //Singly linked list functions
    int getLength() const;
    bool isEmpty() const;
    
    void insert(const int index, Course newItem);
    void remove(const int index);

    CourseNode* find(const int index) const;
    int findIndex(const int courseId) const;
    int insertToWhere(const int id) const;
};

#endif /* Student_h */
