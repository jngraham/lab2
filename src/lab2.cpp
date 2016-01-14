#include "eecs230.h"

//
// Lab 2 programs
//

int illegalStatements() {
    /* Start here! */
    //int double = 0;
    //double char = 2.5;
    //char mychar = 'd'; mychar += 12;
    //unsigned int a = -1;
    //int pi = 3.14;
    //short num = 1e9;
    //string mystring = 5;
    return 0;
}

void exercise1(){

    int n=0;

    cout << "Enter an integer:";
    cin >> n;

    if(!cin){
        simple_error("Not a valid integer!");
    }
    else{
        if(n%2==0){
            cout << "The value " << n << " is an even number\n";
        }
        else{
            cout << "The value " << n << " is an odd number\n";
        }
    }
}

void exercise2(){

    double x=0;
    double y=0;
    string op;

    cout << "Enter +,-,* or / followed by two numbers:";
    cin >> op >> x >> y;

    if(!cin){
        simple_error("Invalid input");
    }
    else{
        if(op=="+"){
            cout << x << " + " << y << "=" << x+y;
        }
        else if(op=="-"){
            cout << x << " - " << y << "=" << x-y;
        }
        else if(op=="+"){
            cout << x << " * " << y << "=" << x*y;
        }
        else if(op=="+"){
            cout << x << " / " << y << "=" << x/y;
        }
    }
}

void exercise3() {

    enum Gender {
        m, f, unknown
    };
    string friend_name;
    Gender friend_gender=unknown;
    char temp_gender;

    cout << "Enter your friend's name and their gender (m/f):";
    cin >> friend_name >> temp_gender;

    switch(temp_gender){
        case 'm':
            friend_gender = m;
            break;
        case 'f':
            friend_gender = f;
            break;
        default:
            simple_error("I don't know that gender");
    }

    if (friend_gender == m) {
        cout << "If you see " << friend_name << ", please tell him to call me.\n";
    }
    else {
        cout << "If you see " << friend_name << ", please tell her to call me.\n";
    }

}

void exercise4(){

    int age=0;

    cout << "Enter your age:";
    cin >> age;

    if(!cin){
        simple_error("That's an invalid age");
    }
    else{
        if((age<0)||(age>110)){
            cout << "You must be kidding me!\n";
        }
        else{
            cout << "I hear you just had a birthday and you are " << age << " years old.\n";
            if(age<12){
                cout << "Next year you will be " << age+1 << ".\n";
            }
            else if(age==17){
                cout << "Next year you will be able to vote.\n";
            }
            else if(age>70){
                cout << "I hope you are enjoying environment.\n";
            }
        }
    }
}

void exercise6(){

    int n=0;

    cout << "Enter a number:";
    cin >> n;

    switch(n){
        case 0:
            cout << "zero";
            break;
        case 1:
            cout << "one";
            break;
        case 2:
            cout << "two";
            break;
        case 3:
            cout << "three";
            break;
        case 4:
            cout << "four";
            break;
        default:
            simple_error("not a number I know");
    }
}

void exercise7(){
    int n1=0;
    int n2=0;
    int n3=0;
    int n4=0;

    int order1=0;
    int order2=0;
    int order3=0;
    int order4=0;

    cout << "Enter four integers:";
    cin >> n1 >> n2 >> n3 >> n4;

    if(!cin){
        simple_error("Could not read numbers");
    }
    else{
        order1=n1;
        if(n2<order1){
            order2=order1;
            order1=n2;
        }
        else{
            order2=n2;
        }
        if(n3<order1){
            order3=order2;
            order2=order1;
            order1=n3;
        }
        else if(n3<order2){
            order3=order2;
            order2=n3;
        }
        else{
            order3=n3;
        }
        if(n4<order1){
            order4=order3;
            order3=order2;
            order2=order1;
            order1=n4;
        }
        else if(n4<order2){
            order4=order3;
            order3=order2;
            order2=n4;
        }
        else if(n4<order3){
            order4=order3;
            order3=n4;
        }
        else{
            order4=n4;
        }

        cout << "The numbers in order are: " << order1 << "," << order2 << "," << order3 << "," << order4;

    }
}

void exercise8(){
    string n1;
    string n2;
    string n3;

    string order1;
    string order2;
    string order3;

    cout << "Enter three words:";
    cin >> n1 >> n2 >> n3;

    if(!cin){
        simple_error("Could not read words");
    }
    else{
        order1=n1;
        if(n2<order1){
            order2=order1;
            order1=n2;
        }
        else{
            order2=n2;
        }
        if(n3<order1){
            order3=order2;
            order2=order1;
            order1=n3;
        }
        else if(n3<order2){
            order3=order2;
            order2=n3;
        }
        else{
            order3=n3;
        }

        cout << "The words in order are: " << order1 << "," << order2 << "," << order3;

    }
}
int main() {
//    illegalStatements();
//    cout << "Start with Exercise 1 (legal/illegal statements)" << endl;
//    cout << "Then work on the exercises and code them up." << endl;

    exercise8();
}

