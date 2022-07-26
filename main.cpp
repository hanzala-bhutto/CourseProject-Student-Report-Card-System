#include<iostream>
#include<string>
#include<fstream>
#include<conio.h>
#include "HeaderFiles/tabulate.hpp"

using namespace tabulate;
using namespace std;

void Intro();

// Hybrid Inheritance       (Multiple + Hierarchical)
// class Result extends class FirstYear , SecondYear   (Multiple Inheritance)
// class FirstYear, SecondYear extend Result           (Hierarchical Inheritance) 

class Student{
    protected:
        string Name;
        string Father_Name;
        string Date_Of_Birth;
        string Address;
        string Contact_Number;
    public:
        Student(){}
        Student(string name, string fathername, string dateofbirth, string address, string contactnumber){
            Name = name;
            Father_Name = fathername;
            Date_Of_Birth = dateofbirth;
            Address = address;
            Contact_Number = contactnumber;
        }
        ~Student(){}
        
        void setStudentName(string name){Name = name;}
        string getStudentName(){return Name;}
        
        void setStudentFather_Name(string fathername){Father_Name = fathername;}
        string getStudentFather_Name(){return Father_Name;}

        void setStudentDateOfBirth(string dateofbirth){Date_Of_Birth = dateofbirth;}
        string getStudentDateOfBirth(){return Date_Of_Birth;}
        
        void setStudentAddress(string address){Address = address;}
        string getStudentAddress(){return Address;}

        void setStudentContact_Number(string contactnumber){Contact_Number = contactnumber;}
        string getStudentContact_Number(){return Contact_Number;}

// virtual functions

        virtual void ViewResult(){
            cout<<endl;
            cout<<"\t\t\t"<<"Student Name is............... "<<"\t"<<Name<<endl;
            cout<<"\t\t\t"<<"Student Father Name is........ "<<"\t"<<Father_Name<<endl;
            cout<<"\t\t\t"<<"Student Date Of Birth is...... "<<"\t"<<Date_Of_Birth<<endl;
            cout<<"\t\t\t"<<"Student Address is............ "<<"\t"<<Address<<endl;
            cout<<"\t\t\t"<<"Student Contact Number is..... "<<"\t"<<Contact_Number<<endl;
            cout<<endl;
        }
};


class FirstYear : virtual public Student{
    protected:
        string Enrollment;
        string Roll_Number_I;
        float MarksInMaths_I;
        float MarksInPhysics_I;
        float MarksInChemistry_I;
        float MarksInUrdu_I;
        float MarksInEnglish_I;
        float MarksInIslamiat;
        int TotalSubjects_I;
        float ObtainedMarks_I;
        float TotalMarks_I;
        float Percentage_I;
        string Grade_I;
    public:
//  constructor overloading
        FirstYear(){
            TotalSubjects_I = 6;
            TotalMarks_I = 550; 
        }
        FirstYear(string enroll, string rollno01, float maths1, float physics1, float chemistry1, float urdu1, float english1, float islamiat){
            Enrollment = enroll;
            Roll_Number_I = rollno01;
            MarksInMaths_I = maths1;
            MarksInPhysics_I = physics1;
            MarksInChemistry_I = chemistry1;
            MarksInUrdu_I = urdu1;
            MarksInEnglish_I = english1;
            MarksInIslamiat = islamiat;
            TotalSubjects_I = 6;
            TotalMarks_I = 550;
            CalculateTotalMarks();
            CalculatePercentage();
            CalculateGrade();
        }
        FirstYear(string name, string fathername, string dateofbirth, string address,string contactnumber, string enroll,string rollno01, float maths1, float physics1, float chemistry1, float urdu1, float english1, float islamiat) : Student(name, fathername, dateofbirth, address, contactnumber){
            Enrollment = enroll;
            Roll_Number_I = rollno01;
            MarksInMaths_I = maths1;
            MarksInPhysics_I = physics1;
            MarksInChemistry_I = chemistry1;
            MarksInUrdu_I = urdu1;
            MarksInEnglish_I = english1;
            MarksInIslamiat = islamiat;
            TotalSubjects_I = 6;
            TotalMarks_I = 550;
            CalculateTotalMarks();
            CalculatePercentage();
            CalculateGrade();
        }
        ~FirstYear(){}

        void setEnrollment(string enroll){ Enrollment = enroll ;}
        string getEnrollment(){return Enrollment;}

        void setRoll_Number_I(string rollno01){ Roll_Number_I = rollno01 ;}
        string getRoll_Number_I(){return Roll_Number_I;}

        void setMarksInMaths_I(float maths1){ MarksInMaths_I = maths1;}
        float getMarksInMaths_I(){return MarksInMaths_I;}

        void setMarksInPhysics_I(float physics1){ MarksInPhysics_I = physics1;}
        float getMarksInPhysics_I(){return MarksInPhysics_I;}
        
        void setMarksInChemistry_I(float chemistry1){ MarksInChemistry_I = chemistry1;}
        float getMarksInChemistry_I(){return MarksInChemistry_I;}
        
        void setMarksInUrdu_I(float urdu1){ MarksInUrdu_I = urdu1;}
        float getMarksInUrdu_I(){return MarksInUrdu_I;}
        
        void setMarksInEnglish_I(float english1){ MarksInEnglish_I = english1;}
        float getMarksInEnglish_I(){return MarksInEnglish_I;}
        
        void setMarksInIslamiat(float islamiat){ MarksInIslamiat = islamiat;}
        float getMarksInIslamiat(){return MarksInIslamiat;}

        float getObtainedMarks_I(){return ObtainedMarks_I;}

        float getPercentage_I(){return Percentage_I;}

        string getGrade_I(){return Grade_I;}

// method overriding

        void CalculateTotalMarks(){
            ObtainedMarks_I = (MarksInMaths_I + MarksInPhysics_I + MarksInChemistry_I + MarksInUrdu_I + MarksInEnglish_I + MarksInIslamiat); 
        }
        void CalculatePercentage(){
            Percentage_I = (ObtainedMarks_I/TotalMarks_I) * 100;
        }
        void CalculateGrade(){
                 if(Percentage_I<33){
                    Grade_I ="F";
                    }
                 else if(Percentage_I<=40){
                    Grade_I ="E";
                    }
                 else if(Percentage_I<=50){
                    Grade_I ="D";
                    }
                 else if(Percentage_I<=60){
                    Grade_I ="C";
                    }
                 else if(Percentage_I<=70){
                    Grade_I ="B";
                    }
                 else if(Percentage_I<=80){
                    Grade_I ="A";
                    }
                 else if(Percentage_I>80){
                    Grade_I = "A+";
                    }
            }

        virtual void ViewResult(){
            cout<<endl;
            cout<<"\t\t\t"<<"Enrollment number is.......... "<<"\t"<<Enrollment<<endl;
            cout<<"\t\t\t"<<"Roll number I is.............. "<<"\t"<<Roll_Number_I<<endl;
            cout<<"\t\t\t"<<"Marks in Maths I are.......... "<<"\t"<<MarksInMaths_I<<endl;
            cout<<"\t\t\t"<<"Marks in Physics I are........ "<<"\t"<<MarksInPhysics_I<<endl;
            cout<<"\t\t\t"<<"Marks in Chemistry I are...... "<<"\t"<<MarksInChemistry_I<<endl;
            cout<<"\t\t\t"<<"Marks in Urdu I are........... "<<"\t"<<MarksInUrdu_I<<endl;
            cout<<"\t\t\t"<<"Marks in English I are........ "<<"\t"<<MarksInEnglish_I<<endl;
            cout<<"\t\t\t"<<"Marks in Islamiat are......... "<<"\t"<<MarksInIslamiat<<endl;
            cout<<"\t\t\t"<<"Obtained Marks in Part I are.. "<<"\t"<<ObtainedMarks_I<<endl;
            cout<<"\t\t\t"<<"Percentage in Part I is....... "<<"\t"<<Percentage_I<<endl;
            cout<<"\t\t\t"<<"Grade in Part I is............ "<<"\t"<<Grade_I<<endl;
            cout<<endl;

        }

};


class SecondYear : virtual public Student{
    protected:
        string Roll_Number_II;
        float MarksInMaths_II;
        float MarksInPhysics_II;
        float MarksInChemistry_II;
        float MarksInUrdu_II;
        float MarksInEnglish_II;
        float MarksInPakistanStudies;
        int TotalSubjects_II;
        float ObtainedMarks_II;
        float TotalMarks_II;
        float Percentage_II;
        string Grade_II;
    public:
        SecondYear(){
            TotalSubjects_II = 6; 
            TotalMarks_II = 550;
        }
        SecondYear(string rollno02, float maths2, float physics2, float chemistry2, float urdu2, float english2 , float pakstudies){
            Roll_Number_II = rollno02;
            MarksInMaths_II = maths2;
            MarksInPhysics_II = physics2;
            MarksInChemistry_II = chemistry2;
            MarksInUrdu_II = urdu2;
            MarksInEnglish_II = english2;
            MarksInPakistanStudies = pakstudies;
            TotalSubjects_II = 6; 
            TotalMarks_II = 550;
            CalculateTotalMarks();
            CalculatePercentage();
            CalculateGrade();
        }
        SecondYear(string name, string fathername, string dateofbirth, string address, string contactnumber, string rollno02, float maths2, float physics2, float chemistry2, float urdu2, float english2 , float pakstudies) : Student(name, fathername, dateofbirth, address, contactnumber) {
            Roll_Number_II = rollno02;
            MarksInMaths_II = maths2;
            MarksInPhysics_II = physics2;
            MarksInChemistry_II = chemistry2;
            MarksInUrdu_II = urdu2;
            MarksInEnglish_II = english2;
            MarksInPakistanStudies = pakstudies;
            TotalSubjects_II = 6;
            TotalMarks_II = 550;
            CalculateTotalMarks();
            CalculatePercentage();
            CalculateGrade();
        }
        ~SecondYear(){}

        void setRoll_Number_II(string rollno02){ Roll_Number_II = rollno02 ;}
        string getRoll_Number_II(){return Roll_Number_II;}

        void setMarksInMaths_II(float maths2){ MarksInMaths_II = maths2;}
        float getMarksInMaths_II(){return MarksInMaths_II;}

        void setMarksInPhysics_II(float physics2){ MarksInPhysics_II = physics2;}
        float getMarksInPhysics_II(){return MarksInPhysics_II;}
        
        void setMarksInChemistry_II(float chemistry2){ MarksInChemistry_II = chemistry2;}
        float getMarksInChemistry_II(){return MarksInChemistry_II;}
        
        void setMarksInUrdu_II(float urdu2){ MarksInUrdu_II = urdu2;}
        float getMarksInUrdu_II(){return MarksInUrdu_II;}
        
        void setMarksInEnglish_II(float english2){ MarksInEnglish_II = english2;}
        float getMarksInEnglish_II(){return MarksInEnglish_II;}
        
        void setMarksInPakistanStudies(float pakstudies){ MarksInPakistanStudies = pakstudies;}
        float getMarksInPakistanStudies(){return MarksInPakistanStudies;}

        float getObtainedMarks_II(){return ObtainedMarks_II;}

        float getPercentage_II(){return Percentage_II;}

        string getGrade_II(){return Grade_II;}
        
        void CalculateTotalMarks(){
            ObtainedMarks_II = (MarksInMaths_II + MarksInPhysics_II + MarksInChemistry_II + MarksInUrdu_II + MarksInEnglish_II + MarksInPakistanStudies);
        }
        void CalculatePercentage(){
            Percentage_II = (ObtainedMarks_II/TotalMarks_II) * 100;
        }
        void CalculateGrade(){
                 if(Percentage_II<33){
                    Grade_II ="F";
                    }
                 else if(Percentage_II<=40){
                    Grade_II ="E";
                    }
                 else if(Percentage_II<=50){
                    Grade_II ="D";
                    }
                 else if(Percentage_II<=60){
                    Grade_II ="C";
                    }
                 else if(Percentage_II<=70){
                    Grade_II ="B";
                    }
                 else if(Percentage_II<=80){
                    Grade_II ="A";
                    }
                 else if(Percentage_II>80){
                    Grade_II = "A+";
                    }
            }
        
        virtual void ViewResult(){
            cout<<endl;
            cout<<"\t\t\t"<<"Roll No II is.................. "<<Roll_Number_II<<endl;
            cout<<"\t\t\t"<<"Marks in Maths part II are..... "<<MarksInMaths_II<<endl;
            cout<<"\t\t\t"<<"Marks in Physics part II are... "<<MarksInPhysics_II<<endl;
            cout<<"\t\t\t"<<"Marks in Chemistry part II are. "<<MarksInChemistry_II<<endl;
            cout<<"\t\t\t"<<"Marks in Urdu part II are...... "<<MarksInUrdu_II<<endl;
            cout<<"\t\t\t"<<"Marks in English part II are... "<<MarksInEnglish_II<<endl;
            cout<<"\t\t\t"<<"Marks in Pakistan Studies are.. "<<MarksInPakistanStudies<<endl;
            cout<<"\t\t\t"<<"Obtained marks in part II are.. "<<ObtainedMarks_II<<endl;
            cout<<"\t\t\t"<<"Percentage in part II is....... "<<Percentage_II<<endl;
            cout<<"\t\t\t"<<"Grade in part II is............ "<<Grade_II<<endl;
            cout<<endl;
        }
};


class Result : public FirstYear , public SecondYear{
    private:
        float TotalSubjects;
        float ObtainedMarks;
        float TotalMarks;
        float TotalPercentage;
        string TotalGrade;
    public:
        Result(){
            TotalSubjects = 12;
            TotalMarks = 1100;
        }
        Result(string name, string fathername, string dateofbirth, string address, string contactnumber) : Student(name,fathername,dateofbirth,address,contactnumber){
            TotalSubjects = 12;
            TotalMarks = 1100;
        }
        Result(string enroll,string rollno01, float maths1, float physics1, float chemistry1, float urdu1, float english1, float islamiat ) : FirstYear(enroll, rollno01, maths1, physics1, chemistry1, urdu1, english1, islamiat){
            TotalSubjects = 12;
            TotalMarks = 1100;
        }
        Result(string rollno02, float maths2, float physics2, float chemistry2, float urdu2, float english2, float pakstudies ) : SecondYear(rollno02,  maths2, physics2, chemistry2, urdu2, english2, pakstudies){
            TotalSubjects = 12;
            TotalMarks = 1100;
        }
        Result(string name, string fathername, string dateofbirth, string address, string contactnumber,string enroll, string rollno01, float maths1, float physics1, float chemistry1, float urdu1, float english1, float islamiat ) : Student(name,fathername,dateofbirth,address,contactnumber) , FirstYear(name, fathername, dateofbirth, address, contactnumber, enroll,rollno01,  maths1, physics1, chemistry1, urdu1, english1, islamiat){
            TotalSubjects = 12;
            TotalMarks = 1100;
        }
        Result(string name, string fathername, string dateofbirth, string address, string contactnumber, string rollno02, float maths2, float physics2, float chemistry2, float urdu2, float english2, float pakstudies ) : SecondYear(name, fathername, dateofbirth, address, contactnumber, rollno02,  maths2, physics2, chemistry2, urdu2, english2, pakstudies){
            TotalSubjects = 12;
            TotalMarks = 1100;
        }
        Result(string name, string fathername, string dateofbirth, string address, string contactnumber,string enroll, string rollno01, float maths1, float physics1, float chemistry1, float urdu1, float english1, float islamiat, string rollno02, float maths2, float physics2, float chemistry2, float urdu2, float english2, float pakstudies ) : Student(name,fathername,dateofbirth,address,contactnumber), FirstYear( enroll, rollno01, maths1, physics1, chemistry1, urdu1, english1, islamiat) , SecondYear(rollno02,  maths2, physics2, chemistry2, urdu2, english2, pakstudies){
            TotalSubjects = 12;
            TotalMarks = 1100;
            CalculateTotalMarks();
            CalculatePercentage();
            CalculateGrade();
        }
        ~Result(){}

        float getObtainedMarks(){return ObtainedMarks;}

        float getTotalPercentage(){return TotalPercentage;}

        string getTotalGrade(){return TotalGrade;}

        void CalculateTotalMarks(){
            FirstYear :: CalculateTotalMarks();
            SecondYear :: CalculateTotalMarks();
            ObtainedMarks = ObtainedMarks_I + ObtainedMarks_II;
        }
        void CalculatePercentage(){
            FirstYear :: CalculatePercentage();
            SecondYear :: CalculatePercentage();
            TotalPercentage = (ObtainedMarks/TotalMarks) * 100;
        }
        void CalculateGrade(){
            FirstYear :: CalculateGrade();
            SecondYear :: CalculateGrade();
                 if(TotalPercentage<33){
                    TotalGrade ="F";
                    }
                 else if(TotalPercentage<=40){
                    TotalGrade ="E";
                    }
                 else if(TotalPercentage<=50){
                    TotalGrade ="D";
                    }
                 else if(TotalPercentage<=60){
                    TotalGrade ="C";
                    }
                 else if(TotalPercentage<=70){
                    TotalGrade ="B";
                    }
                 else if(TotalPercentage<=80){
                    TotalGrade ="A";
                    }
                 else if(TotalPercentage>80){
                    TotalGrade = "A+";
                    }
            }

        void ViewResult(){
            Student :: ViewResult();
            FirstYear :: ViewResult();
            SecondYear :: ViewResult();
            cout<<endl;
            cout<<"\t\t\t"<<"Total Subjects are............ "<<"\t"<<TotalSubjects<<endl;
            cout<<"\t\t\t"<<"Total marks are............... "<<"\t"<<TotalMarks<<endl;
            cout<<"\t\t\t"<<"Overall Obtained marks are.... "<<"\t"<<ObtainedMarks<<endl;
            cout<<"\t\t\t"<<"Overall Percentage is......... "<<"\t"<<TotalPercentage<<endl;
            cout<<"\t\t\t"<<"Overall Grade is.............. "<<"\t"<<TotalGrade<<endl;
            cout<<endl;
        }

        friend class Admin;
        friend class Merit;
        friend class ReportCard;

};

fstream file1;
fstream file2;
fstream file3;

class Admin{
    public:
    string name, fathername, dateofbirth, address, contactnumber;
    string enroll, searchenroll, rollno01 , searchrollno01;
    float maths1, physics1, chemistry1, urdu1, english1, islamiat;
    string rollno02 , searchrollno02; 
    float maths2, physics2, chemistry2, urdu2, english2, pakstudies;
    int find=0;
    int findrecordnumber=0;
    string null;
    int choice;
    char subchoice;
    int totalrecords;
        
        Admin(){}
        ~Admin(){}
        
        void Add_Student_Record(){
            file1.open("StudentDetails.txt", ios :: app);
            file2.open("./EnrollmentFiling/EnrollmentPassword.txt" , ios :: app);
            do{            	
                Intro();

		        cout << "\n\t\t\t===========\n\t\t\tADD RECORD\n\t\t\t===========\n\n";
                cin.ignore();


                cout<<"\t\t\t"<<"Enter Student Name : ";
                getline(cin,name);
                
                cout<<"\t\t\t"<<"Enter Student's Father Name  : ";
                getline(cin,fathername);

                cout<<"\t\t\t"<<"Enter Student's Date Of Birth : ";
                getline(cin,dateofbirth);
                
                cout<<"\t\t\t"<<"Enter Student's Address : ";
                getline(cin,address);
                
                cout<<"\t\t\t"<<"Enter Student's Contact Number : ";
                getline(cin,contactnumber);

                cout<<endl;
				
                cout<<"\t\t\t"<<"Enter Student's Enrollment Number(e will be added to enrollment automatically) : ";
                cin>>enroll;

                cout<<"\t\t\t"<<"Enter Student's Roll No I(First Year)(1r will be added to rollno automatically) : ";
                cin>>rollno01;

				maths_1:
                cout<<"\t\t\t"<<"Enter Student's Marks in Maths I (First Year)(between 1-100) : ";
                cin>>maths1;

				if(maths1>100 || maths1<0){
					cout<<"\t\t\t"<<"Kindly enter the marks in range (1-100) ..."<<endl;
					goto maths_1;
				}

				physics_1:
                cout<<"\t\t\t"<<"Enter Student's Marks in Physics I (First Year)(between 1-100) : ";
                cin>>physics1;

				if(physics1>100 || physics1<0){
					cout<<"\t\t\t"<<"Kindly enter the marks in range (1-100) ..."<<endl;
					goto physics_1;
				}

				chemistry_1:
                cout<<"\t\t\t"<<"Enter Student's Marks in Chemistry I (First Year)(between 1-100) : ";
                cin>>chemistry1;

				if(chemistry1>100 || chemistry1<0){
					cout<<"\t\t\t"<<"Kindly enter the marks in range (1-100) ..."<<endl;
					goto chemistry_1;
				}

				urdu_1:
                cout<<"\t\t\t"<<"Enter Student's Marks in Urdu I (First Year)(between 1-100) : ";
                cin>>urdu1;

				if(urdu1>100 || urdu1<0){
					cout<<"\t\t\t"<<"Kindly enter the marks in range (1-100) ..."<<endl;
					goto urdu_1;
				}

				english_1:
                cout<<"\t\t\t"<<"Enter Student's Marks in English I (First Year)(between 1-100) : ";
                cin>>english1;

				if(english1>100 || english1<0){
					cout<<"\t\t\t"<<"Kindly enter the marks in range (1-100) ..."<<endl;
					goto english_1;
				}

				islamiat_1:
                cout<<"\t\t\t"<<"Enter Student's Marks in Islamiat I (First Year)(between 1-50) : ";
                cin>>islamiat;

				if(islamiat>50 || islamiat<0){
					cout<<"\t\t\t"<<"Kindly enter the marks in range (1-50) ..."<<endl;
					goto islamiat_1;
				}

                cout<<endl;

                cout<<"\t\t\t"<<"Enter Student's Roll No II (Second Year)(2r will be added to rollno automatically) : ";
                cin>>rollno02;
				
				maths_2:
                cout<<"\t\t\t"<<"Enter Student's Marks in Maths II (Second Year)(between 1-100) : ";
                cin>>maths2;

				if(maths2>100 || maths2<0){
					cout<<"\t\t\t"<<"Kindly enter the marks in range (1-100) ..."<<endl;
					goto maths_2;
				}
				
				physics_2:
                cout<<"\t\t\t"<<"Enter Student's Marks in Physics II (Second Year)(between 1-100) : ";
                cin>>physics2;

				if(physics2>100 || physics2<0){
					cout<<"\t\t\t"<<"Kindly enter the marks in range (1-100) ..."<<endl;
					goto physics_2;
				}
                
				chemistry_2:
                cout<<"\t\t\t"<<"Enter Student's Marks in Chemistry II (Second Year)(between 1-100) : ";
                cin>>chemistry2;

				if(chemistry2>100 || chemistry2<0){
					cout<<"\t\t\t"<<"Kindly enter the marks in range (1-100) ..."<<endl;
					goto chemistry_2;
				}

				urdu_2:
                cout<<"\t\t\t"<<"Enter Student's Marks in Urdu II (Second Year)(between 1-100) : ";
                cin>>urdu2;


				if(urdu2>100 || urdu2<0){
					cout<<"\t\t\t"<<"Kindly enter the marks in range (1-100) ..."<<endl;
					goto urdu_2;
				}

				english_2:
                cout<<"\t\t\t"<<"Enter Student's Marks in English II (Second Year)(between 1-100) : ";
                cin>>english2;

				if(english2>100 || english2<0){
					cout<<"\t\t\t"<<"Kindly enter the marks in range (1-100) ..."<<endl;
					goto english_2;
				}

				pakstudies_2:
                cout<<"\t\t\t"<<"Enter Student's Marks in Pakistan Studies(Second Year)(between 1-50) : ";
                cin>>pakstudies;
				
				if(pakstudies>50 || pakstudies<0){
					cout<<"\t\t\t"<<"Kindly enter the marks in range (1-50) ..."<<endl;
					goto pakstudies_2;
				}
				
				cout<<endl;
				
                Result R(name,fathername,dateofbirth,address,contactnumber,"e"+enroll,"1r"+rollno01,maths1, physics1, chemistry1, urdu1, english1, islamiat,"2r"+rollno02,maths2, physics2, chemistry2, urdu2, english2, pakstudies);

                file1<<R.getStudentName()<<endl;
                file1<<R.getStudentFather_Name()<<endl;
                file1<<R.getStudentDateOfBirth()<<endl;
                file1<<R.getStudentAddress()<<endl;
                file1<<R.getStudentContact_Number()<<endl;
                file1<<R.getEnrollment()<<endl;
                file1<<R.getRoll_Number_I()<<endl;
                file1<<R.getMarksInMaths_I()<<endl;
                file1<<R.getMarksInPhysics_I()<<endl;
                file1<<R.getMarksInChemistry_I()<<endl;
                file1<<R.getMarksInUrdu_I()<<endl;
                file1<<R.getMarksInEnglish_I()<<endl;
                file1<<R.getMarksInIslamiat()<<endl;
                file1<<R.getObtainedMarks_I()<<endl;
                file1<<R.getPercentage_I()<<endl;
                file1<<R.getGrade_I()<<endl;
                file1<<R.getRoll_Number_II()<<endl;
                file1<<R.getMarksInMaths_II()<<endl;
                file1<<R.getMarksInPhysics_II()<<endl;
                file1<<R.getMarksInChemistry_II()<<endl;
                file1<<R.getMarksInUrdu_II()<<endl;
                file1<<R.getMarksInEnglish_II()<<endl;
                file1<<R.getMarksInPakistanStudies()<<endl;
                file1<<R.getObtainedMarks_II()<<endl;
                file1<<R.getPercentage_II()<<endl;
                file1<<R.getGrade_II()<<endl;
                file1<<R.getObtainedMarks()<<endl;
                file1<<R.getTotalPercentage()<<endl;
                file1<<R.getTotalGrade()<<endl;
                file1<<endl<<endl;

                file2<<R.getEnrollment()<<endl;


                cout<<"\t\t\t"<<"Add Another Student Record,press two times (y / n) : ";
                getch();

            }while(getch() == 'y');
            file1.close();
            file2.close();

        }


        void Show_Student_Record(){
               
            do{
                Intro();
                find=0;
                choice:

		        cout << "\n\t\t\t===========\n\t\t\tSHOW RECORD\n\t\t\t===========\n\n";

                cout<<"\t\t\t"<<"1. Search by Enrollment number "<<endl;
                cout<<"\t\t\t"<<"2. Search by roll number 1     "<<endl;
                cout<<"\t\t\t"<<"3. Search by roll number 2     "<<endl;

                cout<<endl<<"\t\t\t"<<"Enter your choice: ";
                cin>>choice;
                cin.ignore();
                
                cout<<endl;

                switch(choice){
                    case 1:
                        cout<<"\t\t\t"<<"Enter Enrollment Number : ";
                        cin>>searchenroll;
                        break;
                    case 2:
                        cout<<"\t\t\t"<<"Enter Roll Number I: ";
                        cin>>searchrollno01;
                        break;
                    case 3:
                        cout<<"\t\t\t"<<"Enter Roll Number II: ";
                        cin>>searchrollno02;
                        break;
                    default:
                        cout<<endl<<"\t\t\t"<<"Enter valid choice.....! "<<endl;
                        cout<<"\t\t\t"<<"Press any key to continue . . . "<<endl;
                        getchar();
                        goto choice;
                }

                Result R;

                file1.open("StudentDetails.txt" , ios :: in);
                
                while(!file1.eof()){

                    getline(file1,R.Name);
                    getline(file1,R.Father_Name);
                    getline(file1,R.Date_Of_Birth);
                    getline(file1,R.Address);
                    getline(file1,R.Contact_Number);
                    getline(file1,R.Enrollment);
                    getline(file1,R.Roll_Number_I);
                    file1>>R.MarksInMaths_I;
                    file1>>R.MarksInPhysics_I;
                    file1>>R.MarksInChemistry_I;
                    file1>>R.MarksInEnglish_I;
                    file1>>R.MarksInUrdu_I;
                    file1>>R.MarksInIslamiat;
                    file1>>R.ObtainedMarks_I;
                    file1>>R.Percentage_I;
                    getline(file1,null);
                    getline(file1,R.Grade_I);                    
                    getline(file1,R.Roll_Number_II);                    
                    file1>>R.MarksInMaths_II;
                    file1>>R.MarksInPhysics_II;
                    file1>>R.MarksInChemistry_II;
                    file1>>R.MarksInEnglish_II;
                    file1>>R.MarksInUrdu_II;
                    file1>>R.MarksInPakistanStudies;
                    file1>>R.ObtainedMarks_II;
                    file1>>R.Percentage_II;
                    getline(file1,null);
                    getline(file1,R.Grade_II);
                    file1>>R.ObtainedMarks;
                    file1>>R.TotalPercentage;
                    getline(file1,null);
                    getline(file1,R.TotalGrade);
                    getline(file1,null);
                    getline(file1,null);


                    if(choice == 1){
                        if(searchenroll == R.Enrollment){
                            cout<<endl<<"\t\t"<<"Record found! ........"<<endl;
                            R.ViewResult();
                            find = 1;
                            break;
                        }
                    }

                    else if(choice == 2){
                        if(searchrollno01 == R.Roll_Number_I){
                            cout<<endl<<"\t\t"<<"Record found! ........"<<endl;
                            R.ViewResult();
                            find = 1;
                            break;
                        }
                    }

                    else if(choice == 3){
                        if(searchrollno02 == R.Roll_Number_II){
                            cout<<endl<<"\t\t"<<"Record found! ........"<<endl;
                            R.ViewResult();
                            find = 1;
                            break;
                        }
                    }
                }
                if(find == 0){
                    cout<<endl<<"\t\t"<<"No record found ....."<<endl;
                }

                cout<<endl<<"\t\t\t"<<"Show another student record, Press (y/n): ";
                getchar();
                file1.close();
            }while(getchar()=='y');
                
        }


        void Modify_Student_Record(){
            do{
                Intro();
                int i=0;
                find=0;
                totalrecords = 0;
                choice:

		        cout << "\n\t\t\t===============\n\t\t\tMODIFY RECORD\n\t\t\t===============\n\n";

                cout<<"\t\t\t"<<"1. Search by Enrollment number(e) "<<endl;
                cout<<"\t\t\t"<<"2. Search by roll number 1(1r)     "<<endl;
                cout<<"\t\t\t"<<"3. Search by roll number 2(2r)     "<<endl;

                cout<<endl<<"\t\t\t"<<"Enter your choice: ";
                cin>>choice;
                cin.ignore();
                
                cout<<endl;

                switch(choice){
                    case 1:
                        cout<<"\t\t\t"<<"Enter enrollment number(e) : ";
                        cin>>searchenroll;
                        break;
                    case 2:
                        cout<<"\t\t\t"<<"Enter Roll Number 1(1r) : ";
                        cin>>searchrollno01;
                        break;
                    case 3:
                        cout<<"\t\t\t"<<"Enter Roll Number 2(2r) : ";
                        cin>>searchrollno02;
                        break;
                    default:
                        cout<<endl<<"\t\t\t"<<"Enter valid choice.....! "<<endl;
                        cout<<"\t\t\t";
                        system("PAUSE");
                        goto choice;
                }

                Result R[1000];

                file1.open("StudentDetails.txt" , ios :: in);
                
                while(!file1.eof()){

                    getline(file1,R[i].Name);
                    getline(file1,R[i].Father_Name);
                    getline(file1,R[i].Date_Of_Birth);
                    getline(file1,R[i].Address);
                    getline(file1,R[i].Contact_Number);
                    getline(file1,R[i].Enrollment);
                    getline(file1,R[i].Roll_Number_I);
                    file1>>R[i].MarksInMaths_I;
                    file1>>R[i].MarksInPhysics_I;
                    file1>>R[i].MarksInChemistry_I;
                    file1>>R[i].MarksInEnglish_I;
                    file1>>R[i].MarksInUrdu_I;
                    file1>>R[i].MarksInIslamiat;
                    file1>>R[i].ObtainedMarks_I;
                    file1>>R[i].Percentage_I;
                    getline(file1,null);
                    getline(file1,R[i].Grade_I);                    
                    getline(file1,R[i].Roll_Number_II);                    
                    file1>>R[i].MarksInMaths_II;
                    file1>>R[i].MarksInPhysics_II;
                    file1>>R[i].MarksInChemistry_II;
                    file1>>R[i].MarksInEnglish_II;
                    file1>>R[i].MarksInUrdu_II;
                    file1>>R[i].MarksInPakistanStudies;
                    file1>>R[i].ObtainedMarks_II;
                    file1>>R[i].Percentage_II;
                    getline(file1,null);
                    getline(file1,R[i].Grade_II);
                    file1>>R[i].ObtainedMarks;
                    file1>>R[i].TotalPercentage;
                    getline(file1,null);
                    getline(file1,R[i].TotalGrade);
                    getline(file1,null);
                    getline(file1,null);

                    if(choice == 1){
                        if(searchenroll == R[i].Enrollment){
                            find = 1;
                            findrecordnumber = i;
                        }
                    }

                    else if(choice == 2){
                        if(searchrollno01 == R[i].Roll_Number_I){
                            find = 1;
                            findrecordnumber = i;
                        }
                    }

                    else if(choice == 3){
                        if(searchrollno02 == R[i].Roll_Number_II){
                            find = 1;
                            findrecordnumber = i;
                        }
                    }

                    if(file1.eof() == 1){
                        totalrecords = i;
                        break;
                    }
                i++;
                }
                file1.close();

                if(find == 0){
                    cout<<endl<<"\t\t"<<"No record found ....."<<endl;
                }
                else if(find == 1){
                    cout<<endl<<"\t\t"<<"Student Record Found......  "<<endl<<endl; 
                    R[findrecordnumber].ViewResult();
                    cout<<endl;
                    cout<<"\t\t\t"<<"1. Update Student Information "<<endl;
                    cout<<"\t\t\t"<<"2. Update First Year marks "<<endl;
                    cout<<"\t\t\t"<<"3. Update Second Year marks "<<endl;
                    cout<<"\t\t\t"<<"4. Update Nothing "<<endl;
                    cout<<endl<<"\t\t\t"<<"What would you like to update: ";
                    cin>>choice;
                    if(choice==1){
                        choice1:
                        cout<<endl<<"\t\t\t\t"<<"1. Update Student Name "<<endl;
                        cout<<"\t\t\t\t"<<"2. Update Student Father Name "<<endl;
                        cout<<"\t\t\t\t"<<"3. Update Student Date Of Birth "<<endl;
                        cout<<"\t\t\t\t"<<"4. Update Student Address "<<endl;
                        cout<<"\t\t\t\t"<<"5. Update Student ContactNumber "<<endl;
                        cout<<"\t\t\t\t"<<"6. Update Student Enrollment Number "<<endl;
                        cout<<"\t\t\t\t"<<"7. Update Student First Year Roll Number "<<endl;
                        cout<<"\t\t\t\t"<<"8. Update Student Second Year Roll Number "<<endl;
                        cout<<"\t\t\t\t"<<"9. Update Nothing "<<endl;
                        cout<<endl<<"\t\t\t\t"<<"What would you like to update: ";
                        cin>>choice;
                        cin.ignore();

                        cout<<endl;

                        switch(choice){
                            case 1:
                                cout<<"\t\t\t\t"<<"Enter updated name: ";
                                getline(cin,name);
                                R[findrecordnumber].setStudentName(name);
                                break;
                            case 2:
                                cout<<"\t\t\t\t"<<"Enter updated Father name: ";
                                getline(cin,fathername);
                                R[findrecordnumber].setStudentFather_Name(fathername);
                                break;
                            case 3:
                                cout<<"\t\t\t\t"<<"Enter updated Date of birth: ";
                                getline(cin,dateofbirth);
                                R[findrecordnumber].setStudentDateOfBirth(dateofbirth);
                                break;
                            case 4:
                                cout<<"\t\t\t\t"<<"Enter updated Address: ";
                                getline(cin,address);
                                R[findrecordnumber].setStudentAddress(address);
                                break;
                            case 5:
                                cout<<"\t\t\t\t"<<"Enter updated Contact Number: ";
                                getline(cin,contactnumber);
                                R[findrecordnumber].setStudentContact_Number(contactnumber);
                                break;
                            case 6:
                                cout<<"\t\t\t\t"<<"Enter updated Enrollment Number: ";
                                getline(cin,enroll);
                                R[findrecordnumber].setEnrollment("e1"+enroll);
                                break;
                            case 7:
                                cout<<"\t\t\t\t"<<"Enter updated Roll Number I : ";
                                getline(cin,rollno01);
                                R[findrecordnumber].setRoll_Number_I("1r"+rollno01);
                                break;
                            case 8:
                                cout<<"\t\t\t\t"<<"Enter updated Roll Number II : ";
                                getline(cin,rollno02);
                                R[findrecordnumber].setRoll_Number_II("2r"+rollno02);
                                 break;
                            case 9:
                                break;
                            default:
                                cout<<"\t\t\t\t"<<"Enter valid choice!...... "<<endl;
                                cout<<"\t\t\t\t"<<"Press any key to continue . . . ";
                                getchar();
                                goto choice1;
                        }
                        cout<<endl<<"\t\t\t"<<"Anything else would you like to update from Student Information(yes[y]/no[n]): ";
                        cin>>subchoice;
                        if(subchoice == 'y'){
                            goto choice1;
                        }
                        else{
                            ;
                        }
                    }
                    else if(choice==2){
                        choice2:
                        cout<<endl;
                        cout<<"\t\t\t\t"<<"1. Update Maths I Marks "<<endl;
                        cout<<"\t\t\t\t"<<"2. Update Physics I Marks "<<endl;
                        cout<<"\t\t\t\t"<<"3. Update Chemistry I Marks "<<endl;
                        cout<<"\t\t\t\t"<<"4. Update English I Marks "<<endl;
                        cout<<"\t\t\t\t"<<"5. Update Urdu I Marks "<<endl;
                        cout<<"\t\t\t\t"<<"6. Update Islamiat Marks "<<endl;
                        cout<<"\t\t\t\t"<<"7. Update Nothing "<<endl;
                        cout<<endl<<"\t\t\t\t"<<"What would you like to update:" ;
                        cin>>choice;
                        cin.ignore();

                        cout<<endl;

                        switch(choice){
                            case 1:
                                cout<<"\t\t\t\t"<<"Enter updated Math I Marks: ";
                                cin>>maths1;
                                R[findrecordnumber].setMarksInMaths_I(maths1);
                                break;
                            case 2:
                                cout<<"\t\t\t\t"<<"Enter updated Physics I Marks: ";
                                cin>>physics1;
                                R[findrecordnumber].setMarksInPhysics_I(physics1);
                                break;
                            case 3:
                                cout<<"\t\t\t\t"<<"Enter updated Chemistry I Marks: ";
                                cin>>chemistry1;
                                R[findrecordnumber].setMarksInChemistry_I(chemistry1);
                                break;
                            case 4:
                                cout<<"\t\t\t\t"<<"Enter updated English I Marks: ";
                                cin>>english1;
                                R[findrecordnumber].setMarksInEnglish_I(english1);
                                break;
                            case 5:
                                cout<<"\t\t\t\t"<<"Enter updated Urdu I Marks: ";
                                cin>>urdu1;
                                R[findrecordnumber].setMarksInUrdu_I(urdu1);
                                break;
                            case 6:
                                cout<<"\t\t\t\t"<<"Enter updated Islamiat Marks: ";
                                cin>>islamiat;
                                R[findrecordnumber].setMarksInIslamiat(islamiat);
                                break;
                            case 7:
                                break;
                            default:
                                cout<<endl<<"\t\t\t\t"<<"Enter valid choice!...... "<<endl;
                                cout<<"\t\t\t\t"<<"Press any key to continue... ";
                                getchar();
                                goto choice2;
                        }
                        cout<<"\t\t\t\t"<<"Anything else would you like to update from First Year Marks (yes[y]/no[n]): ";
                        cin>>subchoice;
                        if(subchoice == 'y'){
                            goto choice2;
                        }
                        else{
                            R[findrecordnumber].CalculateTotalMarks();
                            R[findrecordnumber].CalculatePercentage();
                            R[findrecordnumber].CalculateGrade();      
                        }
                    }
                    else if(choice==3){
                        choice3:
                        cout<<endl;
                        cout<<"\t\t\t\t"<<"1. Update Maths II Marks "<<endl;
                        cout<<"\t\t\t\t"<<"2. Update Physics II Marks "<<endl;
                        cout<<"\t\t\t\t"<<"3. Update Chemistry II Marks "<<endl;
                        cout<<"\t\t\t\t"<<"4. Update English II Marks "<<endl;
                        cout<<"\t\t\t\t"<<"5. Update Urdu II Marks: "<<endl;
                        cout<<"\t\t\t\t"<<"6. Update Pakistan Studies Marks "<<endl;
                        cout<<"\t\t\t\t"<<"7. Update Nothing "<<endl;
                        cout<<endl<<"\t\t\t\t"<<"What would you like to update:" ;
                        cin>>choice; 
                        cin.ignore();                       
                        cout<<endl;

                        switch(choice){
                            case 1:
                                cout<<"\t\t\t\t"<<"Enter updated Math II Marks: ";
                                cin>>maths2;
                                R[findrecordnumber].setMarksInMaths_II(maths2);
                                break;
                            case 2:
                                cout<<"\t\t\t\t"<<"Enter updated Physics II Marks: ";
                                cin>>physics2;
                                R[findrecordnumber].setMarksInPhysics_II(physics2);
                                break;
                            case 3:
                                cout<<"\t\t\t\t"<<"Enter updated Chemistry II Marks: ";
                                cin>>chemistry2;
                                R[findrecordnumber].setMarksInChemistry_II(chemistry2);
                                break;
                            case 4:
                                cout<<"\t\t\t\t"<<"Enter updated English II Marks: ";
                                cin>>english2;
                                R[findrecordnumber].setMarksInEnglish_II(english2);
                                break;
                            case 5:
                                cout<<"\t\t\t\t"<<"Enter updated Urdu II Marks: ";
                                cin>>urdu2;
                                R[findrecordnumber].setMarksInUrdu_II(urdu2);
                                break;
                            case 6:
                                cout<<"\t\t\t\t"<<"Enter updated Pakistan Studies Marks: ";
                                cin>>pakstudies;
                                R[findrecordnumber].setMarksInPakistanStudies(pakstudies);
                                break;
                            case 7:
                                break;
                            default:
                                cout<<endl<<"\t\t\t\t"<<"Enter valid choice!...... "<<endl;
                                cout<<"\t\t\t\t"<<"Press any key to continue. . . ";
                                getchar();
                                goto choice3;
                        }
                        cout<<endl;
                        cout<<"\t\t\t\t"<<"Anything else would you like to update from Second Year Marks (yes[y]/no[n]): ";
                        cin>>subchoice;
                        if(subchoice == 'y'){
                            goto choice3;
                        }
                        else{
                            R[findrecordnumber].CalculateTotalMarks();
                            R[findrecordnumber].CalculatePercentage();
                            R[findrecordnumber].CalculateGrade();
                        }
                    }
                    else if(choice == 4){
                        goto modifyanother;
                    }

                }
                file2.open("StudentDetails.txt", ios :: out);
                file3.open("./EnrollmentFiling/EnrollmentPassword.txt" , ios :: out);
                i=0;
                while (i < totalrecords)
                {

                file2<<R[i].getStudentName()<<endl;
                file2<<R[i].getStudentFather_Name()<<endl;
                file2<<R[i].getStudentDateOfBirth()<<endl;
                file2<<R[i].getStudentAddress()<<endl;
                file2<<R[i].getStudentContact_Number()<<endl;
                file2<<R[i].getEnrollment()<<endl;
                file2<<R[i].getRoll_Number_I()<<endl;
                file2<<R[i].getMarksInMaths_I()<<endl;
                file2<<R[i].getMarksInPhysics_I()<<endl;
                file2<<R[i].getMarksInChemistry_I()<<endl;
                file2<<R[i].getMarksInUrdu_I()<<endl;
                file2<<R[i].getMarksInEnglish_I()<<endl;
                file2<<R[i].getMarksInIslamiat()<<endl;
                file2<<R[i].getObtainedMarks_I()<<endl;
                file2<<R[i].getPercentage_I()<<endl;
                file2<<R[i].getGrade_I()<<endl;
                file2<<R[i].getRoll_Number_II()<<endl;
                file2<<R[i].getMarksInMaths_II()<<endl;
                file2<<R[i].getMarksInPhysics_II()<<endl;
                file2<<R[i].getMarksInChemistry_II()<<endl;
                file2<<R[i].getMarksInUrdu_II()<<endl;
                file2<<R[i].getMarksInEnglish_II()<<endl;
                file2<<R[i].getMarksInPakistanStudies()<<endl;
                file2<<R[i].getObtainedMarks_II()<<endl;
                file2<<R[i].getPercentage_II()<<endl;
                file2<<R[i].getGrade_II()<<endl;
                file2<<R[i].getObtainedMarks()<<endl;
                file2<<R[i].getTotalPercentage()<<endl;
                file2<<R[i].getTotalGrade()<<endl;
                file2<<endl<<endl;

                file3<<R[i].getEnrollment()<<endl;

                i++;
                }
                file2.close();
                file3.close();

                modifyanother:
                cout<<endl<<"\t\t\t"<<"Modify another student record(y/n): ";
                getchar();
            }while(getchar()=='y');          
        }


        void Delete_Student_Record(){

            do{
                Intro();
                totalrecords=0;
                int i=0;
                find=0;

		        cout << "\n\t\t\t=============\n\t\t\tDELETE RECORD\n\t\t\t=============\n\n";

                choice:
                cout<<"\t\t\t"<<"1. Search by Enrollment number(e) "<<endl;
                cout<<"\t\t\t"<<"2. Search by roll number 1(1r)     "<<endl;
                cout<<"\t\t\t"<<"3. Search by roll number 2(2r)   "<<endl;
                cout<<endl;
                cout<<endl<<"\t\t\t"<<"Enter your choice: ";
                cin>>choice;

                cout<<endl;
                
                switch(choice){
                    case 1:
                        cout<<"\t\t\t"<<"Enter enrollment number(e) : ";
                        cin>>searchenroll;
                        break;
                    case 2:
                        cout<<"\t\t\t"<<"Enter Roll Number 1(1r): ";
                        cin>>searchrollno01;
                        break;
                    case 3:
                        cout<<"\t\t\t"<<"Enter Roll Number 2(2r): ";
                        cin>>searchrollno02;
                        break;
                    default:
                        cout<<"\t\t\t"<<"Enter valid choice.....! "<<endl;
                        cout<<"\t\t\t";
                        system("PAUSE");
                        goto choice;
                }

                Result R[1000];

                file1.open("StudentDetails.txt" , ios :: in);
                
                while(!file1.eof()){

                    getline(file1,R[i].Name);
                    getline(file1,R[i].Father_Name);
                    getline(file1,R[i].Date_Of_Birth);
                    getline(file1,R[i].Address);
                    getline(file1,R[i].Contact_Number);
                    getline(file1,R[i].Enrollment);
                    getline(file1,R[i].Roll_Number_I);
                    file1>>R[i].MarksInMaths_I;
                    file1>>R[i].MarksInPhysics_I;
                    file1>>R[i].MarksInChemistry_I;
                    file1>>R[i].MarksInEnglish_I;
                    file1>>R[i].MarksInUrdu_I;
                    file1>>R[i].MarksInIslamiat;
                    file1>>R[i].ObtainedMarks_I;
                    file1>>R[i].Percentage_I;
                    getline(file1,null);
                    getline(file1,R[i].Grade_I);                    
                    getline(file1,R[i].Roll_Number_II);                    
                    file1>>R[i].MarksInMaths_II;
                    file1>>R[i].MarksInPhysics_II;
                    file1>>R[i].MarksInChemistry_II;
                    file1>>R[i].MarksInEnglish_II;
                    file1>>R[i].MarksInUrdu_II;
                    file1>>R[i].MarksInPakistanStudies;
                    file1>>R[i].ObtainedMarks_II;
                    file1>>R[i].Percentage_II;
                    getline(file1,null);
                    getline(file1,R[i].Grade_II);
                    file1>>R[i].ObtainedMarks;
                    file1>>R[i].TotalPercentage;
                    getline(file1,null);
                    getline(file1,R[i].TotalGrade);
                    getline(file1,null);
                    getline(file1,null);

                    if(choice == 1){
                        if(searchenroll == R[i].Enrollment){
                            find = 1;
                            findrecordnumber = i;
                        }
                    }

                    else if(choice == 2){
                        if(searchrollno01 == R[i].Roll_Number_I){
                            find = 1;
                            findrecordnumber = i;
                        }
                    }

                    else if(choice == 3){
                        if(searchrollno02 == R[i].Roll_Number_II){
                            find = 1;
                            findrecordnumber = i;
                        }
                    }

                    if(file1.eof() == 1){
                        totalrecords = i;
                        break;
                    }
                i++;
                }
                file1.close();

                if(find == 0){
                    cout<<endl<<"\t\t"<<"Record not found !....."<<endl;
                    goto deleteanother;
                }
                else if(find == 1){
                    R[findrecordnumber].ViewResult();
                    cout<<endl<<"\t\t\t"<<"Are you sure you want to delete this record(yes[y]/no[n]): ";
                    cin>>subchoice;
                    if(subchoice == 'y'){
                        cout<<endl<<"\t\t"<<"Record deleted successfully ...."<<endl;
                    }
                    else if(subchoice == 'n'){
                        cout<<endl<<"\t\t"<<"Record not deleted !"<<endl;
                        goto deleteanother;
                    }
                }
                file2.open("StudentDetails.txt", ios :: out);
                file3.open("./EnrollmentFiling/EnrollmentPassword.txt" , ios :: out);

                i=0;
                while (i < totalrecords)
                {
                    if(i == findrecordnumber){
                        i++;
                    }
                    else{
                        file2<<R[i].getStudentName()<<endl;
                        file2<<R[i].getStudentFather_Name()<<endl;
                        file2<<R[i].getStudentDateOfBirth()<<endl;
                        file2<<R[i].getStudentAddress()<<endl;
                        file2<<R[i].getStudentContact_Number()<<endl;
                        file2<<R[i].getEnrollment()<<endl;
                        file2<<R[i].getRoll_Number_I()<<endl;
                        file2<<R[i].getMarksInMaths_I()<<endl;
                        file2<<R[i].getMarksInPhysics_I()<<endl;
                        file2<<R[i].getMarksInChemistry_I()<<endl;
                        file2<<R[i].getMarksInUrdu_I()<<endl;
                        file2<<R[i].getMarksInEnglish_I()<<endl;
                        file2<<R[i].getMarksInIslamiat()<<endl;
                        file2<<R[i].getObtainedMarks_I()<<endl;
                        file2<<R[i].getPercentage_I()<<endl;
                        file2<<R[i].getGrade_I()<<endl;
                        file2<<R[i].getRoll_Number_II()<<endl;
                        file2<<R[i].getMarksInMaths_II()<<endl;
                        file2<<R[i].getMarksInPhysics_II()<<endl;
                        file2<<R[i].getMarksInChemistry_II()<<endl;
                        file2<<R[i].getMarksInUrdu_II()<<endl;
                        file2<<R[i].getMarksInEnglish_II()<<endl;
                        file2<<R[i].getMarksInPakistanStudies()<<endl;
                        file2<<R[i].getObtainedMarks_II()<<endl;
                        file2<<R[i].getPercentage_II()<<endl;
                        file2<<R[i].getGrade_II()<<endl;
                        file2<<R[i].getObtainedMarks()<<endl;
                        file2<<R[i].getTotalPercentage()<<endl;
                        file2<<R[i].getTotalGrade()<<endl;
                        file2<<endl<<endl;
                        
                        file3<<R[i].getEnrollment()<<endl;

                        i++;

                    }
                }
                file2.close();
                file3.close();

                deleteanother:
                cout<<endl<<"\t\t\t"<<"Delete another student record,  press two times (y/n): ";
                getch();
            }while(getch()=='y');
        }        

};

class Merit{
    public:
        int totalrecords=0;
        Result R[1000];
        string name[1000], enroll[1000],rollno01[1000], rollno02[1000],null;
        float obtainedMarks[1000] , obtainedMarks01[1000] , obtainedMarks02[1000] , percentage[1000], percentage1[1000] , percentage2[1000];
        string s_obtainedMarks[1000] , s_obtainedMarks01[1000] , s_obtainedMarks02[1000] , s_percentage[1000], s_percentage1[1000] , s_percentage2[1000];
        float tempmarks , temppercentage;
        string k , tempname , temproll, tempenroll;

        Merit(){}
        ~Merit(){}

        void ReadRecord(){
            file1.open("StudentDetails.txt", ios :: in );
            int i=0;
            while(!file1.eof()){
                    getline(file1,R[i].Name);
                    getline(file1,R[i].Father_Name);
                    getline(file1,R[i].Date_Of_Birth);
                    getline(file1,R[i].Address);
                    getline(file1,R[i].Contact_Number);
                    getline(file1,R[i].Enrollment);
                    getline(file1,R[i].Roll_Number_I);
                    file1>>R[i].MarksInMaths_I;
                    file1>>R[i].MarksInPhysics_I;
                    file1>>R[i].MarksInChemistry_I;
                    file1>>R[i].MarksInEnglish_I;
                    file1>>R[i].MarksInUrdu_I;
                    file1>>R[i].MarksInIslamiat;
                    file1>>R[i].ObtainedMarks_I;
                    file1>>R[i].Percentage_I;
                    getline(file1,null);
                    getline(file1,R[i].Grade_I);                    
                    getline(file1,R[i].Roll_Number_II);                    
                    file1>>R[i].MarksInMaths_II;
                    file1>>R[i].MarksInPhysics_II;
                    file1>>R[i].MarksInChemistry_II;
                    file1>>R[i].MarksInEnglish_II;
                    file1>>R[i].MarksInUrdu_II;
                    file1>>R[i].MarksInPakistanStudies;
                    file1>>R[i].ObtainedMarks_II;
                    file1>>R[i].Percentage_II;
                    getline(file1,null);
                    getline(file1,R[i].Grade_II);
                    file1>>R[i].ObtainedMarks;
                    file1>>R[i].TotalPercentage;
                    getline(file1,null);
                    getline(file1,R[i].TotalGrade);
                    getline(file1,null);
                    getline(file1,null);
                    
                    if(file1.eof() == 1){
                        totalrecords = i;
                        break;
                    }
                    i++;
            }
            file1.close();

        }
        
        void FirstYear_Merit(){

            ReadRecord();
            Intro();
		    cout << "\n\t\t\t=====================\n\t\t\tFIRST YEAR MERIT LIST\n\t\t\t=====================\n\n";

            for(int i = 0 ; i < totalrecords ; i++){
                name[i] = R[i].getStudentName();
                enroll[i] = R[i].getEnrollment();
                rollno01[i] = R[i].getRoll_Number_I();
                obtainedMarks01[i] = R[i].getObtainedMarks_I();
                percentage1[i] = R[i].getPercentage_I();
            }

            for(int i = 0 ; i < totalrecords ; i++){
                for (int j = 0; j < totalrecords-1; j++)
                {
                    if(obtainedMarks01[j] < obtainedMarks01[j+1]){
                        tempmarks = obtainedMarks01[j];
                        obtainedMarks01[j] = obtainedMarks01[j+1];
                        obtainedMarks01[j+1] = tempmarks;

                        temppercentage = percentage1[j];
                        percentage1[j] = percentage1[j+1];
                        percentage1[j+1] = temppercentage;
                    
                        tempname = name[j];
                        name[j] = name[j+1];
                        name[j+1] = tempname;

                        tempenroll = enroll[j];
                        enroll[j] = enroll[j+1];
                        enroll[j+1] = tempenroll;

                        temproll = rollno01[j];
                        rollno01[j] = rollno01[j+1];
                        rollno01[j+1] = temproll;

                    }
                }
            }

            for (int i = 0; i < totalrecords; i++)
            {
                s_obtainedMarks01[i] = to_string(obtainedMarks01[i]);
                s_percentage1[i] = to_string(percentage1[i]);
            }            

            Table Merit;

                Merit.add_row({"S.No","Name" , "Enrollment Number" ,"Roll Number I" , "Obtained Marks I" , "Percentage I"});
                Merit.add_row({" " , " " , " " , " " , " "});       
             
            for (int i = 0; i < totalrecords; i++)
            {
                k = to_string(i+1);
                Merit.add_row({ k, name[i], enroll[i] ,rollno01[i] , s_obtainedMarks01[i] , s_percentage1[i]});    
            }
            
            cout<<Merit<<endl;
            
            file3.open("./MeritListFiling/FirstYearMerit.txt" , ios :: out);
            file3<<Merit<<endl;
            file3.close();
            cout<<endl<<"\t\t\t"<<"Press any key to return to Merit Menu . . . ";
            getchar();
        }


        void SecondYear_Merit(){

            Intro();
            ReadRecord();
		    cout << "\n\t\t\t=======================\n\t\t\tSECOND YEAR MERIT LIST\n\t\t\t=======================\n\n";

            for(int i = 0 ; i < totalrecords ; i++){
                name[i] = R[i].getStudentName();
                enroll[i] = R[i].getEnrollment();
                rollno02[i] = R[i].getRoll_Number_II();
                obtainedMarks02[i] = R[i].getObtainedMarks_II();
                percentage2[i] = R[i].getPercentage_II();
                
            }

            for(int i = 0 ; i < totalrecords ; i++){
                for (int j = 0; j < totalrecords-1; j++)
                {
                    if(obtainedMarks02[j] < obtainedMarks02[j+1]){
                        tempmarks = obtainedMarks02[j];
                        obtainedMarks02[j] = obtainedMarks02[j+1];
                        obtainedMarks02[j+1] = tempmarks;

                        temppercentage = percentage2[j];
                        percentage2[j] = percentage2[j+1];
                        percentage2[j+1] = temppercentage;

                        tempname = name[j];
                        name[j] = name[j+1];
                        name[j+1] = tempname;

                        tempenroll = enroll[j];
                        enroll[j] = enroll[j+1];
                        enroll[j+1] = tempenroll;

                        temproll = rollno02[j];
                        rollno02[j] = rollno02[j+1];
                        rollno02[j+1] = temproll;

                    }
                }
            }
            
            for (int i = 0; i < totalrecords; i++)
            {
                s_obtainedMarks02[i] = to_string(obtainedMarks02[i]);
                s_percentage2[i] = to_string(percentage2[i]);
            }

            Table Merit;

                Merit.add_row({"S.No","Name" , "Enrollment Number" , "Roll Number II", "Obtained Marks II " , "Percentage II"});
                Merit.add_row({"" , "" , "" , "" , ""});                 
            for (int i = 0 ; i < totalrecords; i++)
            {
                k = to_string(i+1);
                Merit.add_row({k,name[i], enroll[i] ,rollno02[i], s_obtainedMarks02[i] , s_percentage2[i]});    
            }
            
            cout<<Merit<<endl;

// filing the merit list

            file3.open("./MeritListFiling/SecondYearMerit.txt" , ios :: out);
            file3<<Merit<<endl;
            file3.close();

            cout<<endl<<"\t\t\t"<<"Press any key to return to Merit Menu . . . ";
            getchar();
        }

        void Aggregate_Merit(){

            Intro();
            ReadRecord();

		    cout << "\n\t\t\t====================\n\t\t\tAGGREGATE MERIT LIST\n\t\t\t====================\n\n";

            for(int i = 0 ; i < totalrecords ; i++){
                name[i] = R[i].getStudentName();
                enroll[i] = R[i].getEnrollment();
                obtainedMarks[i] = R[i].getObtainedMarks();
                percentage[i] = R[i].getTotalPercentage();
            }

            for(int i = 0 ; i < totalrecords ; i++){
                for (int j = 0; j < totalrecords-1; j++)
                {
                    if(obtainedMarks[j] < obtainedMarks[j+1]){
                        tempmarks = obtainedMarks[j];
                        obtainedMarks[j] = obtainedMarks[j+1];
                        obtainedMarks[j+1] = tempmarks;
                    
                        temppercentage = percentage[j];
                        percentage[j] = percentage[j+1];
                        percentage[j+1] = temppercentage;
                    
                        tempname = name[j];
                        name[j] = name[j+1];
                        name[j+1] = tempname;

                        tempenroll = enroll[j];
                        enroll[j] = enroll[j+1];
                        enroll[j+1] = tempenroll;

                    }
                }
            }


            for (int i = 0; i < totalrecords; i++)
            {
                s_obtainedMarks[i] = to_string(obtainedMarks[i]);
                s_percentage[i] = to_string(percentage[i]);
            }
            Table Merit;

                Merit.add_row({"S.No","Name" , "Enrollment Number" , "Overall Obtained Marks" , "Overall Percentage"});
                Merit.add_row({"","" , "" , "" , ""});       
            for (int i = 0; i < totalrecords; i++)
            {
                k = to_string(i+1);
                Merit.add_row({k,name[i], enroll[i] , s_obtainedMarks[i] , s_percentage[i]});    
            }
           
            cout<<Merit<<endl;
// filing the merit list
            file3.open("./MeritListFiling/AggragateMerit.txt" , ios :: out);
            file3<<Merit<<endl;
            file3.close();
            cout<<endl<<"\t\t\t"<<"Press any key to return to Merit Menu . . . ";
            getchar();
        }
};


class ReportCard{
    public:
        Result R[1000];
        int find=0;
        int totalrecords=0;
        string enroll , null;
        string maths1,physics1,chemistry1,english1,urdu1,islamiat,percentage1,obtainedmarks1;
        string maths2,physics2,chemistry2,english2,urdu2,pakstudies,percentage2,obtainedmarks2;
        string percentage,obtainedmarks;


        void ReadRecord(){
            file1.open("StudentDetails.txt", ios :: in );
            if(file1.fail()){
                cout<<endl<<"\t\t"<<"File could not be opened"<<endl;
            }
            else{
                int i=0;
                while(!file1.eof()){
                    getline(file1,R[i].Name);
                    getline(file1,R[i].Father_Name);
                    getline(file1,R[i].Date_Of_Birth);
                    getline(file1,R[i].Address);
                    getline(file1,R[i].Contact_Number);
                    getline(file1,R[i].Enrollment);
                    getline(file1,R[i].Roll_Number_I);
                    file1>>R[i].MarksInMaths_I;
                    file1>>R[i].MarksInPhysics_I;
                    file1>>R[i].MarksInChemistry_I;
                    file1>>R[i].MarksInEnglish_I;
                    file1>>R[i].MarksInUrdu_I;
                    file1>>R[i].MarksInIslamiat;
                    file1>>R[i].ObtainedMarks_I;
                    file1>>R[i].Percentage_I;
                    getline(file1,null);
                    getline(file1,R[i].Grade_I);                    
                    getline(file1,R[i].Roll_Number_II);                    
                    file1>>R[i].MarksInMaths_II;
                    file1>>R[i].MarksInPhysics_II;
                    file1>>R[i].MarksInChemistry_II;
                    file1>>R[i].MarksInEnglish_II;
                    file1>>R[i].MarksInUrdu_II;
                    file1>>R[i].MarksInPakistanStudies;
                    file1>>R[i].ObtainedMarks_II;
                    file1>>R[i].Percentage_II;
                    getline(file1,null);
                    getline(file1,R[i].Grade_II);
                    file1>>R[i].ObtainedMarks;
                    file1>>R[i].TotalPercentage;
                    getline(file1,null);
                    getline(file1,R[i].TotalGrade);
                    getline(file1,null);
                    getline(file1,null);
                    
                    if(file1.eof() == 1){
                        totalrecords = i;
                        break;
                    }
                    i++;
                }
                file1.close();

            }
		}
		
        void FirstYear_ReportCard(){
            ReadRecord();
            do{
                find=0;
                Intro();

    		    cout << "\n\t\t\t=======================\n\t\t\tFIRST YEAR REPORT CARD\n\t\t\t=======================\n\n";

                cout<<endl;
        	    cout<<"\t\t\t"<<"Enter Enrollment Number to generate/view Report Card: ";
        	    getline(cin,enroll);
                cout<<endl;

        	    for(int i = 0 ; i < totalrecords ; i++){
                
        	    	if(R[i].Enrollment == enroll){
                        find=1;
        
        	    		maths1 = to_string(R[i].getMarksInMaths_I());
			    		physics1 = to_string(R[i].getMarksInPhysics_I());
			    		chemistry1 = to_string(R[i].getMarksInChemistry_I());
			    		english1 = to_string(R[i].getMarksInEnglish_I());
			    		urdu1 = to_string(R[i].getMarksInUrdu_I());
			    		islamiat = to_string(R[i].getMarksInIslamiat());
			    		obtainedmarks1 = to_string(R[i].getObtainedMarks_I());
			    		percentage1 = to_string(R[i].getPercentage_I());
    
			    		Table Marksheet;
    
			    		Marksheet.format()
			    		.font_style({FontStyle::bold})
			    		.font_align(FontAlign::center)
			    		.border_top("-")
   	 		    		.border_bottom("-")
    		    		.border_left("|")
    		    		.border_right("|")
	    	    		.corner("+")
			    		.width(100);
    
			    		Table intro;
			    		intro.add_row({"Board Of Intermediate Education \n\n"
			    					   "First Year MarkSheet"});
    
			    		intro.format()
			    		.border_color(Color::yellow)
			    		.corner_color(Color::yellow)
    		    		.padding_top(1)
    		    		.padding_bottom(1)
    		    		.font_align(FontAlign::center)
	    	    		.font_style({FontStyle::underline});					
    
			    		Table details;
			    		details.add_row({"Enrollment : " + R[i].getEnrollment() + "\n"
			    						 "Roll No : " + R[i].getRoll_Number_I() + "\n"
			    						 "Name : " + R[i].getStudentName() + "\n" 
			    						 "Father Name : " + R[i].getStudentFather_Name() + "\n"
			    						 "Date Of Birth : " + R[i].getStudentDateOfBirth() + "\n"
			    						});

  			    		details.format()
   			    		.font_style({FontStyle::bold})
    		    		.font_align(FontAlign::center)
	    	    		.font_style({FontStyle::underline})
   			    		.border_top("-")
   	 		    		.border_bottom("-")
    		    		.border_left("|")
    		    		.border_right("|")
	    	    		.corner("+");

    
	    	    		details[0].format()
    		    		.padding_top(1)
    		    		.padding_bottom(1)
    		    		.font_align(FontAlign::center)
	    	    		.font_style({FontStyle::underline});
    
                		Table res;
                		res.add_row({"Subject" , "Part I Total Marks" , "Part I Obtained Marks" , "Percentage" , "Grade"});
                		res.add_row({" " , "Max" ,"Secured" , " " , " "});
                		res.add_row({"Mathematics" , "100" , maths1 , "-" , "-"});
                		res.add_row({"Physics" , "100" , physics1 , "-" , "-"});
                		res.add_row({"Chemistry" , "100", chemistry1 , "-" , "-"});
                		res.add_row({"English" , "100" , english1 , "-" , "-"});
        	    	    res.add_row({"Urdu" , "100" , urdu1, "-" , "-"});
		                res.add_row({"Islamiat" , "50" , islamiat , "-" , "-"});
                		res.add_row({" " , " " ," " , " " , " "});
                		res.add_row({"Total" ,  "550" , obtainedmarks1, percentage1 , R[i].Grade_I});

			    		res.format()
    		    		.font_align(FontAlign::center)
	    	    		.font_style({FontStyle::underline});

			    		Marksheet.add_row({intro});
			    		Marksheet.add_row({details});
			    		Marksheet.add_row({res});
			    		Marksheet[1].format().hide_border_top();
			    		Marksheet[2].format().hide_border_top();

			    		Marksheet.print(cout);

// filing the marksheet    
			    		file2.open("./ReportCardFiling/firstyear/" + R[i].getEnrollment() + ".txt" , ios :: out);
			    		Marksheet.print(file2);
                        file2.close();
    
        	    	}
			    }
                if(find!=1){
                    cout<<endl<<"\t\t"<<"Record not found ... "<<endl;
                }
                
                cout<<endl<<endl<<"\t\t\t"<<"Do you want to generate another student report card, press two times (y/n): ";
                getch();

            }while(getch()=='y');
		}
        
        void Aggregate_ReportCard(){
            ReadRecord();

            do{
                find=0;
                Intro();
                        
    		    cout << "\n\t\t\t======================\n\t\t\tAGGREGATE REPORT CARD\n\t\t\t=======================\n\n";

                cout<<"\t\t\t"<<"Enter enrollment number to generate Aggregate Report Card: ";
                getline(cin,enroll);

                for(int i = 0 ; i < totalrecords ; i++){
                    
                	if(R[i].Enrollment == enroll){
                        find = 1;
                    	maths1 = to_string(R[i].getMarksInMaths_I());
		        		physics1 = to_string(R[i].getMarksInPhysics_I());
		        		chemistry1 = to_string(R[i].getMarksInChemistry_I());
		        		english1 = to_string(R[i].getMarksInEnglish_I());
		        		urdu1 = to_string(R[i].getMarksInUrdu_I());
		        		islamiat = to_string(R[i].getMarksInIslamiat());
		        		obtainedmarks1 = to_string(R[i].getObtainedMarks_I());
		        		percentage1 = to_string(R[i].getPercentage_I());
    
		        		maths2 = to_string(R[i].getMarksInMaths_II());
		        		physics2 = to_string(R[i].getMarksInPhysics_II());
		        		chemistry2 = to_string(R[i].getMarksInChemistry_II());
		        		english2 = to_string(R[i].getMarksInEnglish_II());
		        		urdu2 = to_string(R[i].getMarksInUrdu_II());
		        		pakstudies = to_string(R[i].getMarksInPakistanStudies());
		        		obtainedmarks2 = to_string(R[i].getObtainedMarks_II());
		        		percentage2 = to_string(R[i].getPercentage_II());
    
		        		obtainedmarks = to_string(R[i].getObtainedMarks());
		        		percentage = to_string(R[i].getTotalPercentage());


		        		Table Marksheet;
    
		        		Marksheet.format()
		        		.font_style({FontStyle::bold})
		        		.font_align(FontAlign::center)
		        		.border_top("-")
   	 	        		.border_bottom("-")
    	        		.border_left("|")
    	        		.border_right("|")
	            		.corner("+")
		        		.width(160);
    

		        		Table intro;
		        		intro.add_row({"Board Of Intermediate Education \n\n"
		        					   "Aggregate MarkSheet"});
    
		        		intro.format()
    	        		.padding_top(1)
    	        		.padding_bottom(1)
    	        		.font_align(FontAlign::center)
	            		.font_style({FontStyle::underline});					
    
		        		Table details;
		        		details.add_row({"Enrollment : " + R[i].getEnrollment() + "\n"
		        						 "Roll No : " + R[i].getRoll_Number_I() + "\n"
		        						 "Name : " + R[i].getStudentName() + "\n" 
		        						 "Father Name : " + R[i].getStudentFather_Name() + "\n"
		        						 "Date Of Birth : " + R[i].getStudentDateOfBirth() + "\n"
		        						});

  		        		details.format()
		        		.border_color(Color::yellow)
		        		.corner_color(Color::yellow)
    	        		.font_align(FontAlign::center)
	            		.font_style({FontStyle::underline})
   		        		.font_style({FontStyle::bold})
   		        		.border_top("-")
   	 	        		.border_bottom("-")
    	        		.border_left("|")
    	        		.border_right("|")
	            		.corner("+");

	            		details[0].format()
    	        		.padding_top(1)
    	        		.padding_bottom(1)
    	        		.font_align(FontAlign::center)
	            		.font_style({FontStyle::underline});
    
                		Table res;
                		res.add_row({"Subject" , "Part I Total Marks" , "Part I Obtained Marks" , "Part II Total Marks" , "Part II Obtained Marks" ,"Combined Marks", "Percentage" , "Grade"});
                		res.add_row({" " , "Max" ,"Secured" , "Max" ,"Secured" ," ", " " , " "});
                		res.add_row({"Mathematics" , "100" , maths1, "100" , maths2 ,"-","-" , "-"});
                		res.add_row({"Physics" , "100" , physics1, "100" , physics2 ,"-", "-" , "-"});
                		res.add_row({"Chemistry" , "100", chemistry1 , "100", chemistry2,"-", "-" , "-"});
                		res.add_row({"English" , "100" , english1 , "100" , english2 ,"-", "-" , "-"});
                	    res.add_row({"Urdu" , "100" , urdu1 , "100" , urdu2,"-" , "-" , "-"});
		                res.add_row({"Islamiat" , "50" , islamiat ,"-","-","-","-","-"});
		                res.add_row({"Pakistan Studies" , "-" , "-" ,"50",pakstudies,"-","-","-"});
                		res.add_row({" " , " " ," " , " " , " "," "," "});
                		res.add_row({"Total" ,  "550" , obtainedmarks1, "550",obtainedmarks2,"1100 | " + obtainedmarks, percentage , R[i].TotalGrade});

		        		res.format()
    	        		.font_align(FontAlign::center)
	            		.font_style({FontStyle::underline});
    
		        		Marksheet.add_row({intro});
		        		Marksheet.add_row({details});
		        		Marksheet.add_row({res});
		        		Marksheet[1].format().hide_border_top();
		        		Marksheet[2].format().hide_border_top();

		        		Marksheet.print(cout);
// filing the marksheet
		        		file2.open("./ReportCardFiling/aggregate/" + R[i].getEnrollment() + ".txt" , ios :: out);
		        		Marksheet.print(file2);
                        file2.close();
                	}
		        }
                if(find!=1){
                    cout<<endl<<"\t\t"<<"Record not found ... "<<endl;
                }
                cout<<endl<<endl<<"\t\t\t"<<"Do you want to generate another student Report Card, press two times (y/n): ";
                getch();
            }while(getch()=='y');
		}


};

class Menu{
    public:
        Admin a;
        Merit mr;
        ReportCard rc;

// One time Animation displayed in the beginning of executing the program including project details
// Starting Screen
		void Intro_Display(){
			string s = " Student Report Card System.\n\n\t\t\t\t Created By 20k-1686 | 20k-0277.\n\n\t\t\t\t Supervisor : Miss Syeda Rubab Jaffar.\n\n\t\t\t\t ISE Project.\n\n\t\t\t\t Section : BSE-2B.";
			cout<<endl<<endl<<endl<<endl<<endl<<"\t\t\t\t";
			for(int i = 0 ; i < s.length() ; i++ ){
				cout<< s[i];
				Sleep(30);
			}
			Sleep(600);
			cout<<endl<<endl<<endl<<"\t\t\t\t";
			system("PAUSE");
		}
// Animation for exiting 
		void Exit_Display(){
			string s = "Thankyou for using Student Report Card System.\n\t\t\t\tThe program shall now exit.";
			cout<<endl<<endl<<"\t\t\t\t";
			for(int i = 0 ; i < s.length() ; i++ ){
				cout<< s[i];
				Sleep(30);
			}
			Sleep(600);
		}
// Login Animation for Admin
        void Admin_Login_Display(){
        	string s ="Login Successful, Welcome Back Admin!";
	        cout<<endl<<endl<< "\t\t\t";

	        for(int i=0;i<s.length();i++){
		        cout << s[i];
		        Sleep(45);
	        }
	        Sleep(650);
        }
// Login Animation for Student
        void Student_Login_Display(){
        	string s ="Login Successful, Welcome Back Student!";
	        cout <<endl<<endl<< "\t\t\t";

	        for(int i=0;i<s.length();i++){
		        cout << s[i];
		        Sleep(45);
	        }
	        Sleep(650);
        }

        void Admin_Display(){
            int choice;
            int subchoice;

            do{
                Intro();
                cout<<endl;

		        cout << "\n\t\t\t============\n\t\t\tADMIN PORTAL\n\t\t\t============\n\n";
            
                cout<<"\t\t\t"<<"1. Add Student Record"<<endl;
                cout<<"\t\t\t"<<"2. View Student Record"<<endl;
                cout<<"\t\t\t"<<"3. Modify Student Record"<<endl;
                cout<<"\t\t\t"<<"4. Delete Student Record"<<endl;
                cout<<"\t\t\t"<<"5. Generate Student Report Card"<<endl;
                cout<<"\t\t\t"<<"6. View Merit List"<<endl;
                cout<<"\t\t\t"<<"7. Logout the system"<<endl;

                cout<<endl<<"\t\t\t"<<"Enter your choice: ";
                cin>>choice;
				if(!cin){
    		    	cin.clear();
    		    	cin.ignore(123,'\n');
					cout<<endl<<"\t\t\t"<<"Invalid argument(inputting string into integer) ! Kindly input integer values "<<endl;
					cout<<"\t\t\t";
					system("PAUSE");
					continue;
				}
                switch(choice){
                    case 1:
                        a.Add_Student_Record();
                        break;
                    case 2:
                        a.Show_Student_Record();
                        break;
                    case 3:
                        a.Modify_Student_Record();
                        break;
                    case 4:
                        a.Delete_Student_Record();
                        break;
                    case 5:
                        do{
                            Intro();
                            cout<<endl;

            		        cout << "\n\t\t\t===================\n\t\t\tGENERATE REPORT CARD\n\t\t\t===================\n\n";

                            cout<<"\t\t\t"<<"1. Generate First Year Report Card"<<endl;
                            cout<<"\t\t\t"<<"2. Generate Aggregate Report Card"<<endl;
                            cout<<"\t\t\t"<<"3. Return to Admin menu"<<endl;
                            cout<<endl<<"\t\t\t"<<"Enter your choice: ";
                            cin>>subchoice;

							if(!cin){
    		    				cin.clear();
 				   		    	cin.ignore(123,'\n');
								cout<<endl<<"\t\t\t"<<"Invalid argument(inputting string into integer) ! Kindly input integer values "<<endl;
								cout<<"\t\t\t";
								system("PAUSE");
								continue;
							}

                            cin.ignore();

                            switch(subchoice){
                                case 1:
                                    rc.FirstYear_ReportCard();
                                    break;
                                case 2:
                                    rc.Aggregate_ReportCard();
                                    break;
                                case 3:
                                    break;
                                default:
                                    cout<<endl<<"\t\t\t"<<"Wrong Input!!! Enter valid choice"<<endl;
                                    cout<<"\t\t\t";
                                    system("PAUSE");
                                    break;
                            }
                        
                        }while(subchoice!=3);
                        break;
                    case 6:
                        do{
                            Intro();

            		        cout << "\n\t\t\t===========\n\t\t\tVIEW MERIT\n\t\t\t===========\n\n";

                            cout<<"\t\t\t"<<"1. View First Year Merit List"<<endl;
                            cout<<"\t\t\t"<<"2. View Second Year Merit List"<<endl;
                            cout<<"\t\t\t"<<"3. View Aggregate Merit List"<<endl;
                            cout<<"\t\t\t"<<"4. Return to Admin menu"<<endl;
                            cout<<endl<<"\t\t\t"<<"Enter your choice: ";
                            cin>>subchoice;
                            
							if(!cin){
    		    				cin.clear();
 				   		    	cin.ignore(123,'\n');
								cout<<endl<<"\t\t\t"<<"Invalid argument(inputting string into integer) ! Kindly input integer values "<<endl;
								cout<<"\t\t\t";
								system("PAUSE");
								continue;
							}
                            cin.ignore();
                            switch(subchoice){
                                case 1:
                                    mr.FirstYear_Merit();
                                    break;
                                case 2:
                                    mr.SecondYear_Merit();
                                    break;
                                case 3:
                                    mr.Aggregate_Merit();
                                    break;
                                case 4:
                                    break;
                                default:
                                    cout<<endl<<"\t\t\t"<<"Wrong Input!!! Enter valid choice"<<endl;
                                    cout<<"\t\t\t";
                                    system("PAUSE");
                                    break;
                            }
                        
                        }while(subchoice!=4);
                        break;
                    case 7:
                        break;
                    default:
                        cout<<endl<<"\t\t\t"<<"Wrong Input! Enter valid choice"<<endl;
                        cout<<"\t\t\t";
                        system("PAUSE");
                        break;
                }

 
            }while(choice!=7);

        }
        
        void Student_Display(){
            int choice;
            int subchoice;

            do{
                Intro();
                cout<<endl;

		        cout << "\n\t\t\t===============\n\t\t\tSTUDENT PORTAL\n\t\t\t===============\n\n";

                cout<<"\t\t\t"<<"1. View Result"<<endl;
                cout<<"\t\t\t"<<"2. View Report Card"<<endl;
                cout<<"\t\t\t"<<"3. View Merit List"<<endl;
                cout<<"\t\t\t"<<"4. Logout the system"<<endl;

                cout<<endl<<"\t\t\t"<<"Enter your choice: ";
                cin>>choice;
				if(!cin){
        			cin.clear();
        			cin.ignore(123,'\n');
					cout<<endl<<"\t\t\t"<<"Invalid argument(inputting string into integer) ! Kindly input integer values "<<endl;
					cout<<"\t\t\t";
					system("PAUSE");
					continue;
				}
				cin.ignore();
                
                switch(choice){
                    case 1:
                        a.Show_Student_Record();
                        break;
                    case 2:
                        do{
                            Intro();
                            cout<<endl;
            
            		        cout << "\n\t\t\t=================\n\t\t\tVIEW REPORT CARD\n\t\t\t=================\n\n";

                            cout<<"\t\t\t"<<"1. View First Year Report Card"<<endl;
                            cout<<"\t\t\t"<<"2. View Aggregate Report Card"<<endl;
                            cout<<"\t\t\t"<<"3. Return to Student menu"<<endl;
                            cout<<endl<<"\t\t\t"<<"Enter your choice: ";
                            cin>>subchoice;

							if(!cin){
    		    				cin.clear();
 				   		    	cin.ignore(123,'\n');
								cout<<endl<<"\t\t\t"<<"Invalid argument(inputting string into integer) ! Kindly input integer values "<<endl;
								cout<<"\t\t\t";
								system("PAUSE");
								continue;
							}

                            cin.ignore();

                            switch(subchoice){
                                case 1:
                                    rc.FirstYear_ReportCard();
                                    break;
                                case 2:
                                    rc.Aggregate_ReportCard();
                                    break;
                                case 3:
                                    break;
                                default:
                                    cout<<endl<<"\t\t\t"<<"Wrong Input!!! Enter valid choice"<<endl;
                                    cout<<"\t\t\t";
                                    system("PAUSE");
                                    break;
                            }
                        
                        }while(subchoice!=3);
                        break;
                    case 3:
                        do{
                            Intro();

            		        cout << "\n\t\t\t============\n\t\t\tVIEW MERIT\n\t\t\t============\n\n";
                    
                            cout<<"\t\t\t"<<"1. View First Year Merit List"<<endl;
                            cout<<"\t\t\t"<<"2. View Second Year Merit List"<<endl;
                            cout<<"\t\t\t"<<"3. View Aggregate Merit List"<<endl;
                            cout<<"\t\t\t"<<"4. Return to Student menu"<<endl;
                            cout<<endl<<"\t\t\t"<<"Enter your choice: ";
                            cin>>subchoice;
                            
							if(!cin){
    		    				cin.clear();
 				   		    	cin.ignore(123,'\n');
								cout<<endl<<"\t\t\t"<<"Invalid argument(inputting string into integer) ! Kindly input integer values "<<endl;
								cout<<"\t\t\t";
								system("PAUSE");
								continue;
							}
							
							cin.ignore();
                            switch(subchoice){
                                case 1:
                                    mr.FirstYear_Merit();
                                    break;
                                case 2:
                                    mr.SecondYear_Merit();
                                    break;
                                case 3:
                                    mr.Aggregate_Merit();
                                    break;
                                case 4:
                                    break;
                                default:
                                    cout<<"\t\t\t"<<"Wrong Input!!! Enter valid choice"<<endl;
                                    cout<<"\t\t\t";
                                    system("PAUSE");
                                    break;
                            }
                        
                        }while(subchoice!=4);
                        break;
                    case 4:
                        break;
                    default:
                        cout<<"\t\t\t"<<"Wrong Input! Enter valid choice"<<endl;
                        cout<<"\t\t\t";
                        system("PAUSE");
                        break;
                }

 
            }while(choice!=4);

        }


// password for admin is fixed which is admin
        void Admin_Login(){
        	int i=0;
            int attempts=0;
            int attempts_rem=4;
            int return_to=0;

        	do{
                Intro();
            	cout << "\n\t\t\t===========\n\t\t\tADMIN LOGIN\n\t\t\t===========\n\n";
				cout<<"\t\t\t\t\t\t\t"<<"attempt number    : "<<attempts+1<<endl;
				cout<<"\t\t\t\t\t\t\t"<<"attempts remaining: "<<attempts_rem<<endl;
				cout<<endl;
				string password = "admin";
        		string pass = "";
                char c;

                cout<<"\t\t\t"<<"Username: admin"<<endl;
        		cout<<"\t\t\t"<<"Enter Password: ";

                do{
                    c=getch();
                    if(c=='\r'){
                        break;
                    }
                    if(c=='\b'){
                        cout<<'\b';
						cout<<" ";
						cout<<'\b';
						pass.pop_back();  
                        continue;
                    }
                    pass= pass+c;
                    cout<<"*";
                    i++;
                }while(c!= '\r');

                if(pass==password){
                    Admin_Login_Display();
                    break;
                }
                else{
                	char a;
                    cout<<endl<<endl;
                    cout<<"\t\t\t"<<"Incorrect Password!!!!"<<endl;
                    cout<<"\t\t\t"<<"Press R to return to Login Menu. . . "<<endl;
                    cout<<"\t\t\t"<<"Press enter to retry. . . ";
                    a = getchar();
                    if(a == 'R'){
                    	return_to = 1;
                    	break;
					}
                    attempts++;
                    attempts_rem--;
                }

        	}while(attempts<5);
        	if(return_to == 1){
        		;
			}
            else if(attempts<5){
                Admin_Display();
            }
            else if(attempts>=5){
        	    string s ="You have entered password incorrectly for five times.\n\t\t\tTherefore, the program shall terminate.";
	            cout <<endl<<endl<< "\t\t\t";
    
	            for(int i=0;i<s.length();i++){
		            cout << s[i];
		            Sleep(40);
	            }
	            Sleep(600);
	            cout<<endl;

                exit(0);
            }
        }

// password for student is student enrollment number which is located in EnrollmentFiling/EnrollmentPassword.txt
        void Student_Login(){
        	int i=0;
            int attempts=0;
            int attempts_rem=4;
            int return_to=0;
            int passmatch=0;
            int totalenroll=0;
            string enroll[1000];

            file1.open("./EnrollmentFiling/EnrollmentPassword.txt" , ios :: in);

            if(file1.fail()){
                cout<<"\t\t\t"<<"File could not be opened"<<endl;
                cout<<"\t\t\t"<<"Press any key to return to Login menu ... ";
                getchar();
            }

            else{
                do{
                    Intro();
                	cout << "\n\t\t\t=============\n\t\t\tSTUDENT LOGIN\n\t\t\t=============\n\n";
					cout<<"\t\t\t\t\t\t\t"<<"attempt number    : "<<attempts+1<<endl;
					cout<<"\t\t\t\t\t\t\t"<<"attempts remaining: "<<attempts_rem<<endl;
					cout<<endl;
                    string pass = "";
                    char c;

                    while(!file1.eof()){
                        getline(file1,enroll[i]);
                        if(file1.eof() == 1){
                            totalenroll=i+1;
                        }
                        i++;
                    }
                    file1.close();

                    cout<<"\t\t\t"<<"Username: student"<<endl;
                    cout<<"\t\t\t"<<"Enter your Enrollment Number: ";
                    do{
                        c=getch();
                        if(c=='\r'){
                            break;
                        }
                    	if(c=='\b'){
                        	cout<<'\b';
							cout<<" ";
							cout<<'\b';
							pass.pop_back();  
                        	continue;
                    	}
                        pass= pass+c;
                        cout<<"*";
                        i++;
                    }while(c!= '\r');

                    for (int i = 0; i < totalenroll; i++)
                    {
                        if(enroll[i] == pass){
                            passmatch = 1;
                        }
                    }
                    
                    if(passmatch == 1){
                        Student_Login_Display();
                        break;
                    }
                    else if(passmatch!=1){
                    	char a;
                        cout<<endl<<endl;
                        cout<<"\t\t\t"<<"No such Enrollment Number exists!!!"<<endl;
                    	cout<<"\t\t\t"<<"Press R to return to Login Menu. . . "<<endl;
                    	cout<<"\t\t\t"<<"Press enter to retry. . . ";
                    	a = getchar();
                    	if(a == 'R'){
                    		return_to = 1;
                    		break;
						}
                        attempts++;
                        attempts_rem--;
                    }
                    
                }while(attempts<5);
                if(return_to == 1){
					;
				}
				
				else if(attempts<5){
                    Student_Display();
                }
                else if(attempts>=5){
        	    string s ="You have entered Enrollment Number incorrectly for five times.\n\t\t\tTherefore, the program shall terminate.";
	            cout <<endl<<endl<< "\t\t\t";
    
	            for(int i=0;i<s.length();i++){
		            cout << s[i];
		            Sleep(40);
	            }
	            Sleep(600);
                
                exit(0);

                }
            }
        }

};


// Top heading indicating project name and its creators
void Intro(){
	system("cls");
	system("Color 06");

	Table Start;
    Start.add_row({"STUDENT REPORT CARD SYSTEM"});
    Start.add_row({" "});
    Start.add_row({"CREATED BY 20K-1686 | 20K-0277"});

	Start.format()
	.font_style({FontStyle::bold})
	.font_align(FontAlign::center)
    .border("*")
    .corner("*")
    .border_left("*")
    .border_right("*")
    .width(110);
    
	Start[0].format()
	.font_style({FontStyle::bold , FontStyle ::underline })
	.font_align(FontAlign::center);

    Start[1].format().hide_border_top();

    Start[2].format().hide_border_top();

	Start[1][0].format()
	.font_style({FontStyle::bold , FontStyle ::underline })
	.font_align(FontAlign::center);	
	
    cout<<endl<<Start<<endl<<endl;
}


int main(){


    system("Color 06");
	Menu m;
	
	m.Intro_Display();
	
	int choice;

    do{
	    Intro();
		cout << "\n\t\t\t===========\n\t\t\tLOGIN MENU\n\t\t\t===========\n\n";
	    cout<<"\t\t\t"<<"1. Login as Administrator "<<endl;
	    cout<<"\t\t\t"<<"2. Login as Student "<<endl;
        cout<<"\t\t\t"<<"3. Exit the program "<<endl;
		
		a_choice:
	    cout<<endl<<endl<<"\t\t\t"<<"Enter your choice : ";
	    cin>>choice;
		if(!cin){
        	cin.clear();
        	cin.ignore(123,'\n');
			cout<<endl<<"\t\t\t"<<"Invalid argument(inputting string into integer) ! Kindly input integer values "<<endl;
			cout<<"\t\t\t";
			system("PAUSE");
			continue;
		}
		
		cin.ignore();
	
        
	    switch(choice){
	    	case 1:
	    		m.Admin_Login();
	    		break;
	    	case 2:
	    		m.Student_Login();
	    		break;
            case 3:
                m.Exit_Display();
				exit(0);
	    	default:
	    		cout<<endl<<"\t\t\t"<<"Wrong input!!! kindly choose from above options(1-3)"<<endl;
	    		cout<<"\t\t\t";
				system("PAUSE");
	    		break;
	    }
    }while(1);

    return 0;
}

