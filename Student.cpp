
#include <stdio.h>
#include "Student.h"

Student::Student(const int studentId , const string firstName, const string lastName): size(0), head(NULL){
    this->studentId = studentId;
    this->firstName = firstName;
    this->lastName = lastName;
}

Student::Student(const Student &otherStudent){
    this->studentId = otherStudent.studentId;
    this->firstName = otherStudent.firstName;
    this->lastName = otherStudent.lastName;
}

Student::~Student(){
    while (!isEmpty())
        remove(1);
}

int Student::getStudentId() const{
    return studentId;
}

string Student::getFirstName() const{
    return firstName;
}

string Student::getLastName() const{
    return lastName;
}

void Student::StudentAddCourse(const int courseId, const string courseTitle){
    //int idx = getLength() + 1;
    if((!isCourseExist(courseId))){
        if(getLength() == 0)
            insert(1, Course(courseId, courseTitle));
        
        else
            insert(insertToWhere(courseId), Course(courseId, courseTitle));
        
    }
}
void Student::StudentRemoveCourse(const int courseId){
    CourseNode* prev = NULL;
        for (CourseNode* temp = head; temp != NULL; temp = temp->next) {
            if ((temp->course).getCourseId() == courseId) {
                if (prev == NULL) {
                    head = temp->next;
                } else {
                    prev->next = temp->next;
                }
                delete temp;
                size--;
                return;
            }
            prev = temp;
        }
}
void Student::RemoveAllCourses(){
    while (!isEmpty()) {
        remove(1);
    }
}

void Student::showCourses() const{
    if(size > 0){
        cout << "Course id "<<"Course name"<<endl;
        
        for(CourseNode* temp = head; temp != NULL; temp = temp->next){
            cout<< temp->course.getCourseId() <<" "<< temp->course.getCourseTitle()<< endl;
        }
    }
}
//single linked list implementation
int Student::getLength() const{
    return size;
}
bool Student::isEmpty() const{
    return size == 0;
}
bool Student::isCourseExist(const int courseId) const{
    for (CourseNode* temp = head; temp != NULL; temp = temp->next) {
            if ((temp->course).getCourseId() == courseId) {
                return true;
            }
        }
        return false;
}
bool Student::isCourseExist(const int courseId, string &courseTitle){
    bool sig = false;
    courseTitle = "";
    
    for (CourseNode* temp = head; temp != NULL; temp = temp->next) {
        if ((temp->course).getCourseId() == courseId) {
            sig = true;
            courseTitle = temp->course.getCourseTitle();
            return sig;
        }
    }

    return sig;
}
void Student::insert(const int index, Course newItem){
    int newLength = getLength() + 1;
    if(index >= 1 && index <= newLength){
        CourseNode* newCrs = new CourseNode;
        size = newLength;
        newCrs->course = newItem;
        
        if(newLength == 1){
            newCrs->next = head;
            head = newCrs;
        }
        
        else if(index == 1){
            newCrs->next = head;
            head = newCrs;
        }
        else{
            CourseNode* prev = find(index - 1);
            newCrs->next = prev->next;
            prev->next = newCrs;
        }
    }
}
void Student::remove(const int index){
    
    if(index >= 1 && index <= getLength()){
           CourseNode* cur = find(index);
           if(index == 1){
               cur = head;
               head = cur->next;
               delete cur;
           }
           else {
               CourseNode* prev = find(index-1);
               cur = prev->next;
               prev->next = cur->next;
               delete cur;
               if(index == getLength()){
                   prev->next = NULL; // set the next pointer of the previous node to NULL
               }
           }
           size--;
       }
}

Student::CourseNode* Student::find(const int index) const{
    if(index < 1 || index > getLength())
        return  NULL;
    else{
        CourseNode* cur = head;
        for(int skip = 1; skip < index; skip++)
            cur = cur->next;
        return cur;
    }
}

int Student::findIndex(const int courseId) const{
    int index = 1;
    for(CourseNode* temp = head; temp != NULL; temp = temp->next){
        if((temp->course).getCourseId() == courseId){
            return index;
        }
        index++;
    }
    return -1;
}
int Student::insertToWhere(const int id) const{
    if(size >= 1){
        int index = 1;
        for(CourseNode* temp = head; temp != NULL; temp = temp->next){
            if((temp->course).getCourseId() >= id){
                return  index;
            }
            index++;
        }
        return index;
    }
    return -1;
}
