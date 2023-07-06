

#include <stdio.h>
#include "Course.h"

Course::Course(const int courseId , const string courseTitle){
    this->courseId = courseId;
    this->courseTitle = courseTitle;
    this->Regcount = 0;
}

int Course::getCourseId() const{
    return courseId;
}
int Course::getRegcount() const{
    return Regcount;
}
string Course::getCourseTitle() const{
    return courseTitle;
}

void Course::setCourseId(const int courseId){
    this->courseId = courseId;
}
void Course::setRegcount(const int Regcount){
    this->Regcount = Regcount;
}
void Course::setCourseTitle(const string courseTitle){
    this->courseTitle = courseTitle;
}
