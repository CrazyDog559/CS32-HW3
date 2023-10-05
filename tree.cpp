//
//  tree.cpp
//  HW 3
//
//  Created by Drew Wan on 5/5/23.
//
#include <iostream>
#include <string>
#include <cassert>
using namespace std;


// Return the number of ways that all n2 elements of a2 appear
// in the n1 element array a1 in the same order (though not
// necessarily consecutively).  The empty sequence appears in a
// sequence of length n1 in 1 way, even if n1 is 0.
// For example, if a1 is the 7 element array
//    "john" "sonia" "elena" "ketanji" "sonia" "elena" "samuel"
// then for this value of a2            the function must return
//    "john" "ketanji" "elena"                     1
//    "john" "elena" "samuel"                      2
//    "ketanji" "john" "elena"                     0
//    "sonia" "elena" "samuel"                     3
int countIncludes(const string a1[], int n1, const string a2[], int n2) {
    if (n2 <= 0) { // base case
        return 1;
    }
    if(n2 > n1) {
        return 0;
    }
    int total = 0;
    if (a1[0] == a2[0]) {
        total += countIncludes(a1 + 1, n1 -1 , a2 + 1, n2 - 1);// recursion
    }
    total += countIncludes(a1 + 1, n1 - 1, a2, n2);// recursions
    return total;
}

  // Exchange two strings
void exchange(string& x, string& y)
{
    string t = x;
    x = y;
    y = t;
}

  // Rearrange the elements of the array so that all the elements
  // whose value is < separator come before all the other elements,
  // and all the elements whose value is > separator come after all
  // the other elements.  Upon return, firstNotLess is set to the
  // index of the first element in the rearranged array that is
  // >= separator, or n if there is no such element, and firstGreater is
  // set to the index of the first element that is > separator, or n
  // if there is no such element.
  // In other words, upon return from the function, the array is a
  // permutation of its original value such that
  //   * for 0 <= i < firstNotLess, a[i] < separator
  //   * for firstNotLess <= i < firstGreater, a[i] == separator
  //   * for firstGreater <= i < n, a[i] > separator
  // All the elements < separator end up in no particular order.
  // All the elements > separator end up in no particular order.
void separate(string a[], int n, string separator,
                                    int& firstNotLess, int& firstGreater)
{
    if (n < 0)
        n = 0;

      // It will always be the case that just before evaluating the loop
      // condition:
      //  firstNotLess <= firstUnknown and firstUnknown <= firstGreater
      //  Every element earlier than position firstNotLess is < separator
      //  Every element from position firstNotLess to firstUnknown-1 is
      //    == separator
      //  Every element from firstUnknown to firstGreater-1 is not known yet
      //  Every element at position firstGreater or later is > separator

    firstNotLess = 0;
    firstGreater = n;
    int firstUnknown = 0;
    while (firstUnknown < firstGreater)
    {
        if (a[firstUnknown] > separator)
        {
            firstGreater--;
            exchange(a[firstUnknown], a[firstGreater]);
        }
        else
        {
            if (a[firstUnknown] < separator)
            {
                exchange(a[firstNotLess], a[firstUnknown]);
                firstNotLess++;
            }
            firstUnknown++;
        }
    }
}

  // Rearrange the elements of the array so that
  // a[0] <= a[1] <= a[2] <= ... <= a[n-2] <= a[n-1]
  // If n <= 1, do nothing.
void order(string a[], int n) {
    if (n <= 1) {
        return;
    }
    int before;
    int after;
    separate(a, n, a[n/2], before, after);
    order(a,before);
    order(a + after, n - after);
}






