//
//  linear.cpp
//  HW 3
//
//  Created by Drew Wan on 5/5/23.
//

// Return false if the somePredicate function returns false for at
// least one of the array elements; return true otherwise.

#include <iostream>
#include <string>
#include <cassert>
using namespace std;


bool somePredicate(string s) {
   int nDigits = 0;
   for (int k = 0; k != s.size(); k++) {
       if (isdigit(s[k]))
           nDigits++;
   }
   return nDigits == 2;
}

// Return false if the somePredicate function returns false for at
// least one of the array elements; return true otherwise.
bool allTrue(const string a[], int n) {
    if (n <= 0) {
        return true;  //base case
    }
    if (!somePredicate(a[0])) { // base case
        return false;
    }
    return allTrue(a + 1, n - 1); //recursion
    
   
}
// Return the number of elements in the array for which the
 // somePredicate function returns true.
int countTrue(const string a[], int n) {
    if (n <= 0) {
        return 0; // base case
    } else {
        if (somePredicate(a[n - 1])) { //count for predicate is true
            return countTrue(a, n - 1) + 1;
        } else {
            return countTrue(a, n - 1);
        }
    }
    
    
}
//    int first = countTrue(a, n / 2);
//    int last = countTrue(a + n / 2, n- n / 2); //sums by dividing into halves
//    return first + last;


int firstTrue(const string a[], int n) {
    
    for (int i = 0; i < n; i++) {
        if (somePredicate(a[i])) {
            //cout << i << endl;
            return i;
        }
    }
    return -1;
    
//    if (n <= 0) {
//          return -1;
//      }
//
//  if (somePredicate(a[0])==true)
//      return 0;
//  else {
//  int ft = firstTrue(a+1, n-1);
//  if(ft==-1)
//      return -1;
//    return ft+1;
//  }
}
// Return the subscript of the first string in the array that is >= all
// strings in the array (i.e., return the smallest subscript m such
// that a[m] >= a[k] for all k from 0 to n-1).  If the function is told
// that no strings are to be considered to be in the array, return -1.

int positionOfMax(const string a[], int n) {
    if (n <= 0) {
        return -1;
    }
    if (n == 1) {
        return 0;
    }
    int pos = positionOfMax(a, n - 1);
    if(a[n - 1] > a[pos]) {
        pos = n - 1;
    }
    return pos;
    
    
   
}
// If all n2 elements of a2 appear in the n1 element array a1, in
// the same order (though not necessarily consecutively), then
// return true; otherwise (i.e., if the array a1 does not include
// a2 as a not-necessarily-contiguous subsequence), return false.
// (Of course, if a2 is empty (i.e., n2 is 0), return true.)
// For example, if a1 is the 7 element array
//    "john" "sonia" "elena" "ketanji" "sonia" "elena" "samuel"
// then the function should return true if a2 is
//    "sonia" "ketanji" "samuel"
// or
//    "sonia" "elena" "elena"
// and it should return false if a2 is
//    "sonia" "samuel" "ketanji"
// or
//    "john" "ketanji" "ketanji"
bool contains(const string a1[], int n1, const string a2[], int n2) {
    if (n2 <= 0) {
        return true;
    }
    if (n1 < n2) {
        return false;
    }
    if (a1[0] == a2[0]) {
        return contains(a1 + 1, n1 - 1, a2 + 1, n2 - 1);
    }
    return  contains(a1 + 1, n1 - 1, a2, n2);
}













