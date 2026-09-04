// FUNCTIONS---

    /*#include<bits/stdc++.h>
    using namespace std;
    // FUNCTION ARE SET OF CODE WWHICH PERFORMS SOMETHING FOR YOU
    // FUNCTIONS ARE USED TO MODURALISE CODE
    // FUNCTIONS ARE USED TO INCREASE RELIABILITY
    // FUNCTIONS ARE USED TO USE SAME CODE MUL;TIPLE TIMES
    // void -> function which does nolt return anythimg 

    int main() {
        cout << "Hello World" << endl;
        return 0;
    }*/

// VOID FUNCTION

/*#include<bits/stdc++.h>
using namespace std;

void greet() {
    cout << "Hello World" << endl;
}

int main() {
    greet();
    return 0;
}*/

// PARAMETERISED FUNCTION

// IT IS A FUNCTION THAT TAKES INPUT VALUE 

/*#include <bits/stdc++.h>
using namespace std;

void add(int a, int b) {
    cout << a + b << endl;
}

int main() {
    add(5, 3);
    return 0;
}*/ 

// NON-PARAMETERIZED FUNCTION

// A non-parameterized function does not take any input.

/*#include <bits/stdc++.h>
using namespace std;

void greet() {
    cout << "Hello World" << endl;
}

int main() {
    greet();
    return 0;
}*/

// FUNCTION PASS BY VALUE AND PASS BY REFERENCE

void explainList(){
    list<int> ls;

    ls.push_back(2);{2}
    ls.emplace_back(3); // {2,3}
    ls.push_front(1); // {1,2,3};

    ls.emplace_front(0); // {0,1,2,3}
    // rest function same as vector
    // begin , end , rbegin, rend, clear, insert, size, swap
}

void explainDeque(){
    deque<int> dq;

    dq.push_back(2); // {2}
    dq.emplace_back(3); // {2,3}
    dq.push_front(1); // {1,2,3};

    dq.emplace_front(0); // {0,1,2,3}
    // rest function same as vector
    // begin , end , rbegin, rend, clear, insert, size, swap
}

void explainStack(){
    stack<int> st;

    st.push(1); // {1}
    st.push(2); // {1,2}
    st.push(3); // {1,2,3}

    cout << st.top() << endl; // 3
    st.pop(); // {1,2}
    cout << st.top() << endl; // 2
} 

void explainQueue(){
    queue<int> q;

    q.push(1); // {1}
    q.push(2); // {1,2}
    q.push(3); // {1,2,3}
    q.emplace(4); // {1,2,3,4}

    cout << q.front() << endl; // 1
    q.pop(); // {2,3}
    cout << q.front() << endl; // 2
}

void explainSet(){
    set<int> st;

    st.insert(1); // {1}
    st.insert(2); // {1,2}
    st.insert(2); // {1,2}
    st.insert(4); // {1,2,4}
    st.emplace(3); // {1,2,3,4}

    for(auto i:st){
        cout << i << endl; // 1 2 3 4
    }

    auto it = st.find(3);
    if(it != st.end()){
        cout << "Found " << *it << endl; // Found 3
    } else {
        cout << "Not Found" << endl;
    }
}

void explainMultiSet(){
    multiset<int> ms;

    ms.insert(1); // {1}
    ms.insert(2); // {1,2}
    ms.insert(2); // {1,2,2}
    ms.insert(4); // {1,2,2,4}
    ms.emplace(3); // {1,2,2,3,4}

    for(auto i:ms){
        cout << i << endl; // 1 2 2 3 4
    }

    auto it = ms.find(3);
    if(it != ms.end()){
        cout << "Found " << *it << endl; // Found 3
    } else {
        cout << "Not Found" << endl;
    }
}

void explainUset(){
    unordered_set<int> us;
    // it doesn not stored in sorted order
    // it randomly stored in memory

    us.insert(1); // {1}
    us.insert(2); // {1,2}
    us.insert(2); // {1,2}
    us.insert(4); // {1,2,4}
    us.emplace(3); // {1,2,3,4}

    for(auto i:us){
        cout << i << endl; // 1 2 3 4
    }

    auto it = us.find(3);
    if(it != us.end()){
        cout << "Found " << *it << endl; // Found 3
    } else {
        cout << "Not Found" << endl;
    }
}

