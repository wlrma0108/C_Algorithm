#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <stdlib.h>
#include<string.h>
int main(void) {



    //���� �о����
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
    //buffer�� �����Ҵ� ���� ���� �����Ŀ� Total ���ڿ��� �Է�
   // �������� S���� B������ ���� ���ڿ��� ���ΰ���
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

    //���α׷� �ȳ�
    printf("\nŰ����ũ :: �����ڿ� : ����\n");
    printf("1. ����ǥ ����\n");
    printf("2. ����ǥ ����\n");
    printf("3. ����ǥ ����\n");
    printf("4. ����ǥ ���\n");
    printf("5. ���α׷� ����\n");

    int num;
    int bus;
    scanf("%d", &num);
    // ����ġ���� ���ؼ� ����
    // ����ġ���� �ι� ����Ͽ� ����� �λ� ������ ������
    switch (num)
    {
    case 1:
        //����ġ���� ���� ���� ����
        printf("� ������ ���ڽ��ϱ� \n1. �λ�\n2. ����\n");
        scanf("%d", &bus);
        switch (bus)
        {
            // 1�� ���ý� ����� ������ �ٽ� ���� ������ ���¸� ���
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

        printf("� ������ ���ڽ��ϱ� \n1. �λ�\n2. ����\n");
        scanf("%d", &bus);
        switch (bus)
        {
            // ���� �̹� �ִ� �¼��̶�� ���� ó���Ѵ�.
            // if ���� ���ؼ� �� ������ �¼� �ľ� �迭�μ� ���� �����ߴ�.
            // for���� ���� ����Ǿ� �ִ� �¼����� üũ
            // �迭�� ���ڸ� �ľ��Ͽ� ���ǹ��� ���� �̹� �ִ� �¼����� üũ ���ٸ� �Է�
            // ���ٸ� �迭�� ���� �κ��� �����Ͽ� ����
        case 1:
            printf("�¼��� �����ϼ���");
            scanf("%d", &select);
            for (int i = 0; i < 10; i++) {
                if ((int)Busan[i][6] == select || (int)Busan[i][7] * 10 + (int)Busan[i][6] == select) {
                    printf("�̹� ����� �¼��Դϴ�.");
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
            printf("���Ÿ� �Ϸ��Ͽ����ϴ�. �����մϴ�.");

            break;
        case 2:
            printf("�¼��� �����ϼ���");
            scanf("%d", &select);
            for (int i = 0; i < 10; i++) {
                if ((int)Seoul[i][6] == select || (int)Seoul[i][7] * 10 + (int)Seoul[i][6] == select) {
                    printf("�̹� ����� �¼��Դϴ�.");
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
            printf("���Ÿ� �Ϸ��Ͽ����ϴ�. �����մϴ�.");

            break;

        default:
            break;
        }

        break;
    case 3:
        printf("� ������ ���ڽ��ϱ� \n1. �λ�\n2. ����\n");
        scanf("%d", &bus);
        switch (bus)
        {
            // ���� �̹� �ִ� �¼��̶�� ���� ó���Ѵ�.
            // �κ����� ���ؼ� �����¼��� ������ �¼� �ľ�
            // �̹� �迭�� ���� �����Ѵٸ� erroró�� 
            // ���ٸ� �迭�� ���� �ֱ� 
            // ������ 0�ο�
        case 1:
            printf("������ �¼��� �����ϼ���\n");

            scanf("%d", &select);

            printf("������ �¼��� �����ϼ���");

            scanf("%d", &change);
            printf("%d���� %d�� �¼��� �����Ͽ����ϴ�.", select, change);
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
            printf("������ �¼��� �����ϼ���\n");

            scanf("%d", &select);

            printf("������ �¼��� �����ϼ���");

            scanf("%d", &change);
            printf("%d���� %d�� �¼��� �����Ͽ����ϴ�.", select, change);
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
        printf("� ������ ���ڽ��ϱ� \n1. �λ�\n2. ����\n");
        scanf("%d", &bus);
        switch (bus)
        {
            // �����ϰ��� �ϴ� �¼��� ���ٸ� erroró��
            // ���� �� �ڸ����� �����Ⱚ ����
            // �迭�� �����Ͽ� ���� �Ǵ�
            // ���
        case 1:

            printf("������ �¼��� �������ּ���");
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
                printf("�����Ͻ� �¼��� �����Ǿ����ϴ�.");
            }

            break;
        case 2:
            printf("������ �¼��� �������ּ���");
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
                printf("�����Ͻ� �¼��� �����Ǿ����ϴ�.");
            }

            break;
        default:
            break;
        }
        break;
    case 5:
        printf("���α׷��� ����Ǿ����ϴ�.");
    default:
        break;
    }
    printf("\n\n���� ��.\n\n");

    for (int i = 0; i < 10; i++) {
        fprintf(fp, "%s\n", Busan[i]);
    }
    for (int i = 0; i < 10; i++) {
        fprintf(fp, "%s\n", Seoul[i]);
    }
    fclose(fp);
}