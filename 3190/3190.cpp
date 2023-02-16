#include <stdio.h>
#include <cstring>
#include <string>
#include <deque>
#include <map>
#include <iostream>

#define ROAD 0b00000001
#define PLAYER 0b00000010
#define APPLE 0b00000100
#define WALL 0b00001000

using namespace std;

int timer = 0;
char board[102][102];

void getNextPos(int *x, int *y, const string& headDirection) {
    if (headDirection == "RIGHT") {
        *x += 1;
    } else if (headDirection == "LEFT") {
        *x -= 1;
    } else if (headDirection == "UP") {
        *y -= 1;
    } else if (headDirection == "DOWN") {
        *y += 1;
    }
}

void rotateHead(string& headDirection, const char rotateDirection) {
    if (headDirection == "RIGHT") {
        if (rotateDirection == 'L') {
            headDirection = "UP";
        } else if (rotateDirection == 'D') {
            headDirection = "DOWN";
        }
    } else if (headDirection == "LEFT") {
        if (rotateDirection == 'L') {
            headDirection = "DOWN";
        } else if (rotateDirection == 'D') {
            headDirection = "UP";
        }
    } else if (headDirection == "UP") {
        if (rotateDirection == 'L') {
            headDirection = "LEFT";
        } else if (rotateDirection == 'D') {
            headDirection = "RIGHT";
        }
    } else if (headDirection == "DOWN") {
        if (rotateDirection == 'L') {
            headDirection = "RIGHT";
        } else if (rotateDirection == 'D') {
            headDirection = "LEFT";
        }
    }
}

void printWall(int boardLen) {
    for(int i = 0; i < boardLen + 2; ++i) {
        for(int j = 0; j < boardLen + 2; ++j) {
            printf("%d", board[j][i]);
        }
        printf("\n");
    }
}

void makeWall(int boardLen) {
    memset(board[0], WALL, boardLen+ + 2);
    memset(board[boardLen + 1], WALL, boardLen + 2);
    for (int i = 0; i < boardLen + 1; ++i) {
        board[i][0] = WALL;
        board[i][boardLen + 1] = WALL;
    }
}

int main(void) {
    int boardLen, appleCnt, rotateCnt;
    deque<pair<int, int> > snake;
    deque<pair<int, char> > rotateInfo;

    memset(board, ROAD, sizeof(board));
    cin >> boardLen >> appleCnt;
    makeWall(boardLen);
    snake.push_back(make_pair(1, 1));
    board[1][1] = PLAYER;
    for (int i = 0; i < appleCnt; ++i) {
        int x, y;
        scanf("%d %d", &x, &y);
        board[y][x] = APPLE;
    }
    cin >> rotateCnt;
    for (int i = 0; i < rotateCnt; ++i) {
        int time;
        char direction;
        scanf("%d %c", &time, &direction);
        rotateInfo.push_back(make_pair(time, direction));
    }

    string headDirection = "RIGHT";
    while (true) {
        // 상황 출력 함수
        // cout << "TIME: " << timer << "\n";
        // printWall(boardLen);
        // cout << "\n";

        int nextX = snake.front().first;
        int nextY = snake.front().second;
        ++timer;
        //다음 머리 이동 위치 확인
        getNextPos(&nextX, &nextY, headDirection);
        // 1. 벽 OR 몸 => 종료
        if (board[nextX][nextY] & (WALL | PLAYER)) break ;
        else {
        // 머리 이동
            snake.push_front(make_pair(nextX, nextY));
        // 2. 길 => 꼬리 삭제
            if (board[nextX][nextY] & ROAD) {
                board[snake.back().first][snake.back().second] = ROAD;
                snake.pop_back();
            }
            board[nextX][nextY] = PLAYER;
        }

        //방향 전환 유무 결정
        if (!rotateInfo.empty() && rotateInfo.front().first == timer) {
            rotateHead(headDirection, rotateInfo.front().second);
            rotateInfo.pop_front();
        }
    }
    cout << timer << "\n";
    return 0;
}