
#include <iostream>
using namespace std;
/*
Write a function that reads a list of 6 grades for each of the 5 students
in the class. Note that you have to use a double dimension array to
store these grades. */
    //grades for student:
void SixGrades(int arr[][6], int std){
    for(int i=0; i<std; i++){
        cout<<"the courses is: ENGLISH[1], FRENCH[2], ARABIC[3], C++[4], JAVA[5], DATABASE[6]"<<endl;
        cout<<"Please enter the grades of student:"<<i+1<<endl;
        for(int grades=0; grades<6; grades++){
            cout<<"Please enter The grades:"<<" ";
            cin>>arr[i][grades];
        }
    }
}
    //show:
void show(int arr[][6], int std){
    for(int i=0; i<std; i++){
        for(int grades=0; grades<6; grades++){
            cout<<arr[i][grades]<<" ";
        }
cout<<endl;
    }
}
    //print:
void print(double arr[], int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}
//------------------------------------------------------------------------------------------
/*
Write a function that calculates the average of each student. This
function should place the results (averages of all students) in a
separate single dimension array. */

/*
Write a function that calculates the maximum grade in the class and
prints out the corresponding student number. Note that the array
subscript represents the student numbers. */

    //avg std:
void avgStd(int arr[][6], int std){
      double avgs[5];
      int sum;
      int max=0;
      for(int i=0; i<std; i++){
          sum=0;
          for(int grades=0; grades<6; grades++){
              sum= sum+arr[i][grades];
          }
          avgs[i]=sum/6;
          if(avgs[i]>max)
         max=avgs[i];
      }
      cout<<"The maximun grade for student is: "<<max<<endl;
      print(avgs, std);
  }
 //------------------------------------------------------------------------------------------ 
  /*
  Write a function that calculates the average of each course. This
function should place the results (averages of all courses) in a separate
single dimension array. */
    //avg courses:
     void courses(int arr[][6], int std){
         int avg;
         int sum;
         for(int grades=0; grades<6; grades++){
             sum=0;
             for(int i=0; i<std; i++){
                 sum=sum+arr[i][grades];
                 avg=sum/5;
                 cout<<endl;
             
             
             cout<<endl;
         }
         cout<<"the average for the courses,"<<grades+1<<" "<<"is"<<" "<<avg<<endl;
     }
     
}
//------------------------------------------------------------------------------------------
// Write a function the displays the grades in a tabular format.
    //tublar:
     void tublar(int arr[][6], int std){
         cout<<"\n---------------------\n";
         cout<<"courses: ENGLISH[1],FRENCH[2],ARABIC[3],C++[4],JAVA[5],DATABASE[6]"<<endl;
         cout<<"           GRADES   "<<endl;
    for(int i=0; i<std; i++){
        for(int grades=0; grades<6; grades++){
            cout<<"student "<<i+1<<":";
            cout<<" | "<<arr[i][grades]<<" | ";
       cout<<"\n-----------------------\n";
        }
cout<<endl;
    }
} 
    //main:
          int main(){
              int stds=5;
              int arr[5][6];
              
              SixGrades(arr, stds);
              show(arr, stds);
              avgStd(arr, stds);
              courses(arr, stds);
              tublar(arr, stds);
              return 0;
}


/////////////////////#BY_DEVELOPER-SNAKE/////////////////////








