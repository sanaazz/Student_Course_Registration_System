

#ifndef Course_h
#define Course_h
#include <string>
#include <iostream>
using namespace std;


class Course{
public:
    
    Course(const int  courseId = 0, string courseTitle = "");

    int getCourseId() const;
    string getCourseTitle() const;
    int getRegcount() const;
    
    void setCourseId(const int courseId);
    void setCourseTitle(const string courseTitle);
    void setRegcount(const int Regcount);
    
    
private:
    int courseId;
    string courseTitle;
    int Regcount;
};

#endif /* Course_h */
