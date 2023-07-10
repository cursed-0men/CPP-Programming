/* Display name of the Day fro given Day Number

day number -- day name(3 letters)

1 -- sun

2 -- mon

3 -- tue

4 -- wed

5 -- thu

6 -- fri

7 -- sat */
#include<iostream>

using namespace std;

void DayName(int day)
{
    if(day==1){
        cout<<"sun";
    }
    else if(day==2){
        cout<<"mon";
    }
    else if(day==3){
        cout<<"tue";
    }else if(day==4){
        cout<<"wed";
    }else if(day==5){
        cout<<"thu";
    }else if(day==6){
        cout<<"fri";
    }else {
        cout<<"sat";
    }
    
    //Display day name in 3 letters using else if ladder
}