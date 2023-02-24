#include <cstdio>

#define WHITE 0
#define BLUE 1

int bluePaper = 0;
int whitePaper = 0;
int paper[128][128] = {false,};

// 종이 자르기 백트래킹 함수
void cutPaper(int x, int y, int N) {
    // 종이 색깔이 같은지 확인
    bool isSame = true;
    const int firstPaperColor = paper[x][y];
    for (int i = x; i < x + N; ++i) {
        for (int j = y; j < y + N; ++j) {
            if (firstPaperColor != paper[i][j]) {
                isSame = false;
                break;
            }
        }
        if (!isSame) break;
    }
    // 종이 색깔이 같으면 종이 개수 증가
    if (isSame) {
        if (firstPaperColor == WHITE) whitePaper++;
        else bluePaper++;
    }
    // 종이 색깔이 다르면 종이 자르기
    else {
        cutPaper(x, y, N / 2);
        cutPaper(x + N / 2, y, N / 2);
        cutPaper(x, y + N / 2, N / 2);
        cutPaper(x + N / 2, y + N / 2, N / 2);
    }
}


int main(void) {
    int N;
    scanf("%d",  &N);
    // 종이 색깔 입력
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            scanf("%d", &paper[i][j]);
        }
    }
    // 종이 자르기 백트래킹 함수 호출
    cutPaper(0, 0, N);
    // 결과 출력
    printf("%d\n%d\n", whitePaper, bluePaper);
    return 0;
}