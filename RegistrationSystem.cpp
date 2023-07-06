

#include <stdio.h>
#include "RegistrationSystem.h"

RegistrationSystem::RegistrationSystem() : size(0), head(NULL), courseSize(0), courseHead(NULL){}

RegistrationSystem::~RegistrationSystem(){
    while ( !isEmpty() )
        remove(1);
    while ( !isCourseEmpty() )
        removeCourse(1);

    }

void RegistrationSystem::addStudent(const int studentId,const string firstName, const string lastName){
    //if student already exists
    if(isStudentExists(studentId))
        cout<< "Student "<< studentId << " already exists" <<endl;
    else{
        if(getLength() == 0){
            insert(1, Student(studentId, firstName, lastName));
        }
        else{
            insert(insertToWhere(studentId), Student(studentId, firstName, lastName));
        }
        cout<<"Student "<< studentId << " has been added"<<endl;
    }
}
void RegistrationSystem::deleteStudent(const int studentId){
    if(!isStudentExists(studentId))
        cout<< "Student "<< studentId << " does not exist"<< endl;
    else{
        int index = findIndex(studentId);
        StudentNode* temp = find(index);
        
        temp->stud.RemoveAllCourses();
        remove(index);
        
        cout<<"Student "<< studentId <<" has been deleted" << endl;
    }
}

void RegistrationSystem::addCourse(const int studentId, const int courseId, const string courseTitle){
    
    if(!isStudentExists(studentId))
        cout<< "Student "<< studentId << " does not exist"<< endl;
    else{
        
        if(iscourseExists(courseId, courseTitle)){
            int index = findIndex(studentId);
            StudentNode* temp = find(index);
            
            if((temp->stud).isCourseExist(courseId))
                cout<< "Student "<< studentId << " is already enrolled in course "<< courseId << endl;
            else{
                (temp->stud).StudentAddCourse(courseId, courseTitle);
                int cindex = courseIndex(courseId);
                courseDB* tt = findCourse(cindex);
                tt->crsList.setRegcount(tt->crsList.getRegcount() + 1);
                cout<<"Course "<< courseId << " has been added to student "<< studentId << endl;
            }
        }
        else if (isCourseEmpty() || !iscourseExists(courseId)){
            if (getCoursesLength() == 0){
                insertCourse(1, Course(courseId, courseTitle));
            }
            else{
                insertCourse(insertCourseToWhere(courseId), Course(courseId, courseTitle));
            }
            int index = findIndex(studentId);
            StudentNode* temp = find(index);
            
            (temp->stud).StudentAddCourse(courseId, courseTitle);
            int cindex = courseIndex(courseId);
            courseDB* tt = findCourse(cindex);
            tt->crsList.setRegcount(tt->crsList.getRegcount() + 1);
            cout<<"Course "<< courseId << " has been added to student "<< studentId << endl;
            
        }
        else{
            cout<<"Course "<< courseId << " already exists with another name"<< endl;
        }
    }
}

void RegistrationSystem::withdrawCourse(const int studentId, const int courseId){
    if(!isStudentExists(studentId))
        cout<<"Student "<< studentId <<" does not exist"<<endl;
    else{
        int index = findIndex(studentId);
        StudentNode* stud = find(index);
        
        if(!((stud->stud).isCourseExist(courseId)))
            cout<< "Student "<< studentId << " is not enrolled in course "<< courseId << endl;
        else{
            stud->stud.StudentRemoveCourse(courseId);
            int cindex = courseIndex(courseId);
            courseDB* tt = findCourse(cindex);
            tt->crsList.setRegcount(tt->crsList.getRegcount() - 1);
            if(tt->crsList.getRegcount() == 0){
                removeCourse(cindex);
            }
            cout<< "Student "<< studentId << " has been withdrawn from course "<< courseId <<endl;
        }
    }
    
}
void RegistrationSystem::cancelCourse(const int courseId){
    bool courseExists = false;
       for (StudentNode* temp = head; temp != NULL; temp = temp->next) {
           if ((temp->stud).isCourseExist(courseId)) {
               (temp->stud).StudentRemoveCourse(courseId);
               courseExists = true;
           }
       }
       if (!courseExists) {
           removeZeroRegCount();
           cout << "Course " << courseId << " does not exist" << endl;
       } else {
           int cindex = courseIndex(courseId);
           removeCourse(cindex);
           cout << "Course " << courseId << " has been cancelled" << endl;
       }
    
}
void RegistrationSystem::showStudent(const int studentId){
    if(!isStudentExists(studentId))
        cout<< "Student "<< studentId <<" does not exist" << endl;
    else{
        cout << "Student id " << "First name " << "Last name" << endl;
        int index = findIndex(studentId);
        StudentNode* temp = find(index);
        cout<< (temp->stud).getStudentId()<< " " << (temp->stud).getFirstName() << " " <<(temp->stud).getLastName() <<endl;
        
        temp->stud.showCourses();
        
    }
}

void RegistrationSystem::showCourse(const int courseId){
    bool isExist = false;
    string courseName = "";

    for (StudentNode* cur = head; cur != NULL; cur = cur->next) {
        if ( cur->stud.isCourseExist(courseId)) {
            isExist = true;
        }
    }

    if (!isExist)
        cout << "Course " << courseId << " does not exist" << endl;
    else {
        int cindex = courseIndex(courseId);
        courseDB* tt = findCourse(cindex);
        
        
        cout << "Course id " << "Course name" << endl;
        cout << courseId <<" " << tt->crsList.getCourseTitle() << endl;
        cout << "Student id " << "First name " << "Last name" << endl;

        //print students
        for (StudentNode* cur = head; cur != NULL; cur = cur->next) {
            if ( cur->stud.isCourseExist(courseId, courseName) ) {
                cout << cur->stud.getStudentId() << " "<< cur->stud.getFirstName() <<" " << cur->stud.getLastName() << endl;
            }
        }
    }
}
void RegistrationSystem::showAllStudents(){
    if(size == 0)
        cout<< "There are no students in the system"<<endl;
    else{
        cout<<"Student id "<<"First name "<<"Last name"<< endl;
        for(StudentNode* temp = head; temp != NULL; temp = temp->next){
            int index = findIndex((temp->stud).getStudentId());
            StudentNode* student = find(index);
            
            cout<< (student->stud).getStudentId() << " "<< (student->stud).getFirstName()<< " "<< (student->stud).getLastName()<< endl;
            
            (student->stud).showCourses();
            
        }
    }
}

int RegistrationSystem::getLength() const{
    return size;
}
bool RegistrationSystem::isEmpty() const{
    return  size == 0;
}
bool RegistrationSystem::isStudentExists(const int studentId){
    bool sig = false;
    
    for(StudentNode* temp = head; temp != NULL; temp = temp->next){
        if((temp->stud).getStudentId() == studentId){
            sig = true;
            break;
        }
    }
    return sig;
}

void RegistrationSystem::insert(const int index, Student newStudent){
    int newLength = getLength() + 1;
    
    if(index >=1 && index <= newLength){
        
        StudentNode* newStd = new StudentNode;
        size = newLength;
        newStd->stud = newStudent;
        
        if(newLength == 1){
            newStd->next = head;
            newStd->prev = NULL;
            head = newStd;
        }
        else if(index == 1){
            newStd->next = head;
            newStd->prev = NULL;
            head = newStd;
            (newStd->next)->prev = newStd;
            
        }
        else{
            StudentNode* prevNode = find(index - 1);
            newStd->next = prevNode->next;
            prevNode->next = newStd;
            newStd->prev = prevNode;
            
            if(index != newLength)
                (newStd->next)->prev = newStd;
        }
        
    }
}
void RegistrationSystem::remove(const int index){
    if (index >= 1 && index <= getLength()) {
           StudentNode* cur = find(index);
           if (index == 1) {
               head = cur->next;
               if (head) head->prev = NULL;
           }
           else {
               if (cur->prev) cur->prev->next = cur->next;
               if (cur->next) cur->next->prev = cur->prev;
           }
           delete cur;
           size--;
       }
}

RegistrationSystem::StudentNode* RegistrationSystem::find(const int index) const{
    if(index < 1 || index > getLength())
        return NULL;
    else{
        StudentNode* cur = head;
        
        for(int skip = 1; skip < index; skip++)
            cur = cur->next;
        return  cur;
    }
}
int RegistrationSystem::findIndex(const int studentId) const{
    int index = 1;
    for(StudentNode* temp = head; temp != NULL; temp = temp->next){
        if((temp->stud).getStudentId() == studentId){
            return index;
        }
        index++;
    }
    return -1;
}

int RegistrationSystem::insertToWhere(const int id) const{
    if(size >= 1){
        int index = 1;
        for(StudentNode* temp = head; temp != NULL; temp = temp->next){
            if((temp->stud).getStudentId() >= id){
                return  index;
            }
            index++;
        }
        return index;
    }
    return -1;
}

void RegistrationSystem::reverse() {
    StudentNode* temp = NULL;
    StudentNode* current = head;

    while (current != NULL) {
        temp = current->prev;
        current->prev = current->next;
        current->next = temp;
        current = current->prev;
    }

    if (temp != NULL) {
        head = temp->prev;
    }
}

//course data base linked list functions

int RegistrationSystem::getCoursesLength() const{
    return courseSize;
}
bool RegistrationSystem::isCourseEmpty() const{
    return courseSize == 0;
}
bool RegistrationSystem::iscourseExists(const int courseID){
    
    for(courseDB* temp = courseHead; temp !=NULL; temp = temp->Cnext){
        if(temp->crsList.getCourseId() == courseID)
            return true;
    }
    return false;
}
bool RegistrationSystem::iscourseExists(const int courseID, string courseTitle){
    bool sig = false;
  //  courseTitle = "";
    
    for (courseDB* temp = courseHead; temp != NULL; temp = temp->Cnext) {
        if ((temp->crsList).getCourseId() == courseID && (temp->crsList).getCourseTitle() == courseTitle) {
            sig = true;
            //courseTitle = temp->course.getCourseTitle();
            return sig;
        }
    }

    return sig;
}
void RegistrationSystem::insertCourse(const int index, Course newCourse){
    int newLength = getCoursesLength() + 1;
    if(index >= 1 && index <= newLength){
        courseDB* newCrs = new courseDB;
        courseSize = newLength;
        newCrs->crsList = newCourse;
        
        if(newLength == 1){
            newCrs->Cnext = courseHead;
            courseHead = newCrs;
        }
        
        else if(index == 1){
            newCrs->Cnext = courseHead;
            courseHead = newCrs;
        }
        else{
            courseDB* prev = findCourse(index - 1);
            newCrs->Cnext = prev->Cnext;
            prev->Cnext = newCrs;
        }
    }
}
void RegistrationSystem::removeCourse(const int index){
    
    if(index >= 1 && index <= getCoursesLength()){
           courseDB* cur = findCourse(index);
           if(index == 1){
               cur = courseHead;
               courseHead = cur->Cnext;
               delete cur;
           }
           else {
               courseDB* prev = findCourse(index-1);
               cur = prev->Cnext;
               prev->Cnext = cur->Cnext;
               delete cur;
               if(index == getCoursesLength()){
                   prev->Cnext = NULL; // set the next pointer of the previous node to NULL
               }
           }
        courseSize--;
       }
}
RegistrationSystem::courseDB* RegistrationSystem::findCourse(const int index) const{
    if(index < 1 || index > getCoursesLength())
        return  NULL;
    else{
        courseDB* cur = courseHead;
        for(int skip = 1; skip < index; skip++)
            cur = cur->Cnext;
        return cur;
    }
}
int RegistrationSystem::courseIndex(const int courseId) const{
    int index = 1;
    for(courseDB* temp = courseHead; temp != NULL; temp = temp->Cnext){
        if((temp->crsList).getCourseId() == courseId){
            return index;
        }
        index++;
    }
    return -1;
}
int RegistrationSystem::insertCourseToWhere(const int id) const{
    if(courseSize >= 1){
        int index = 1;
        for(courseDB* temp = courseHead; temp != NULL; temp = temp->Cnext){
            if((temp->crsList).getCourseId() >= id){
                return  index;
            }
            index++;
        }
        return index;
    }
    return -1;
}
void RegistrationSystem::removeZeroRegCount(){
    if(courseSize >= 1){
        int index = 1;
        for(courseDB* temp = courseHead; temp != NULL; temp = temp->Cnext){
            if((temp->crsList).getRegcount()== 0){
                removeCourse(index);
            }
            index++;
        }
    }
}
