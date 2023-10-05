//
//  main.cpp
//  HW 3
//
//  Created by Drew Wan on 5/5/23.
//
/*
#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
 
}
 
 
 
 
 #include <iostream>
 #include <string>
 #include <cassert>
 using namespace std;
 
 
 
*/
//Maze
/*
int main() {
    char maze[10][10] = {
        { 'X','X','X','X','X','X','X','X','X','X' },
        { 'X','.','.','.','X','.','.','.','.','X' },
        { 'X','.','.','X','X','.','X','X','.','X' },
        { 'X','.','X','.','.','.','.','X','X','X' },
        { 'X','X','X','X','.','X','X','X','.','X' },
        { 'X','.','.','X','.','.','.','X','.','X' },
        { 'X','.','.','X','.','X','.','.','.','X' },
        { 'X','X','.','X','.','X','X','X','X','X' },
        { 'X','.','.','.','.','.','.','.','.','X' },
        { 'X','X','X','X','X','X','X','X','X','X' }
    };

    if (pathExists(maze, 3,4, 8,1))
        cout << "Solvable!" << endl;
    else
        cout << "Out of luck!" << endl;
}
*/
/*
//Tree
int main()
{
    string arr1[] = {"apple", "banana", "cherry", "date", "elderberry"};
    int n1 = 5;
    cout << "Before sorting: ";
    for (int i = 0; i < n1; i++) {
        cout << arr1[i] << " ";
    }
    cout << endl;
    order(arr1, n1);
    cout << "After sorting: ";
    for (int i = 0; i < n1; i++) {
        cout << arr1[i] << " ";
    }
    cout << endl;

    string arr2[] = {"grape", "fig", "durian", "apple"};
    int n2 = 4;
    cout << "Before sorting: ";
    for (int i = 0; i < n2; i++) {
        cout << arr2[i] << " ";
    }
    cout << endl;
    order(arr2, n2);
    cout << "After sorting: ";
    for (int i = 0; i < n2; i++) {
        cout << arr2[i] << " ";
    }
    cout << endl;

    string arr3[] = {"zucchini"};
    int n3 = 1;
    cout << "Before sorting: ";
    for (int i = 0; i < n3; i++) {
        cout << arr3[i] << " ";
    }
    cout << endl;
    order(arr3, n3);
    cout << "After sorting: ";
    for (int i = 0; i < n3; i++) {
        cout << arr3[i] << " ";
    }
    cout << endl;

    return 0;
}

*/
//Linear
/*
 
 bool somePredicate(string s) {
    int nDigits = 0;
    for (int k = 0; k != s.size(); k++) {
        if (isdigit(s[k]))
            nDigits++;
    }
    return nDigits == 2;
 }
int main() {
//   string aarr1[] = {"1234567890", "1234567890", "1234567890"};
//   assert(allTrue(aarr1, 3) == true);
//
//   string aarr2[] = {"1234567890", "1234567890", "12345678901"};
//   assert(allTrue(aarr2, 3) == false);
//
//   string aarr3[] = {};
//   assert(allTrue(aarr3, 0) == true);
//
//   string aarr4[] = {"1234567890"};
//   assert(allTrue(aarr4, 1) == true);
//    //========================
//    string arrr1[] = {"1234567890", "1234567890", "1234567890"};
//    assert(countTrue(arrr1, 3) == 3);
//
//    string arrr2[] = {"1234567890", "1234567890", "12345678901"};
//    assert(countTrue(arrr2, 3) == 2);
//
//    string arrr3[] = {};
//    assert(countTrue(arrr3, 0) == 0);
//
//    string arrr4[] = {"1234567890"};
//    assert(countTrue(arrr4, 1) == 1);
//
//    // ==========
//    // Test case 1: The first element is the only element that satisfies the predicate
//    string arr1[] = {"0123456789", "abcdefghij", "klmnopqrst", "uvwxyz", "0123456789"};
//    int size1 = 5;
//    assert(firstTrue(arr1, size1) == 0);
//
//    // Test case 2: The last element satisfies the predicate
//    string arr2[] = {"abcdefghij", "klmnopqrst", "uvwxyz", "0123456789", "0123456789"};
//    int size2 = 5;
//    assert(firstTrue(arr2, size2) == 3);
//
//    // Test case 3: No element satisfies the predicate
//    string arr3[] = {"abcdefghij", "klmnopqrst", "uvwxyz", "1234", "56789"};
//    int size3 = 5;
//    assert(firstTrue(arr3, size3) == -1);
//
//    // Test case 4: Only the middle element satisfies the predicate
//    string arr4[] = {"abcdefghij", "1234567890", "0123456789"};
//    int size4 = 3;
//    cout <<firstTrue(arr4, size4) << endl;
//    //assert(firstTrue(arr4, size4) == 1);
//
//    // Test case 5: Only the last element satisfies the predicate
//    string arr5[] = {"abcdefghijklm", "nopqrstuvwxyz", "0123456789"};
//    int size5 = 3;
//    assert(firstTrue(arr5, size5) == 2);
//
//    //===============
//
//    string arr[] = {"11", "111", "1111", "1"};
//    int n = 4;
//    int result = positionOfMax(arr, n);
//    assert(result == 2);
//
//    string arar1[] = {"", "", "s", ""};
//    assert(positionOfMax(arar1, 4) == 2);
//
////    string arra[] = {"a", "b" "z"};
////    cout << positionOfMax(arra, 3) << endl;
//    //assert(positionOfMax(arra, 3) == 0);
//
//    string arra1[] = {"zb", "za", "sz", "sy"};
//    cout << positionOfMax(arra1, 3) << endl;
//
//
//    //================
//    string a[] = { "john", "sonia","elena", "ketanji", "sonia", "elena", "samuel" };
//    string b[] = {"sonia", "elena", "elena" };
//    //string b[] = { "sonia" "samuel" "ketanji" };
//    assert(contains(a, 7, b, 3) == true);
//
//    string a1[] = {"john", "sonia", "elena", "ketanji", "sonia", "elena", "samuel"};
//    int n1 = 7;
//    string a2[] = {"sonia", "ketanji", "samuel"};
//    int n2 = 3;
//    bool result1 = contains(a1, n1, a2, n2);
//    assert(result1 == true);
//
//    string b1[] = {"john", "sonia", "elena", "ketanji", "sonia", "elena", "samuel"};
//    string b2[] = {};
//    bool result2 = contains(b1, 7,b2, 0);
//    assert(result2 == true);
//    cout << "yay" << endl;
    //allTrue test cases
    string emptyArray[] = {""};
    assert(allTrue(emptyArray, 0));
    assert(allTrue(emptyArray, -5));
    string a[] = { "2s5df", "ef4ghg2", "ijk6l3g" };
    assert(allTrue(a, 3));
    string b[] = {"2sdf", "ef4ghg2", "ijk6l3g"};
    assert(!allTrue(b, 3));
    string c[] = { "sdf", "ef4ghg", "ijkl3g" };
    assert(!allTrue(c, 3));
    string d[] = { "45cv" };
    assert(allTrue(d, 1));

    //firstTrue test cases
    assert(firstTrue(emptyArray, 0) == -1);
    assert(firstTrue(emptyArray, -2) == -1);
    assert(firstTrue(a, 3) == 0);
    assert(firstTrue(b, 3) == 1);
    assert(firstTrue(c, 3) == -1);
    assert(firstTrue(d, 1) == 0);

    //countTrue test cases
    assert(countTrue(emptyArray, 0) == 0);
    assert(countTrue(emptyArray, -2) == 0);
    assert(countTrue(a, 3) == 3);
    assert(countTrue(b, 3) == 2);
    assert(countTrue(c, 3) == 0);
    assert(countTrue(d, 1) == 1);

    //positionOfMax test cases
    assert(positionOfMax(emptyArray, 0) == -1);
    assert(positionOfMax(emptyArray, -2) == -1);
    assert(positionOfMax(a, 3) == 2);
    assert(positionOfMax(c, 3) == 0);
    assert(positionOfMax(d, 1) == 0);
    string e[] = { "c", "z", "a" };
    assert(positionOfMax(e, 3) == 1);
    string f[] = { "hello", "hello", "hello"};
    assert(positionOfMax(f, 3) == 0);

    //contains test cases
    string emptyArray2[] = { "" };
    assert(contains(emptyArray, 0, emptyArray2, 0));
    assert(contains(a, 3, emptyArray2, 0));
    assert(!contains(emptyArray, 0, a, 3));
    assert(contains(a, 3, a, 3));
    assert(!contains(d, 1, a, 3));
    assert(!contains(a,3,d,1));
    string g[] = { "apple", "banana", "kiwi" };
    string h[] = { "apple", "banana", "kiwi", "orange" };
    assert(! contains(g, 3, h, 4));
    assert(contains( h, 4, g, 3));
    string i[] = { "kiwi" };
    assert(contains(h, 4, i, 1));
    string j[] = { "banana", "apple" };
    assert(!contains(g, 3, j, 2));

    cout << "all tests passed" << endl;

    return 0;
}

*/

//event
/*
 int main()
 {
     Event* events[4];
     events[0] = new BasketballGame("Lakers vs. Warriors");
       // Concerts have a name and a genre.
     events[1] = new Concert("Ricardo Arjona", "Latin pop");
     events[2] = new Concert("Erykah Badu", "neo soul");
     events[3] = new HockeyGame("Kings vs. Oilers");

     cout << "Here are the events." << endl;
     for (int k = 0; k < 4; k++)
         display(events[k]);

       // Clean up the events before exiting
     cout << "Cleaning up." << endl;
     for (int k = 0; k < 4; k++)
         delete events[k];
 }
 
 void display(const Event* e)
 {
     cout << e->name() << ": ";
     if (e->isSport())
         cout << "(sport) ";
     cout << "needs " << e->need() << endl;
 }
 */
