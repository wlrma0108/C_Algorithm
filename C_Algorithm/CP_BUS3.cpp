#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <stdlib.h>
#include<string.h>
int main(void) {



    //파일 읽어오기
    char* tmp;
    char buffer[10];
    char* ptr;
    FILE* fp = fopen("server.txt", "r+");
    char Total[10][10] = { 0 };
    char Busan[13][13] = { 0 };
    char Seoul[13][13] = { 0 };
    int t = 0;
    int select = 0;
    int change = 0;
    int as = 0;
    int qs = 0;
    //buffer에 동적할당 이후 파일 읽은후에 Total 문자열에 입력
   // 앞지리가 S인지 B인지에 따라 문자열을 따로관리
    while (!feof(fp)) {
        fgets(buffer, 100, fp);
        printf(buffer);

        for (int j = 0; j < 10; j++) {
            Total[t][j] = buffer[j];
        }
        t++;
    }
    printf("\n");
    for (int i = 0; i < 10; i++) {
        if (Total[i][0] == 'S') {
            for (int j = 0; j < 10; j++) {
                Seoul[i][j] = Total[i][j];
            }
        }
        else if (Total[i][0] == 'B') {
            for (int j = 0; j < 10; j++) {
                Busan[i][j] = Total[i][j];
            }
        }
    }



    /*
    for (int i = 0; i < 6; i++) {

        buffer = (char*)malloc(sizeof(char) *10);
        fgets(buffer, 100, fp);
        Total[i][0] =buffer;
        printf("%s", buffer);
    }

    for (int j = 0; j < 6; j++) {
        if (Total[j][0] == "BUSAN") {
            printf("\n\n\n%s", Total[j][0]);
        }
        else if (Total[j][0] == "SEOUL") {
            printf("\n\n\n%s", Total[j][0]);
        }

    }
    */
    for (int i = 0; i < 11; i++)
    {
        Busan[i][0] = 'B';
        Busan[i][1] = 'U';
        Busan[i][2] = 'S';
        Busan[i][3] = 'A';
        Busan[i][4] = 'N';
        Seoul[i][0] = 'S';
        Seoul[i][1] = 'E';
        Seoul[i][2] = 'O';
        Seoul[i][3] = 'U';
        Seoul[i][4] = 'L';
    }

    //프로그램 안내
    printf("\n키오스크 :: 관리자용 : 버스\n");
    printf("1. 버스표 상태\n");
    printf("2. 버스표 예메\n");
    printf("3. 버스표 변경\n");
    printf("4. 버스표 취소\n");
    printf("5. 프로그램 종료\n");

    int num;
    int bus;
    scanf("%d", &num);
    // 스위치문을 통해서 선택
    // 스위치문을 두번 사용하여 서울과 부산 각각을 제시함
    switch (num)
    {
    case 1:
        //스위치문을 통해 버스 선택
        printf("어떤 버스를 보겠습니까 \n1. 부산\n2. 서울\n");
        scanf("%d", &bus);
        switch (bus)
        {
            // 1번 선택시 서울과 버스를 다시 선택 각각의 상태를 출력
        case 1:
            for (int a = 0; a < 10; a++) {
                for (int b = 0; b < 10; b++) {
                    printf("%c", Busan[a][b]);
                }
                printf("\n");
            }
            break;
        case 2:
            for (int a = 0; a < 10; a++) {
                for (int b = 0; b < 10; b++) {
                    printf("%c", Seoul[a][b]);
                }
                printf("\n");
            }
            break;

        default:
            break;
        }

        break;
    case 2:

        printf("어떤 버스를 보겠습니까 \n1. 부산\n2. 서울\n");
        scanf("%d", &bus);
        switch (bus)
        {
            // 예메 이미 있는 좌석이라면 예외 처리한다.
            // if 문을 통해서 각 버스의 좌석 파악 배열로서 따로 관리했다.
            // for문을 통해 예약되어 있는 좌석인지 체크
            // 배열의 숫자를 파악하여 조건문을 통해 이미 있는 좌석인지 체크 없다면 입력
            // 없다면 배열의 숫자 부분을 조정하여 예약
        case 1:
            printf("좌석을 선택하세요");
            scanf("%d", &select);
            for (int i = 0; i < 10; i++) {
                if ((int)Busan[i][6] == select || (int)Busan[i][7] * 10 + (int)Busan[i][6] == select) {
                    printf("이미 예약된 좌석입니다.");
                }
                else {


                    if (select > 9) {
                        int de;
                        de = select - 10;
                        select = select / 10;
                        Busan[10][6] = char(select)+'0';
                        Busan[10][7] = char(de)+'0';

                    }
                    else {
                        Busan[10][6] = char(select) + '0';

                    }
                   
                }
                
            }
           
            for (int i = 0; i < 8; i++) {
                fprintf(fp, "%c", Busan[10][i]);
            }
            printf("예매를 완료하였습니다. 감사합니다.");

            break;
        case 2:
            printf("좌석을 선택하세요");
            scanf("%d", &select);
            for (int i = 0; i < 10; i++) {
                if ((int)Seoul[i][6] == select || (int)Seoul[i][7] * 10 + (int)Seoul[i][6] == select) {
                    printf("이미 예약된 좌석입니다.");
                    break;
                }
                else {


                    if (select > 9) {
                        int de;
                        de = select - 10;
                        select = select / 10;
                        Seoul[10][6] = char(select) + '0';
                        Seoul[10][7] = char(de) + '0';

                    }
                    else {
                        Seoul[10][6] = char(select) + '0';

                    }
                    
                }
                for (int i = 0; i < 10; i++) {
                    fprintf(fp, "%c", Seoul[10][i]);
                }

            }
            printf("예매를 완료하였습니다. 감사합니다.");

            break;

        default:
            break;
        }

        break;
    case 3:
        printf("어떤 버스를 보겠습니까 \n1. 부산\n2. 서울\n");
        scanf("%d", &bus);
        switch (bus)
        {
            // 변경 이미 있는 좌석이라면 예외 처리한다.
            // 두변수를 통해서 기존좌석과 변경할 좌석 파악
            // 이미 배열에 값이 존재한다면 error처리 
            // 없다면 배열에 집어 넣기 
            // 삭제값 0부여
        case 1:
            printf("기존의 좌석을 선택하세요\n");

            scanf("%d", &select);

            printf("변경할 좌석을 선택하세요");

            scanf("%d", &change);
            printf("%d에서 %d로 좌석을 변경하였습니다.", select, change);
            for (int i = 0; i < 10; i++) {
                if ((int)Busan[i][6] == select || (int)Busan[i][7] * 10 + (int)Busan[i][6] == select) {
                    for (int j = 0; j < 10; j++) {
                        Busan[i][j] = '0';
                    }

                }
            }
            for (int i = 0; i < 10; i++) {
                if ((int)Busan[i][6] == change || (int)Busan[i][7] * 10 + (int)Busan[i][6] == change) {
                    printf("Error");
                    break;
                }
                if (change > 9) {
                    int de;
                    de = change - 10;
                    change = change / 10;
                    Busan[10][6] = char(change) + '0';
                    Busan[10][7] = char(de) + '0';

                }
                else {
                    Busan[10][6] = char(change) + '0';

                }
            }
            for (int i = 0; i < 10; i++) {
                fprintf(fp, "%c", Busan[10][i]);
            }




            break;
        case 2:
            printf("기존의 좌석을 선택하세요\n");

            scanf("%d", &select);

            printf("변경할 좌석을 선택하세요");

            scanf("%d", &change);
            printf("%d에서 %d로 좌석을 변경하였습니다.", select, change);
            for (int i = 0; i < 10; i++) {
                if ((int)Seoul[i][6] == select || (int)Seoul[i][7] * 10 + (int)Seoul[i][6] == select) {
                    for (int j = 0; j < 8; j++) {
                        Seoul[i][j] = '0';

                    }

                }
            }
            for (int i = 0; i < 10; i++) {
                if ((int)Seoul[i][6] == change || (int)Seoul[i][7] * 10 + (int)Seoul[i][6] == change) {
                    printf("Error");
                    break;
                }
                if (change > 9) {
                    int de;
                    de = change - 10;
                    change = change / 10;
                    Seoul[10][6] = char(change) + '0';
                    Seoul[10][7] = char(de) + '0';

                }
                else {
                    Seoul[10][6] = char(change) + '0';

                }


            }

            for (int i = 0; i < 10; i++) {
                fprintf(fp, "%c", Seoul[10][i]);
            }




            break;
        default:
            break;
        }
        break;
    case 4:
        printf("어떤 버스를 보겠습니까 \n1. 부산\n2. 서울\n");
        scanf("%d", &bus);
        switch (bus)
        {
            // 삭제하고자 하는 좌석이 없다면 error처리
            // 삭제 된 자리에는 쓰레기값 투입
            // 배열을 조사하여 값을 판단
            // 출력
        case 1:

            printf("삭제할 좌석을 선택해주세요");
            scanf("%d", &select);
            for (int i = 0; i < 10; i++) {
                if ((int)Busan[i][6] == select || (int)Busan[i][7] * 10 + (int)Busan[i][6] == select) {
                    for (int j = 0; j < 10; j++) {
                        Busan[i][j] = '0';

                    }
                    as++;
                }
               
            }
            if (as == 10) {
                printf("error");
            }
            else {
                printf("지정하신 좌석이 삭제되었습니다.");
            }

            break;
        case 2:
            printf("삭제할 좌석을 선택해주세요");
            scanf("%d", &select);
            for (int i = 0; i < 10; i++) {
                if ((int)Seoul[i][6] == select || (int)Seoul[i][7] * 10 + (int)Seoul[i][6] == select) {
                    for (int j = 0; j < 10; j++) {
                        Seoul[i][j] = '0';
                    }
                }
                qs++;
            }
            if (qs == 10) {
                printf("error");
            }
            else {
                printf("지정하신 좌석이 삭제되었습니다.");
            }

            break;
        default:
            break;
        }
        break;
    case 5:
        printf("프로그램이 종료되었습니다.");
    default:
        break;
    }
    printf("\n\n변경 후.\n\n");

    for (int i = 0; i < 10; i++) {
        fprintf(fp, "%s\n", Busan[i]);
    }
    for (int i = 0; i < 10; i++) {
        fprintf(fp, "%s\n", Seoul[i]);
    }
    fclose(fp);
}