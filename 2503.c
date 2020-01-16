#include <stdio.h>
int main()
{
    int n, jud[101][3], qnum[101][4], tmpnum, rescnt = 0;
    int tnum[999][4];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d %d %d", &tmpnum, &jud[i][0], &jud[i][1]);
        qnum[i][0] = tmpnum / 100;
        tmpnum %= 100;
        qnum[i][1] = tmpnum / 10;
        tmpnum %= 10;
        qnum[i][2] = tmpnum;
    }
    int inx = -1;
    for (int i = 102; i <= 999; i++) {
        int strike, ball;
        int chknum[10] = { 0,};
        int chk = 0;
        int ti = i;
        tnum[++inx][0] = ti / 100; ti %= 100;
        tnum[inx][1] = ti / 10;  ti %= 10;
        tnum[inx][2] = ti;
        chknum[tnum[inx][0]]++; chknum[tnum[inx][1]]++; chknum[tnum[inx][2]]++;
        for (int j = 0; j < 10; j++) {
            if (chknum[j] > 1 || tnum[inx][0] ==0 || tnum[inx][1] ==0 || tnum[inx][2] == 0) {
                chk = 1;
                break;
            }
        }
        if (chk == 0) {  
            int chkcnt = 0;
            for (int k = 0; k < n; k++) {
                strike = 0, ball = 0;
                for (int l = 0; l < 3; l++) {
                    for (int x = 0; x < 3; x++) {
                        if (l == x) {
                            if (qnum[k][l] == tnum[inx][x]) {
                                strike++;
                            }
                        }
                        else {
                            if (qnum[k][l] == tnum[inx][x]) {
                                ball++;
                            }
                        }
                    }
                }
                if (jud[k][0] == strike && jud[k][1] == ball) {
                    chkcnt++;
                }
            }
            if (chkcnt == n) {
                rescnt++;
            }
        }
    }
    printf("%d\n", rescnt);
    return 0;
}