/*#include<iostream>
using namespace std;

void reverse(string& str, int i , int j){
    cout<<"call recieved for "<<str <<endl;

    //base case
    if(i>j)
    return;

    swap(str[i] ,str[j]);
    i++;
    j--;

    // Recursive call
    reverse(str, i, j);

}
int main(){
    string name = "abcde";
    cout<<endl;
    reverse(name, 0 , name.length()-1);
    cout<<endl;
    cout << name <<endl;
    return 0;
}*/


//PALINDROME 
/*#include<iostream>
using namespace std;

bool checkPalindrome(string str , int i, int j){
    // base case
    if(i >= j) 
        return true;

    if(str[i] != str[j])
        return false;
    
    // recursive call
    return checkPalindrome(str, i+1, j-1);
}

int main (){
    string name = "abba";

    bool isPalindrome = checkPalindrome(name , 0, name.length()-1);

    if(isPalindrome){
        cout << "It's a palindrome" << endl;
    }
    else{
        cout << "It's not a palindrome" << endl;
    }
    return 0;
}*/


//BUBBLE SORT 
/*#include<iostream>
using namespace std;


void sortArray(int *arr, int n){

    //base case - alredy sorted
    if(n==0 || n ==1){
        return ;
    }

    // 1 case solve karlia - largest element ko end me rakh dega
    for(int i =0; i<n-1;i ++){
        if(arr[i]>arr[i+1]){
            swap(arr[i], arr[i+1]);
        }
    }
    sortArray(arr, n-1);

}
int main(){
    int arr[5] = {2,5,1,6,9};
    sortArray(arr,5);

    for(int i=0;i<5;i++){
        cout<<arr[i] <<" ";
    }
}
*/

// CALCULATE POWER USING RECURSION 


 /*#include <bits/stdc++.h>
using namespace std;

bool isSubsetSum(vector<int>& set, int n, int sum) {
    vector<vector<bool>> dp(n + 1, vector<bool>(sum + 1, false));

    for (int i = 0; i <= n; i++)
        dp[i][0] = true;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= sum; j++) {
            if (set[i - 1] <= j)
                dp[i][j] = dp[i - 1][j] || dp[i - 1][j - set[i - 1]];
            else
                dp[i][j] = dp[i - 1][j];
        }
    }

    return dp[n][sum];
}

int main() {
    // Display your details
    cout << "Name: Arpit Shukla\n";
    cout << "Roll Number: 23BCS11191\n";
    cout << "UID: 23BCS11191\n";
    cout << "Class: 628-B, Department of Computer Science & Engineering\n\n";

    int n, sum;

    cout << "Enter number of elements: ";
    cin >> n;
    vector<int> set(n);

    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++)
        cin >> set[i];

    cout << "Enter the sum to check: ";
    cin >> sum;

    if (isSubsetSum(set, n, sum))
        cout << "Subset with the given sum exists\n";
    else
        cout << "No subset with the given sum exists\n";

    return 0;
}*/

