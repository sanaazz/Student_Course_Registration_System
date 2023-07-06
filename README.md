# Student Course Registration System


In this script, we implemented a simple registration system using linked lists. The registration system stores information about students and courses. For each student, the system stores an id, first name, last name, and a list of her/his course enrollments. Each course is represented by its id and title. This system uses a sorted linear doubly linked list with no dummy head node to store the students, and for each student, a sorted linear singly linked list with no dummy head node to store the course enrollments for that student. The students are stored in ascending order of their ids. The courses are stored in ascending order of their ids.
The registration system has the following functionalities; the details of these functionalities are given below:
1. Add a student
2. Delete a student
3. Add a course for a student
4. Withdraw a student from a course
5. Cancel a course
6. Show detailed information about a particular student
7. Show detailed information about a particular course
8. Show all students

## Add a student
The registration system will allow to add a new student indicating her/his student id, first name, and last name. Since the student ids are unique positive integers, the system should check whether or not the specified student id already exists (i.e., whether or not it is the id of an existing student). If the student id exists, it should not allow the operation and display a warning message. The list must remain sorted by student id after this operation.

## Delete a student
The registration system will allow to delete an existing student indicating her/his student id. If the student does not exist (i.e., if there is no student with the specified id), the system should display a warning message. So that you know, this operation will also drop all courses in which the student was enrolled.

## Add a course for a student
The registration system will allow to add a new course for a particular student. For that, the student id, the course id, and the course name have to be specified. The system should check whether or not this student exists; if she/he does not, it should prevent adding a course and display a warning message. If the student exists and is not already enrolled in this course, the given course is added to the student’s course list. The system should check whether or not this course id exists; if it exists, it should prevent adding this course and display a warning message. The courses are also stored and sorted.

## Withdraw a student from a course
The registration system will allow the deletion of an existing course indicating its course id from a student’s course enrollment list. If the student does not exist (i.e., if there is no student with the specified id) or the student is not enrolled in this course (i.e., if there is no course with the specified id), the system should display a warning message.

## Cancel a course
The registration system will allow deleting an existing course indicating its course id. So as you know, this operation will remove the course from the course enrollment lists for all students. The system should display a warning message if the course does not exist (i.e. if there is no course with the specified id).

## Show detailed information about a particular student
The registration system will allow to specify a student id and display detailed information about that particular student. This information includes the student id, the student name, and the list of courses enrolled by this student, including the course id and the course name for each course. The courses will be displayed in ascending order of their ids. If the student does not exist (i.e., if there is no student with the specified student id), the system should display a warning message.

## Show detailed information about a particular course
The registration system will allow you to specify a course id and display detailed information about that particular course. This information includes the course id, the course name, and the list of students enrolled in this course, including the student id and the student name for each student. The students will be displayed in ascending order of their ids. The system should display a warning message if the course does not exist (i.e. if there is no course with the specified course id).

## Show the list of all students
The registration system will allow to display a list of all the students. This list includes the student id, the student name, and the courses each student enrolls in. The students will be displayed in ascending order of their ids. Also, the students will be displayed in ascending order of their ids for each student.
