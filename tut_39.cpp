#include<iostream>
using namespace std;
class student{
   protected :
      int roll_number;
   public :
      void set_roll_number(int);
      void get_roll_number(void);
};
void student :: set_roll_number(int r){   
   roll_number = r; 
}
void student :: get_roll_number(void){
   cout<<"Student roll is : "<<roll_number<<endl;
}
class Exam : public student{
   protected :
      float math;
      float physics;
   public :
      void set_number(float, float);
      void get_number();
};
void Exam ::set_number(float m1, float ph1){
   math = m1;
   physics = ph1;
}
void Exam ::get_number(void){
   cout<<"math mark is :"<<math<<endl;
   cout<<"Physics mark is :"<<physics<<endl;
}

class results : public Exam{
   protected:
    float percentage;
   public:
      void display_results(void){
      get_roll_number();
      get_number();
      cout<<"your percentage is : "<<((math + physics)/2)<<"%"<<endl;
   }
};
int main(){
   results pranto;
   pranto.set_roll_number(405);
   pranto.set_number(96.5 , 40.5);
   pranto.display_results();
return 0;
}