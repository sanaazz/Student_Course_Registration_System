

#include <iostream>
#include "RegistrationSystem.h"

int main(int argc, const char * argv[]) {
    /*
    RegistrationSystem rs;

    rs.showCourse(430);
    rs.showAllStudents();
    cout << endl;
    
    rs.addCourse(1000, 333, "CS33");
    rs.addStudent(2000, "Kemal", "Ak");
    rs.addStudent(1000, "Kl", "Ak");
    rs.addCourse(2000, 200, "CS200");
    rs.addCourse(2000, 400, "CS400");
    rs.addCourse(2000, 300, "CS300");
    rs.addCourse(2000, 100, "CS100");
    rs.addCourse(1000, 100, "CS100");
    rs.showCourse(200);
    cout<<endl;
    cout<<endl;
   
    rs.showStudent(1000);
    cout<<endl;
    cout<<endl;
    rs.showAllStudents();
    cout<<endl;
    cout<<endl;
    rs.deleteStudent(1000);
    rs.showCourse(100);
    cout<<endl;
    cout<<endl;
    rs.cancelCourse(100);
    rs.showStudent(1000);
    cout<<endl;
    cout<<endl;
    rs.showStudent(2000);
     */
    /*
    rs.addStudent(1000, "Nuri", "Yazici");
    rs.addStudent(4000, "Cengiz", "Erdem");
    rs.addStudent(3000, "Osman", "Top");
    rs.addStudent(4000, "Can", "Gezici");
    rs.addStudent(6000, "Can", "Gezici");
    rs.addStudent(5000, "Ali", "Akdere");
    rs.addStudent(7000, "Burcin", "Temiz");
    rs.addStudent(900, "Burcin", "Temiz");
    
    rs.addCourse(3000, 524, "CS524");
    rs.deleteStudent(3000);
   
    rs.deleteStudent(2000);
    rs.deleteStudent(1000);
    rs.deleteStudent(4000);
    rs.deleteStudent(6000);
    rs.deleteStudent(5000);
    rs.deleteStudent(7000);
    rs.deleteStudent(900);
   */
    /*
    rs.showAllStudents();
    rs.addStudent(2500, "kkk", "mmm");
    cout << endl;
    
    rs.showAllStudents();
    cout << endl;
   
    rs.addCourse(2000, 555, "CS555");
    rs.addCourse(2000, 540, "CS540");
    rs.addCourse(2000, 513, "CS513");
    rs.addCourse(2000, 524, "CS524");
    
    rs.addCourse(3000, 524, "CS524");
    rs.addCourse(3000, 540, "CS540");
    
    rs.addCourse(1000, 540, "CS540");
    rs.addCourse(1000, 524, "CS524");
    
    rs.addCourse(4000, 524, "CS524");
    rs.addCourse(4000, 510, "CS510");
    rs.addCourse(4000, 540, "CS540");
    rs.addCourse(4000, 513, "CS513");
    
    rs.addCourse(5000, 510, "CS510");
    rs.addCourse(5000, 510, "CS510");
    rs.addCourse(5000, 513, "CS513");
    rs.addCourse(5000, 540, "CS540");
    rs.addCourse(5000, 510, "CSw510");
    
    rs.addCourse(6000, 540, "CS540");
    
    rs.addCourse(7000, 510, "CS510");
    rs.addCourse(7000, 513, "CS513");
    rs.addCourse(7000, 540, "CS540");
    
    rs.addCourse(3000, 524, "CS524");
    cout << endl;
    
    rs.deleteStudent(5000);
    rs.deleteStudent(5000);
    cout << endl;
  
    rs.showStudent(1000);
    rs.showStudent(3000);
    rs.showStudent(5000);
    cout << endl;
   
    rs.showAllStudents();
    cout << endl;
    
    rs.withdrawCourse(3000, 524);
    rs.withdrawCourse(2000, 555);
    rs.withdrawCourse(2000, 550);
    rs.withdrawCourse(10000, 510);
    cout << endl;
  
    rs.cancelCourse(540);
    rs.cancelCourse(201);
    cout << endl;
    
    
    rs.showCourse(524);
    rs.showCourse(540);
    rs.showStudent(7000);
    cout << endl;
    
    rs.deleteStudent(3000);
    cout << endl;
    
    rs.deleteStudent(7000);
    cout << endl;
    
    rs.showStudent(3000);
    cout << endl;
    
    rs.showAllStudents();
    cout << endl;
     

         rs.addStudent(2000, "Kemal", "Ak");
         rs.addStudent(1000, "Nuri", "Yazici");
         rs.addStudent(4000, "Cengiz", "Erdem");
         rs.deleteStudent(4000);
         rs.deleteStudent(2000);
         rs.deleteStudent(2000);
         rs.deleteStudent(1000);
         rs.addStudent(2000, "Kemal", "Ak");
         rs.addStudent(1000, "Nuri", "Yazici");
         rs.addStudent(4000, "Cengiz", "Erdem");
         rs.addStudent(2000, "Kemal", "Ak");
         rs.addStudent(1000, "Nuri", "Yazici");
         rs.addStudent(4000, "Cengiz", "Erdem");
         rs.addStudent(900, "Cengiz", "Erdem");
         rs.addStudent(800, "Cengiz", "Erdem");
         rs.addStudent(5000, "Cengiz", "Erdem");
         rs.deleteStudent(2000);
         rs.deleteStudent(2000);
         rs.deleteStudent(5000);
         rs.deleteStudent(4000);
         rs.deleteStudent(2000);

     rs.addStudent(1000, "Kemal", "Ak");
         rs.addCourse(1000, 555, "CS555");
         rs.addCourse(1000, 540, "CS540");
         rs.addCourse(1000, 540, "CS540");
         rs.addCourse(1000, 513, "CS513");
         rs.withdrawCourse(1000, 540);
         rs.withdrawCourse(1000, 513);
         rs.withdrawCourse(1000, 513);
         rs.withdrawCourse(1000, 555);
         rs.addCourse(1000, 555, "CS555");
         rs.addCourse(1000, 540, "CS540");
         rs.addCourse(1000, 513, "CS513");
         rs.addCourse(1000, 555, "CS555");
         rs.addCourse(1000, 540, "CS540");
         rs.addCourse(1000, 513, "CS513");
         rs.withdrawCourse(1000, 540);
         rs.withdrawCourse(1000, 513);
         rs.withdrawCourse(1000, 555);
         rs.withdrawCourse(1000, 540);
         rs.withdrawCourse(1000, 513);
         rs.withdrawCourse(1000, 555);
     
    //test3
    
    
        rs.addStudent(2000, "Kemal", "Ak");
         rs.addStudent(1000, "Nuri", "Yazici");
         rs.addStudent(4000, "Cengiz", "Erdem");

         rs.addCourse(2000, 555, "CS555");
         rs.addCourse(2000, 555, "CS555");
         rs.addCourse(2000, 540, "CS540");

         rs.addCourse(1000, 555, "CS555");
         rs.addCourse(1000, 520, "CS520");
         rs.addCourse(1000, 540, "CS540");

         rs.addCourse(4000, 540, "CSS540");
         rs.addCourse(4000, 540, "CS540");

         rs.withdrawCourse(4000, 520);
         rs.withdrawCourse(1000, 520);
         rs.cancelCourse(520);
         rs.withdrawCourse(2000, 540);
         rs.withdrawCourse(1000, 540);
         rs.withdrawCourse(4000, 540);


         rs.addCourse(6000, 540, "CS540");
         rs.addCourse(4000, 540, "CSS540");
         rs.addCourse(4000, 540, "CS540");
         rs.addCourse(1000, 540, "CSS540");

         rs.cancelCourse(540);
         rs.withdrawCourse(1000, 540);
         rs.withdrawCourse(1000, 520);
         rs.withdrawCourse(1000, 555);
     
     
    
         rs.showStudent(2000);
         rs.addStudent(2000, "Kemal", "Ak");
         rs.showStudent(2000);

         rs.addStudent(1000, "Nuri", "Yazici");
         rs.addStudent(4000, "Cengiz", "Erdem");

         rs.showAllStudents();

         rs.showCourse(555);
         rs.addCourse(2000, 555, "CS555");
         rs.addCourse(2000, 540, "CS540");
         rs.showCourse(555);

         rs.showAllStudents();

         rs.addCourse(1000, 555, "CS555");
         rs.addCourse(1000, 540, "CS540");
         rs.withdrawCourse(1000, 510);
         rs.withdrawCourse(1000, 540);
         rs.showCourse(540);
         rs.showStudent(1000);

         rs.cancelCourse(540);
         rs.showCourse(540);

         rs.showAllStudents();
     */
    
    RegistrationSystem rs;


    rs.addStudent(1, "b1", "b1");
    rs.addStudent(2, "b2", "b2");
    rs.addStudent(3, "b3", "b3");
    rs.addStudent(4, "b4", "b4");
  /*
    rs.deleteStudent(1);
    rs.deleteStudent(2);
    rs.deleteStudent(3);
    rs.deleteStudent(4);
  

    rs.addStudent(4, "b4", "b4");
    rs.addStudent(3, "b3", "b3");
    rs.addStudent(2, "b2", "b2");
    rs.addStudent(1, "b1", "b1");
    
    rs.deleteStudent(4);
    rs.deleteStudent(4);
    rs.deleteStudent(3);
    rs.deleteStudent(3);
    rs.deleteStudent(2);
    rs.deleteStudent(2);
    rs.deleteStudent(1);
    rs.deleteStudent(1);

    rs.addStudent(1, "b1", "b1");
    rs.addStudent(2, "b2", "b2");
    rs.addStudent(3, "b3", "b3");
    rs.addStudent(4, "b4", "b4");
    
   
    rs.addStudent(4, "b4", "b4");
    rs.addStudent(3, "b3", "b3");
    rs.addStudent(2, "b2", "b2");
    rs.addStudent(1, "b1", "b1");
    
    rs.addCourse(1, 1, "CS1");
    rs.addCourse(2, 1, "CS1");
    rs.addCourse(3, 1, "CS1");
    rs.addCourse(4, 1, "CS1");
    rs.addCourse(1, 1, "CS1");
    rs.addCourse(2, 1, "CS1");
    rs.addCourse(3, 1, "CS1");
    rs.addCourse(4, 1, "CS1");
    
    rs.showAllStudents();
    
   
    rs.deleteStudent(1);
    rs.deleteStudent(2);
    rs.deleteStudent(3);
    rs.showCourse(1);
    rs.deleteStudent(4);
    
    rs.showCourse(1);
    
    

    rs.addStudent(4, "b4", "b4");
    rs.addStudent(3, "b3", "b3");
    rs.addStudent(2, "b2", "b2");
    rs.addStudent(1, "b1", "b1");
    
    rs.showAllStudents();
    rs.showStudent(1);
    
    rs.addCourse(4, 1, "CS1");
    rs.addCourse(4, 1, "CS1");
    rs.addCourse(1, 1, "CS1");
    rs.addCourse(1, 1, "CS1");
    rs.addCourse(2, 1, "CSS1");
    rs.showCourse(1);
    rs.showStudent(2);
    rs.addCourse(2, 2, "CS2");
    rs.addCourse(4, 2, "CS1");
    rs.addCourse(4, 3, "CS3");
    rs.addCourse(4, 4, "CS4");
    rs.addCourse(4, 4, "CSS1");
    
    
    rs.showCourse(4);
    rs.showCourse(3);
    
    rs.cancelCourse(3);
    rs.cancelCourse(4);
    rs.cancelCourse(1);
    
    rs.showAllStudents();
    
    rs.cancelCourse(2);
    rs.showAllStudents();
    rs.withdrawCourse(1, 2);
    rs.showCourse(2);
    */
    rs.showAllStudents();
   // rs.reverse();
    rs.showAllStudents();
   
    return 0;
}
