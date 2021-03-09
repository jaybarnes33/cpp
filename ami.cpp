#include <iostream>
using namespace std;
int main(){
     int sub1, sub2, sub3, sub4, sub5, sum, percentage;

        cout<<" enter the mark of the first subject "<<endl;
        cin>>sub1;
   
       cout<<" enter the mark of the second subject "<<endl;
       cin>>sub2;

       cout<<" enter the mark of the third subject "<<endl;
       cin>>sub3;

       cout<<" enter the mark of the fourth subject "<<endl;
       cin>>sub4;

       cout<<" enter the mark of the fifth subject "<<endl;
       cin>>sub5;

     sum= sub1+sub2+sub3+sub4+sub5;
+
    percentage = sum/5;
    
    cout<<"your percentage is "<<percentage;

   if (percentage>=80 && percentage<=100){
       cout<<"grade A";
   }
   else if (percentage>=70 && percentage<80){
       cout<<"grade B";
   }
   
   else if (percentage>=60 && percentage<70){
       cout<<"grade C";
   }
   else if (percentage>=50 && percentage<60){
       cout<<"grade D";
   }
else{ cout<<"fail"<<endl;}
       
       

return 0; 
   }


