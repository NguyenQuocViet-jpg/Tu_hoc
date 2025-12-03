#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME 100

typedef struct {
    char name[MAX_NAME];
    float score;
    char grade[20];
} Student;

/* Hàm xác định học lực theo điểm */
void compute_grade(float score, char *out_grade) {
    if (score >= 9.0f) {
        strcpy(out_grade, "Xuat sac");
    } else if (score >= 8.0f) {
        strcpy(out_grade, "Gioi");
    } else if (score >= 6.5f) {
        strcpy(out_grade, "Kha");
    } else if (score >= 5.0f) {
        strcpy(out_grade, "Trung binh");
    } else {
        strcpy(out_grade, "Yeu");
    }
}

/* So sánh cho qsort: giảm dần theo score */
int cmp_desc_score(const void *a, const void *b) {
    const Student *sa = (const Student *)a;
    const Student *sb = (const Student *)b;
    if (sa->score < sb->score) return 1;
    if (sa->score > sb->score) return -1;
    return 0;
}

/* Hapus newline do fgets để input tên */
void trim_newline(char *s) {
    size_t len = strlen(s);
    if (len == 0) return;
    if (s[len-1] == '\n') s[len-1] = '\0';
}

int main() {
    int n;
    printf("Nhap so luong sinh vien: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("So luong khong hop le.\n");
        return 1;
    }

    /* xoa newline con lai sau scanf */
    int c;while ((c = getchar()) != '\n' && c != EOF) { }

    Student *arr = (Student *)malloc(sizeof(Student) * n);
    if (!arr) {
        printf("Cap phat bo nho that bai.\n");
        return 1;
    }

    for (int i = 0; i < n; ++i) {
        printf("\n--- Sinh vien %d ---\n", i+1);
        printf("Ho va ten: ");
        if (!fgets(arr[i].name, MAX_NAME, stdin)) {
            strcpy(arr[i].name, "Unknown");
        }
        trim_newline(arr[i].name);

        printf("Diem: ");
        if (scanf("%f", &arr[i].score) != 1) {
            arr[i].score = 0.0f;
            /* clear bad input */
            while ((c = getchar()) != '\n' && c != EOF) { }
        } else {
            /* clear trailing newline before next fgets */
            while ((c = getchar()) != '\n' && c != EOF) { }
        }

        compute_grade(arr[i].score, arr[i].grade);
    }

    /* Sap xep giam dan theo diem */
    qsort(arr, n, sizeof(Student), cmp_desc_score);

    /* Hien thi ket qua */
    printf("\n\n--- Danh sach sinh vien (sap xep theo diem giam dan) ---\n");
    printf("%-4s | %-30s | %-6s | %-12s\n", "STT", "Ho va ten", "Diem", "Hoc luc");
    printf("---------------------------------------------------------------\n");
    for (int i = 0; i < n; ++i) {
        printf("%-4d | %-30s | %-6.2f | %-12s\n",
               i+1, arr[i].name, arr[i].score, arr[i].grade);
    }

    free(arr);
    return 0;
}
//if(arr[i][j] < arr[a][b]){
//c = arr[a][b];
//arr[a][b] = arr[i][j];
//arr[i][j] = c;
//}