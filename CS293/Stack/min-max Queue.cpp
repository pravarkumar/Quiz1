/* this is actually an insane question like in thi they literally get everything we gett he armotized O(1) thingy which is that we can use two stacks to make
a queue and then like this also has an awesome tick for the min and the max like w ecan make mx1 , mx2 as the max of st1 and st2 resp and then when we transfer 
have to make sure toousht he min(current elemnt, already top) this ensures that like if this elemnt is chosen thne the elents beneath this give this min 
firs briliiant move the secodn brialliiant move is that wehne w triansfer then w ecan see that whne w ar etanferring in the sam ewhilw loop of the transer we can 
also have like that x is goign to s2 so do the same hting do the max(x,top(mx2)) ansd its insane that this also works.
*/
#include "min-max-queue.h"

/*
The task of this question is to implement a Min Max Queue, a queue
data structure that can find the minimum/maximum of ALL
the elements CURRENTLY PRESENT in it in O(1)/amortized O(1) time.
The queue should also be able to push/pop in amortized O(1) time.
Checking front/empty should also be O(1) time.

In min-max-queue.cpp, complete the function definitions
(You may leave the constructor/destructor empty if not needed).
Feel free to add any member variables/functions to this class or
any new class/struct(s) if needed. There are brief descriptions
for the given functions as well.

Constraints:
 - 0 <= n <= 10^7 (or 10 million) where n are the number of
   elements pushed/popped from queue.
 - Only non-negative integers (any from 0 to 2^31-1) will be
   pushed into the queue.

2 public testcases have been given to you (one for small n and other
for large). There will be some hidden testcases as well.
Your grading will depend on the output obtained from the hidden
testcases ONLY and NOT the 2 public ones.

"min-max-queue.cpp" shall ONLY be considered for grading (Don't put your solution in any other file).
DON'T TOUCH "main.cpp" or any ".h" file.

NOTE: NO OTHER "#include"s are allowed. Straight 0 if did.

During grading, a time limit will be set for the execution on the
testcases. If the functions are implemented in O(1)/amortized O(1)
time, then you don't need to worry about the time limit, they won't
exceed it. (Long testcase may take few seconds).

More efficient implementations will get greater marks!!

In case of the queue is empty, return INT_MAX for getMin(),
return INT_MIN for getMax() and return -1 for front().

*/

//I already how how to implement a queue using 2 stacks but we need to find 
//the min and the max elemtns here which is concernig we need to derive an algorithm which
//basically return the min and the max value at the point 
//so like we can have that it took me O(n) for the first min finidng then it took me O(1)
//for the rest
class MinMaxQueue {
private:
  // Add your fields here!!
  stack<int>st1,st2;
  stack<int>mn1,mn2;
  stack<int>mx1,mx2;

public:
  MinMaxQueue() {

  }
  void transfer() {
    while (!st1.empty()) {

        int x = st1.top();

        st1.pop();
        mn1.pop();
        mx1.pop();

        st2.push(x);

        if (mn2.empty()) {
            mn2.push(x);
        }
        else {
            mn2.push(min(x, mn2.top()));
        }

        if (mx2.empty()) {
            mx2.push(x);
        }
        else {
            mx2.push(max(x, mx2.top()));
        }
    }
}

  void push(int n) {
    st1.push(n);
    if(mn1.empty()){
      mn1.push(n);
    }
    else{
      mn1.push(min(n,mn1.top()));
    }
    if(mx1.empty()){
      mx1.push(n);
    }
    else{
      mx1.push(max(n,mx1.top()));
    }
    return;
  }

  void pop() {
    if(empty()){
      return;
    }
    if(st2.empty()){
      transfer();
    }
    st2.pop();
    mn2.pop();
    mx2.pop();
  }

  int front() {
    if(empty()){
      return -1;
    }
    if(st2.empty()){
      transfer();
    }
    int x=st2.top();
    return x;
  }

  int getMin() {
    if(empty()){
      return INT_MAX;
    }
    if(mn2.empty()){
      return mn1.top();
    }
    else if(mn1.empty()){
      return mn2.top();
    }
    else{
      return min(mn1.top(),mn2.top());
    }
  }

  int getMax() {
    if(empty()){
      return INT_MIN;
    }
      if(mx2.empty()){
      return mx1.top();
    }
    else if(mx1.empty()){
      return mx2.top();
    }
    else{
      return max(mx1.top(),mx2.top());
    }
  }

  bool empty() {
    if(st1.size()+st2.size()==0){
      return true;
    }
    return false;
  }
};
