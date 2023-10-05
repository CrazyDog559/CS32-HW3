//
//  maze.cpp
//  HW 3
//
//  Created by Drew Wan on 5/5/23.
//

#include <iostream>
#include <string>
#include <cassert>
using namespace std;

bool pathExists(char maze[][10], int sr, int sc, int er, int ec) {
    if (sr == er && sc == ec) {
        return true;
    }
    maze[sr][sc] = ' ';
    
    if(sc > 0 && maze[sr][sc - 1] == '.') {
        maze[sr][sc - 1] = ' ';
        if (pathExists(maze, sr, sc - 1, er, ec)) {
            return true;
        }
    }
    if (sr > 0 && maze[sr - 1] [sc] == '.') {
        maze[sr - 1][sc] = ' ';
        if (pathExists(maze, sr - 1, sc, er, ec)) {
            return true;
        }
        
    }
    if(sc < 9 && maze[sr][sc + 1] == '.') {
        maze[sr][sc + 1] = ' ';
        if (pathExists(maze, sr, sc + 1,er,ec)) {
            return true;
        }
    }
    if (sr < 9 && maze[sr + 1][sc] == '.') {
        maze[sr + 1][sc] = ' ';
        if(pathExists(maze, sr + 1, sc, er, ec)) {
            return true;
        }
    }
    return false;
    
}

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




