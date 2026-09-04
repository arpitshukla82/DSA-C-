/*#include<iostream>
using namespace std;

int factorial (int n){

    //base case
    if(n==0)
    return 1;

    return n* factorial(n-1);

}
int main(){

    int n;
    cin >>n;
    int ans = factorial(n);
    cout<< ans << endl;
    return 0;
}*/

// TO PRINT NUMBER 
/*#include<iostream>
using namespace std;

void print (int n){
    //base case
    if(n==0){
        return ;
    }
    cout<<n<<endl;
    print(n-1);
}

int main(){
    int n;
    cin>>n;
    cout<<endl;
    print (n);

    return 0;
}*/

//Sorted array 
/*#include<iostream>
using namespace std;

 bool isSorted(int *arr, int size){
    //base case
    if(size == 0 || size == 1){
        return true;
    }
    if(arr[0] > arr[1])
    return false;
    else{
        bool remainingPart = isSorted(arr+1 ,size-1);
        return remainingPart;
    }

 }
 int main(){
    int arr[5] = {2,4,9,9,9};
    int size =5;

    bool ans = isSorted(arr, size);
    if(ans){
        cout<<"Array is Sorted"<< endl;
    }
 }*/

//through loop i find sum of arrY---->>
 /*#include<iostream>
 using namespace std;
 int main (){
    int arr[5]={3,2,5,1,6};
    int sum = 0;

    for(int i = 0;i<=5; i++){
        sum += arr[i];
        
    }
    cout<<"Sum = "<< sum <<endl;
 }*/


 // THROUGH CONCEPT ODF RECURSION 
 /*#include<iostream>
 using namespace std;
 
 int getSum(int *arr, int size){

    //base case
    if(size == 0){
        return 0;
    }
    if(size == 1){
        return arr[0];
    }
    int remainingPart = getSum(arr+1, size-1);
    int sum = arr[0] + remainingPart;
    return sum;
 }
int main (){
    int arr [5] = {2,4,9,9,9};
    int size = 5;

    int sum =getSum(arr , size);

    cout<<"Sum is "<< sum << endl;
    return 0;
}*/

//TO FIND THE ELEMENT IN ARRY THROUGH RECURSION
/*#include <iostream>
using namespace std;

int findElement(int arr[], int size, int key, int index = 0) {
    if (index == size) return -1;
    if (arr[index] == key) return index;
    return findElement(arr, size, key, index + 1);
}

int main() {
    int arr[] = {2, 4, 6, 8, 10};
    int size = sizeof(arr) / sizeof(arr[0]);

    int key;
    cout << "Enter element to search: ";
    cin >> key;

    int result = findElement(arr, size, key);
    if (result != -1)
        cout << key << " found at index " << result << endl;
    else
        cout << key << " not found in array." << endl;

    return 0;
}*/

#include <iostream>
using namespace std;

bool binarySearch(int *arr, int s, int e, int k) {
    if (s > e) return false;
    int mid = s + (e - s) / 2;
    if (arr[mid] == k) return true;
    if (arr[mid] < k) return binarySearch(arr, mid + 1, e, k);
    else return binarySearch(arr, s, mid - 1, k);
}

int main() {
    int arr[6] = {2, 4, 6, 10, 14, 16};
    int size = 6;
    int key;
    cout << "Enter element to search: ";
    cin >> key;

    if (binarySearch(arr, 0, size - 1, key))
        cout << "Present" << endl;
    else
        cout << "Not Present" << endl;

    return 0;
}

/************ 12 TO 15 LECTURE QUESTIONS USING RECURSION********/

