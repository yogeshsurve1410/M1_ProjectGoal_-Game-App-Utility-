#include<calendar_operations.h>
int check_leapYear(int year){ //checks whether the year passed is leap year or not
    if(year % 400 == 0 || (year % 100!=0 && year % 4 ==0))
       return 1;
    return 0;
}
int getNumberOfDays(int month,int year){ //returns the number of days in given month
   switch(month){                          //and year
      case 1 : return(31);
      case 2 : if(check_leapYear(year)==1)
		 return(29);
	       else
		 return(28);
      case 3 : return(31);
      case 4 : return(30);
      case 5 : return(31);
      case 6 : return(30);
      case 7 : return(31);
      case 8 : return(31);
      case 9 : return(30);
      case 10: return(31);
      case 11: return(30);
      case 12: return(31);
      default: return(-1);
   }
}

char *getName(int day){ //returns the name of the day
   switch(day){
      case 0 :return("Sunday");
      case 1 :return("Monday");
      case 2 :return("Tuesday");
      case 3 :return("Wednesday");
      case 4 :return("Thursday");
      case 5 :return("Friday");
      case 6 :return("Saturday");
      default:return("Error in getName() module.Invalid argument passed");
   }
}




int getDayNumber(int day,int mon,int year){ //retuns the day number
    int res = 0, t1, t2, y = year;
    year = year - 1600;
    while(year >= 100){
        res = res + 5;
        year = year - 100;
    }
    res = (res % 7);
    t1 = ((year - 1) / 4);
    t2 = (year-1)-t1;
    t1 = (t1*2)+t2;
    t1 = (t1%7);
    res = res + t1;
    res = res%7;
    t2 = 0;
    for(t1 = 1;t1 < mon; t1++){
        t2 += getNumberOfDays(t1,y);
    }
    t2 = t2 + day;
    t2 = t2 % 7;
    res = res + t2;
    res = res % 7;
    if(y > 2000)
        res = res + 1;
    res = res % 7;
    return res;
}

char *getDay(int dd,int mm,int yy){
    int day;
    if(!(mm>=1 && mm<=12)){
        return("Invalid month value");
    }
    if(!(dd>=1 && dd<=getNumberOfDays(mm,yy))){
        return("Invalid date");
    }
    if(yy>=1600){
        day = getDayNumber(dd,mm,yy);
        day = day%7;
        return(getName(day));
    }else{
        return("Please give year more than 1600");
    }
}

int checkNote(int dd, int mm){
    FILE *fp;
    fp = fopen("note.dat","rb");
    if(fp == NULL){
        printf("Error in Opening the file");
    }
    while(fread(&R,sizeof(R),1,fp) == 1){
        if(R.dd == dd && R.mm == mm){
            fclose(fp);
            return 1;
        }
    }
    fclose(fp);
    return 0;
}
