#include<stdio.h>
#define max 4

int rear = 0;
int front = 0;
int cnt = 0;

int student_id[max];
char student_name[max][20];

void add_student() {
    if(cnt == max) {
        printf("\nQueue is Full! Cannot add Student");
    } else {
        
        printf("\nEnter Student Id : ");
        scanf("%d",&student_id[rear]);
        printf("\nEnter Student Name : ");
        scanf("%s", student_name[rear]);
        printf("\nStudent Added Successfully...");
        rear = (rear + 1) % max;
        cnt++;
    }
}

void distribute_pass() {
    if(cnt == 0) {
        printf("\nQueue Is Empty!");
    } else {
        printf("\nPass Distributed To");
        printf("\n----------------------------------------------");
        printf("\n| Student Id |\t| Student Name |");
        printf("\n----------------------------------------------");
        printf("\n| %d |\t| %s |", student_id[front], student_name[front]);
        printf("\n----------------------------------------------");
        front = (front + 1) % max;
        cnt--;
    }
}

void waiting_students() {
    if(cnt == 0) {
        printf("\nNo Students Waiting..");
    } else {
        int i;
        printf("\nWaiting Students Are : ");
        printf("\n----------------------------------------------");
        printf("\n| Student Id |\t| Student Name |");
        printf("\n----------------------------------------------");
        for(i = front; i != rear; i = (i + 1) % max) {
            printf("\n| %d |\t| %s |", student_id[i], student_name[i]);
            printf("\n----------------------------------------------");
        }
    }
}

int main() {
    int ch;

    do {
        printf("Bus Pass Distribution System");
        printf("\n1.Add Student\n2.Distribute Pass\n3.Show Waiting Students\n4.Exit : ");
        scanf("%d", &ch);
        switch(ch) {
        case 1:
            add_student();
            break;
        case 2:
            distribute_pass();
            break;
        case 3:
            waiting_students();
            break;
        case 4:
            printf("\nExiting The System!");
            break;
        default:
            printf("\nInvalid Choice!");
        }
    } while(ch != 4);
}