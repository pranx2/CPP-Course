/**
 * A program to demonstrate multiple inheritance and virtual base class in C++.
 *
 * This program defines a base class 'student' with a roll number, a class 'test' 
 * that inherits from 'student' and adds math and physics marks, a class 'sports' 
 * that also inherits from 'student' and adds a sports score, and a class 'result' 
 * that inherits from both 'test' and 'sports' to display the total score.
 *
 * @class student The base class representing a student with a roll number.
 * @class test A class inheriting from 'student' and adding math and physics marks.
 * @class sports A class inheriting from 'student' and adding a sports score.
 */
#include<iostream>
using namespace std;

/*
   student -> test 
   student -> score
   test  + score - > results 
*/
   /**
    * A class representing a student with a roll number.
    */
   class student {
      protected  :
         int roll_number;
      public : 
          void set_roll_number( int a ){
            roll_number = a;
          }
          void show_roll(void){
            cout<<"student roll is : "<<roll_number<<endl;
          }
   };
   /**
    * A class representing a test result for a student.
    * Inherits from the student class.
    */
   class test : virtual public student {
         protected :
            int math;
            int physics;
         public:  
            void get_marks( float m1, float m2){
               math = m1;
               physics = m2;
            }
            void show_marks(void){
                  cout<<"Student mark is : "<<endl
                      <<" 1.math : "<<math<<endl
                      <<" 2.physics : "<<physics<<endl;
            }
   };
   /**
    * A class representing sports information of a student.
    * Inherits from the base class student.
    */
   class sports : virtual public student{
      protected :
         float score;
      public :
         void Set_score(float x){
            score = x;
         }
         void show_score (void){
               cout<<"Score is : "<<score<<endl;
   }
   };
   /**
    * A class that represents the result of a test and sports performance.
    * It inherits from the 'test' and 'sports' classes.
    */
   class result : public test , public sports {
      protected :
         float total;
      public : 
         void display ( void ){
               total = math + physics + score;
               show_roll();
               show_marks();
               show_score();
               cout<<"Your total score is : "<<total<<" out of 210."<<endl;
         }
      
   };

int main(){
   result pranto;
   pranto.set_roll_number( 4 );
   pranto.get_marks( 78, 98);
   pranto.Set_score(8);
   pranto.display();
return 0;
}