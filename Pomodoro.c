#include<stdio.h>
#include <windows.h>

void doCountdown(), startWork(int workTime), startBreak(int breakTime);

int main() {
    int i, numberOfSessions, workTime, breakTime;
    printf("P O M O D O R O\nWelcome to this simple Pomodoro app. Enough talking, let's start.\nHow many sessions do you want to do? ");
    scanf("%i", &numberOfSessions);
    printf("How many minutes do you want to work before taking a break? ");
    scanf("%i", &workTime);
    printf("How many minutes of break do you want between your sessions? ");
    scanf("%i", &breakTime);
    for(i=1;i<numberOfSessions;i++) {
        startWork(workTime);
        startBreak(breakTime);
    }
    startWork(workTime);
    printf("Well. Well. You finished all your sessions.\nGet up and go have fun now!");
    Beep(850, 700);
    Beep(850, 450);
    Beep(1250, 1000);
    return 0;
}

void startWork(int workTime) {
    printf("The session is going to start in:\n");
    doCountdown();
    printf("Work time! Remember to not close this terminal window.\n");
    Sleep((workTime*60000)-5000);
    doCountdown();
}

void startBreak(int breakTime) {
    printf("Stop working, it's time for a break!\n");
    Sleep((breakTime*60000)-5000);
    doCountdown();
    printf("Break time is over!\n");
    Sleep(5000);
}

void doCountdown() {
    int j;
    for(j=5;j>0;j--) {
        printf("%i\n", j);
        Beep(1000, 750);
        Sleep(250);
    }
    Beep(1550, 1000);
}