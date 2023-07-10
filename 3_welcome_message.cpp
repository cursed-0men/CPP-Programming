// // Welcome message
//    #include<iostream>
//    using namespace std;
//    int main(){

//    string name; //using string datatype for name variable. 
//    cout<<"\n enter your name:";
//    cin>>name;

//    cout<<"\nWelcome to hell "<<name;

//        return 0;
//    }


// for people using both first name and last name ---->
    #include<iostream>
    using namespace std;
    int main(){

    string name; //using string datatype for name variable. 
    cout<<"\n enter your name:";
    
    getline(cin,name);
    cout<<"\nWelcome to hell "<<name;

        return 0;
    }
