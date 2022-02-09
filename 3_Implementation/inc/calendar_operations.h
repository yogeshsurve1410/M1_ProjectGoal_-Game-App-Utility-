#ifndef __CALENDAR_OPERATIONS__H__
#define __CALENDAR_OPERATIONS__H__

#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<conio.h>

int check_leapYear(int year);


int getNumberOfDays(int month,int year);


char *getName(int day);

int getDayNumber(int day,int mon,int year);

char *getDay(int dd,int mm,int yy);

int checkNote(int dd, int mm);


#endif