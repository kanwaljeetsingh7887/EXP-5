# EXP 5

## Aim:
**To study and implement C++ decision making statements.**

## Software:
`Microsoft VSCode`

## Theory:
*Decision making statements in C++ are the conditional statements that are used to execute codes based on some given conditions. These are crucial for controlling the flow of a program and making it responsive to different inputs*

### Types of Decision-Making Statements:
+ `if Statement`: Executes a block of code if a specified condition is true.
+ `if-else Statement`: Provides an alternative block of code to execute if the condition is false.
+ `Switch Statement`: Allows a variable to be tested for equality against a list of values. Each value is called a "case," and the variable is compared with each case value.
+ `Nested if-else`: You can nest if-else statements within each other for more complex conditions.

## Code: 5A
```
//KANWALJEET SINGH
//ENTC B2
//EXP 5A
//23070123124
#include<iostream>
using namespace std;

int main() {
    int  n1;
    cout<<"Enter a positive number: ";   //Output - Enter a positive number: 20
    cin>>n1;
    if(n1==0) {
        cout<<n1<<" is zero."<<endl;
    }
    else if(n1%2!=0){
        cout<<n1<<" is odd."<<endl;
    }
    else {
        cout<<n1<<" is even."<<endl;        //98 is even.
    }
}
```
## Output:
![image](https://github.com/user-attachments/assets/8fd53a0a-cec9-478a-bd90-72e21b7d4526)

## Code: 5B
```
//KANWALJEET SINGH
//ENTC B2
//EXP 5B
//23070123124
#include <iostream>
using namespace std;
int main() {
    double n1, n2, n3;
    cout << "Enter three numbers: ";
    cin >> n1 >> n2 >> n3;
    if (n1 >= n2) {
        if (n1 >= n3)
            cout << "Largest number: " << n1;
        else
            cout << "Largest number: " << n3;
    }
    else {
        if (n2 >= n3)
            cout << "Largest number: " << n2;
        else
            cout << "Largest number: " << n3;
    }
    return 0;
}
```
## Output:
![image](https://github.com/user-attachments/assets/e16f7aff-24ca-4c9c-b71c-6ac33a148917)

## Code: 5C
```
//KANWALJEET SINGH
//ENTC B2
//EXP 5C
//23070123124
#include<iostream>
using namespace std;

int main() {
    int choice;
    cout << "1. Monday" << endl
         << "2. Tuesday" << endl
         << "3. Wednesday" << endl
         << "4. Thursday" << endl
         << "5. Friday" << endl
         << "6. Saturday" << endl
         << "7. Sunday" << endl;
    cout << "Enter your choice: ";
    cin >> choice;
    
    switch(choice) {
        case 1:
            cout << "Monday" << endl;
            break;
        case 2:
            cout << "Tuesday" << endl;
            break;
        case 3:
            cout << "Wednesday" << endl;
            break;
        case 4:
            cout << "Thursday" << endl;
            break;
        case 5:
            cout << "Friday" << endl;
            break;
        case 6:
            cout << "Saturday" << endl;
            break;
        case 7:
            cout << "Sunday" << endl;
            break;
        default:
            cout << "Wrong Input" << endl;
            break;
    }
    
    return 0;
}
```

## Output:
![image](https://github.com/user-attachments/assets/1672592e-e5d8-4082-9645-1bdfc045b5d1)

## Code: 5D
```
//KANWALJEET SINGH
//ENTC B2
//EXP 5D
//23070123124
#include<iostream>
using namespace std;

int main() {
    char oper;
    float num1, num2;
    

    cout<<"Enter an operator (+, -, *, /): ";
    cin>>oper;
    cout<<"Enter two numbers: "<<"\n";
    cin>>num1>>num2;
    switch(oper) {
        case '+':
        cout<<num1<<"+"<<num2<<"="<<num1+num2<<"\n";
        break;
        case '-':
        cout<<num1<<"-"<<num2<<"="<<num1-num2<<"\n";
        break;
        case '*':
        cout<<num1<<"*"<<num2<<"="<<num1*num2<<"\n";
        break;
        case '/':
        if (num2!=0)
        cout<<num1<<"/"<<num2<<"="<<num1/num2<<"\n";
        else
        cout<<"Error! Division by zero."<<"\n";
        break;
        default:
        cout<<"Error! The operator is not correct."<<"\n";
        break;
    }
}
```

## Output: 
![image](https://github.com/user-attachments/assets/94213bcf-8958-4d37-b201-57aad77d0cd8)

## Conclusion:
I learnt about the different decision making statements of C++ and performed tasks based on those conditions.
