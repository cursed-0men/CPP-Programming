// eg. sum of elements of array

    #include<iostream>
    using namespace std;
    int main()
    {
    
    int A[5]={2,4,6,8,10};
    int sum = 0;

    for(int i = 0; i < 5; i++){
        sum+=A[i];
    }
    cout<<"sum = "<<sum;
        return 0;
    }


    /* using for each loop

    int main()
    {
    int A[5]={2,4,6,8,10};
    int sum = 0;

    for(int x:A){
        sum += x;
    }
cout<<"SUM  = "<<sum;


    return 0;
    }
    
    
    
    
    */