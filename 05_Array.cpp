//TO FIND THE MAX ELEEMENT IN ARRAY

/*#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {5, 1, 9, 3, 7};

    int maxi = INT_MIN;
    for(int i = 0; i < arr.size(); i++) {
        if(arr[i] > maxi) {
            maxi = arr[i];
        }
    }

    cout << "Largest element = " << maxi;
    return 0;
}*/



// MINIMUM ELEMENT IN ARRAY 
/*#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {5, 1, 9, 3, 7};

    int mini = INT_MAX;    // Start with highest possible value

    for(int i = 0; i < arr.size(); i++) {
        if(arr[i] < mini) {
            mini = arr[i];    // Update minimum
        }
    }

    cout << "Minimum element = " << mini;
    return 0;
}*/

// LINEAR SEARCH 
/*#include<iostream>
using namespace std;

bool search(int arr[] , int size, int key){
    for(int i = 0; i<size; i++){
        if(arr[i] == key){
            return 1;
        }
    }
    return 0;
}
int main(){
    int arr[10] = {5, 7, -2, 10, 22, -2, 0, 5, 22, 1};
    cout<<"Enter the element to search for"<< endl;
    int key;
    cin>>key;

    bool found = search(arr , 10, key);
    if(found){
        cout<<"Key is present"<<endl;
    }
    else{
        cout<<"Key is absent"<<endl;

    }
    return 0;
}*/

/* PRIME NUMBER CHECK*/
/*#include<iostream>
using namespace std;
int main (){
    int n;
    cin >> n;
    int i =2;
    while(i<n){
        if(n % i == 0){
            cout << "Not Prime" << endl;
            return 0;
        }
        i = i+1;
    }
    cout << "Prime" << endl;
    return  0 ;
}*/


//SUM OF ARRAY OF ELEMENT 
/*#include<iostream>
using namespace std;
int main (){
    
    int arr[5]= {5,7,9,4,8};
    int sum = 0;
    for(int i=0; i<5 ; i++){
        sum = sum +arr[i];
    }
    cout<< "Sum of Elements =  "<< sum <<endl;
    }*/
    

    //take 5 elements ipin array and print there doubles..
    
   /*#include <iostream>
using namespace std;

    int main() {
        int arr[5];

        // Input 5 elements
        cout << "Enter 5 elements:" << endl;
        for (int i = 0; i < 5; i++) {
            cin >> arr[i];
        }

        // Print double of each element
        cout << "Doubles of elements:" << endl;
        for (int i = 0; i < 5; i++) {
            cout << arr[i] * 2 << " ";
        }

        return 0;
}*/ 

/*#include <iostream>
using namespace std;

void printName(int i, int n) {
    
    // Base Condition
    if(i > n) {
        return;
    }

    cout << "Arpit" << endl;

    // Recursive Call
    printName(i + 1, n);
}

int main() {

    int n;
    cout << "Enter how many times to print the name: ";
    cin >> n;

    printName(1, n);

    return 0;
}*/


// REVERSE AN ARRAY

/*#include <iostream>
using namespace std;

int main(){
    int arr[6] = {1, 2, 3, 4, 5, 6};
    int start = 0, end = 5;

    while(start < end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    };
    for(int i = 0; i < 6; i++){
        cout << arr[i] << " ";
    }

    
}*/


// COUNT DIGITS IN A NUMBER

/*#include<iostream>

using namespace std;

int main(){

int n , count=0;

cin >> n;

 while(n>0){
count = count+1;
n = n/10;


 }
 cout<< count;
}*/

//REVERSE A NUMBER
/*
REVERSE A NUMBER:

1. digit = n % 10
   -> Get the last digit.

2. rev = rev * 10 + digit
   -> rev * 10 shifts existing digits left.
   -> + digit adds the new digit at the end.

3. n = n / 10
   -> Remove the last digit.

Example: 12345

5  -> rev = 5
4  -> rev = 54
3  -> rev = 543
2  -> rev = 5432
1  -> rev = 54321

Pattern:
digit = n % 10;
rev = rev * 10 + digit;
n = n / 10;
*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int revNum = 0;
    while(n>0){
        int ld = n%10;
        revNum = (revNum * 10)+ld;
        n= n/10;
    }
    cout << revNum;
}
