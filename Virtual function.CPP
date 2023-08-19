#include<iostream.h>
#include<conio.h>
class person{
  protected:
  char name[20];
  public:
  void getname(){
    cout<<"Enter your name: "<<endl;
    cin>>name;
    }
    virtual void print(){
      cout<<"Name of person is: "<<name<<endl;
    }
};
class student: public person{
  public:
  void print(){
    cout<<"Name of student is: "<<name;
  }
};
void main(){
  clrscr();
  person*p,a;
  student s1;
  p=&a;
  p->getname();
  p->print();
  p=&s1;
  p->getname();
  p->print();
  getch();
}
Enter your name:
Ash                                                                             
Name of person is: Ash                                                          
Enter your name:                                                                
Arhaan                                                                          
Name of student is: Arhaan                                                      
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
