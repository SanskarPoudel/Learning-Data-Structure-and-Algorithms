#include<bits/stdc++.h>  // It includes all the libraries in C++
using namespace std;

int main() {
    
    //int, long
    int x;
    long xx;
    long long xxx;
    int y;

    // float, double,long double
    float xf = 4.333321331;
    float xff = 4;
    double x = 3.23123;
    double xf = 3;

    //string and getline
    string name = "Sanskar";
    string speech;
    getline(cin, speech); // In order to pick the input of whole line to sentence variable

    //Character char
    char character = 'c';

    
    cout << "ssup";

    cout << "Enter the value of x and y:";

    cin >> x;
    cin >> y;

    cout << "Value of x: " << x <<" and y: " <<y;




    //-------------SOLVING PROBLEM  EASY -------------------
             /* Write a program that takes an input of age
              and prints if you are adult or not */
              
    int age;

    cout << "Enter your age:";
    cin >> age;

    if(age >= 18){
        cout << "You are  an adult";
    }
    else {  
        cout << "You are not an adult";
    }

    // It is not mandatory to have else statement and we can use elseif to check other many conditions too



    
    //-----------------SOLVING PROBLEM LITTLE COMPLEX THAN BEFORE------------------
              /*A school has following rules for grading system:
                a. Below 25 -F
                b. 25 to 44 - E
                c. 45 to 49 - D
                d. 50 to 59 - C
                e. 60 to 79 - B
                f. 80 to 100 - A
                Ask the user to enter marks and print the corresponding grade */

    int mark;

    cout << "Enter your mark to see your grade:";
    cin >> mark;

    if(mark<25){
        cout << "Your grade is F";
    }
    else if ( mark <=44){
        cout << "Your grade is E";
    }
    else if (  mark <=49){
        cout << "Your grade is D";
    }
    else if (  mark <=59){
        cout << "Your grade is C";
    }
    else if (mark <=79){
        cout << "Your grade is B";
    }
    else if ( mark <=100){
        cout << "Your grade is A";
    }




    //------------------SOLVING PROBLEM NESTED IF ELSE-----------------
          /* Take the age from the use and then decide accordingly 
          1. if age<18, print : not eligible for job
          2. if age>=18 print : eligible for job
          3. if age>=55 and age<=57, print eligible for job but retirement soon
          4. if age>57, print retirement time */

    int yourAge;
    cout << "Enter your age: ";
    cin >> yourAge;

    if(yourAge<18){
        cout << "You are not eligible for the job";
    }
   
    else if(yourAge<=57){
        cout << "eligible for job ";
        if(yourAge>=55){
            cout << ", retirement soon";
        }
    }
    else{
        cout << "retirement time";
    }

    // This is the perfect example of how you can optimize your code to be smaller and reduce time and space complexity
    // I think i am heading towards the right direction after doing this  :)
    // I got to know that : anyone can solve the problem but we need to do it in right way and make our code as minimal as possible




    // -----------------SWITCH---------------

    /*Take the day no and print the corresponding day 
    for 1 print Monday,
    for 2 print Tuesday and so on for 7 print Sunday.*/

    int x;
    cout << "Enter the number: ";
    cin >> x;

    switch(x){
        case 1:
            cout << "Sunday";
            break;
        case 2:
            cout << "Monday";
            break;
        case 3:
            cout << "Tuesday";
            break;
        case 4:
            cout << "Wednesday";
            break;
        case 5:
            cout << "Thursday";
            break;
        case 6:
            cout << "Friday";
            break;
        case 7:
             cout << "Saturday";
            break;
        default:
            cout << "Out of scope";
    }


    //--------------ARRAYS-------------
       /*When do we use arrays>
       ->When we have similar data types being stored multiple times
       */
    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;

    //Alternatively,

    int arr[5];
    char charArr[3];
    float floatArr[10];

    cout << "Enter 5 numbers:";
    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];

    cout << arr[4];

    // Arrays are stored in the memory space. Arrays elements are stored in consecutive memory space.


    //---------------- 2D ARRAYS -------------------

    int array[3][6]; // 3 rows and 6 columns, indexing starts from 0 like in 1D array.
    array[0][0] = 2;

    cout <<"Array at 0,0 is " << array[0][0] <<endl;
    cout << array[1][2]; //we didn't initialize this array elements, so it will give us garbage value as output.

    return 0;
}