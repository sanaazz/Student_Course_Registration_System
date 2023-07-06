

#ifndef RegistrationSystem_h
#define RegistrationSystem_h

#include <iostream>
#include "Student.h"
#include "Course.h"
#include <string>
using namespace std;


class RegistrationSystem {
public:
    RegistrationSystem();
    ~RegistrationSystem();
    void addStudent( const int studentId , const string firstName, const string lastName );
    void deleteStudent( const int studentId );

    void addCourse( const int studentId , const int courseId , const string courseName );
    void withdrawCourse( const int studentId, const int courseId );
    void cancelCourse( const int courseId );
    
    void showStudent( const int studentId );
    void showCourse( const int courseId );
    void showAllStudents();
    void reverse();
    
private:
   
    struct StudentNode{
        Student stud;
        StudentNode* next;
        StudentNode* prev;
    };
    int size;
    StudentNode* head;
    
    int getLength() const;
    bool isEmpty() const;
    
    bool isStudentExists(const int studentId);
    
    void insert(const int index, Student newStudent);
    void remove(const int index);
    
    StudentNode* find(const int index) const;
    int findIndex(const int studentId) const;
    
    int insertToWhere(const int id) const;
    
    
    
    
    
    //------------------------------------
    struct courseDB{
        Course crsList;
        courseDB* Cnext;
    };
    
    courseDB* courseHead;
    int courseSize;
    
    int getCoursesLength() const;
    
    bool isCourseEmpty() const;
    bool iscourseExists(const int courseID);
    bool iscourseExists(const int courseID, string courseName);
    
    void insertCourse(const int index, Course newCourse);
    void removeCourse(const int index);
    
    courseDB* findCourse(const int index) const;
    
    int insertCourseToWhere(const int id) const;
    
    int courseIndex(const int courseID) const;
    
    void removeZeroRegCount();
  
};

#endif /* RegistrationSystem_h */
