// SOLUTION TO QUESTION NO.C
// Code and Logic by Abdul Riyan and Rudra Pratap Singh 
// SOLUTION IN C++ 
// SLHS TEAM 
// CHRYSALIS (DPS FEST) 2023



#include<bits/stdc++.h>
using namespace std;


int main(){

    int weedles,days,lose_num=0,copy=-1,win=0;
    
    cout<<"Enter the number of Weedles : ";
    cin>>weedles;
    cout<<"Enter the number of days : ";
    cin>>days;

    int A[100];

    cout<<"Enter the schedule of the weedles : \n";
    for(int i=0;i<days;i++){
        cin>>A[i];
    }

    for(int j=0;j<weedles;j++){
        lose_num = (lose_num*10) +1;
    }




    for(int k=0;k<days;k++){
        if(A[k]!=lose_num){
            win++;
        }else{
            copy = max(copy,win);
            win=0;
        }
    }

    copy = max(copy,win);

    cout<<"The maximum number of consecutive days in which Pikachu wins : "<<copy;


}