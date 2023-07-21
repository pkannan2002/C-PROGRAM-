#include <stdio.h>

struct student {
    char name[20];
    int age;
    int phone;
    int tamil;
    int english;
    float math;
};

int main() {
    int size;
    printf("Enter the number of students: ");
    scanf("%d", &size);
    struct student s[size];
    for(int i = 0; i < size; i++) {
        printf("Enter the details of student %d: \n", i+1);
        scanf("%s %d %d %d %d %f", s[i].name, &s[i].age, &s[i].phone, &s[i].tamil, &s[i].english, &s[i].math);
    }

    printf("Details of students:\n");
    for(int i = 0; i < size; i++) {
        printf("%s %d %d %d %d %.1f\n", s[i].name, s[i].age, s[i].phone, s[i].tamil, s[i].english, s[i].math);
    }

    return 0;
}

