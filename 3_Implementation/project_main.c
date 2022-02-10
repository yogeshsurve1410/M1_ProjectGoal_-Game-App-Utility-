#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<windows.h>
#include<time.h>
#define PI 3.14159265


void clear();
void delay(int mseconds);

void clear()
{
    system("PAUSE");
    system("CLS");
}

void delay(int mseconds)
{
    clock_t goal = mseconds + clock();
    while (goal > clock());
}


void simple_scientific_calculator();
void birth_calculator();
void currency();
void energy();
void length();
void mass();
void matrix_addition();
void matrix_determind();
void matrix_devided();
void matrix_multiply();
void matrix_substraction();
void simple_calculator();
void speed();
void temperature();
void timec();
void trigonometric_function();
void sine();
void cosine();
void tangent();


int main()
{
    system("cls");
    printf("Press 1 for Simple Calculator\n");
    printf("Press 2 for Scientific Calculator\n");
    printf("Press 3 for Converter Calculator\n");
    printf("Press 4 for Exit the Program\n");
    int n;
    int s_number;
    int c_number;
    printf("Enter Your Choice...");
    scanf("%d", &n);
    system("cls");
    while(n > 0 && n <= 4){
        switch(n){
            case 1:
                simple_calculator();
                clear();
                break;
            case 2:
                printf("Press 1 for Simple Calculator\n");
                printf("Press 2 for Trigonometric Function\n");
                printf("Press 3 for Matrix Addition\n");
                printf("Press 4 for Matrix Subtraction\n");
                printf("Press 5 for Matrix Divide\n");
                printf("Press 6 for Matrix Multiply\n");
                printf("Press 7 For Main Menu\n");
                printf("Press 8 for Exit the Program\n");
                printf("Enter Your Choice...");
                scanf("%d", &s_number);
                while(s_number > 0 && s_number <= 8){
                    switch(s_number){
                        case 1:
                            simple_scientific_calculator();
                            clear();
                            break;
                        case 2:
                            system("cls");
                            trigonometric_function();
                            clear();
                            break;
                        case 3:
                            matrix_addition();
                            clear();
                            break;
                        case 4:
                            matrix_substraction();
                            clear();
                            break;
                        case 5:
                            matrix_devided();
                            clear();
                            break;
                        case 6:
                            matrix_multiply();
                            clear();
                            break;
                        case 7:
                            main();
                            clear();
                            break;
                        case 8:
                            exit(0);
                            break;
                        default:
                            break;
                    }
                    printf("Press 1 for Simple Calculator\n");
                    printf("Press 2 for Trigonometric Function\n");
                    printf("Press 3 for Matrix Addition\n");
                    printf("Press 4 for Matrix Subtraction\n");
                    printf("Press 5 for Matrix Divide\n");
                    printf("Press 6 for Matrix Multiply\n");
                    printf("Press 7 For Main Menu\n");
                    printf("Press 8 for Exit the Program\n");
                    printf("Enter Your Choice...");
                    scanf("%d", &s_number);
                }
            case 3:
                printf("Press 1 for Convert Birth Calculator\n");
                printf("Press 2 for Convert Length\n");
                printf("Press 3 for Convert Mass\n");
                printf("Press 4 for Convert Temperature\n");
                printf("Press 5 for Convert Speed\n");
                printf("Press 6 for Convert Time\n");
                printf("Press 7 for Convert Currency\n");
                printf("Press 8 for Convert Energy\n");
                printf("Press 9 For Main Menu\n");
                printf("Press 10 for Exit the Program\n");
                printf("Enter Your Choice....");
                scanf("%d", &c_number);
                while(c_number > 0 && c_number <= 10){
                    switch(c_number){
                        case 1:
                            birth_calculator();
                            clear();
                            break;
                        case 2:
                            length();
                            clear();
                            break;
                        case 3:
                            mass();
                            clear();
                            break;
                        case 4:
                            temperature();
                            clear();
                            break;
                        case 5:
                            speed();
                            clear();
                            break;
                        case 6:
                            timec();
                            clear();
                            break;
                        case 7:
                            currency();
                            clear();
                            break;
                        case 8:
                            energy();
                            clear();
                            break;
                        case 9:
                            main();
                            clear();
                            break;
                        case 10:
                            exit(0);
                            break;
                        default:
                            break;
                    }
                    printf("Press 1 for Convert Birth Calculator\n");
                    printf("Press 2 for Convert Length\n");
                    printf("Press 3 for Convert Mass\n");
                    printf("Press 4 for Convert Temperature\n");
                    printf("Press 5 for Convert Speed\n");
                    printf("Press 6 for Convert Time\n");
                    printf("Press 7 for Convert Currency\n");
                    printf("Press 8 for Convert Energy\n");
                    printf("Press 9 For Main Menu\n");
                    printf("Press 10 for Exit the Program\n");
                    printf("Enter Your Choice....");
                    scanf("%d", &c_number);
                    system("cls");
                }
            case 4:
                exit(0);
                break;
            default :
                break;
        }
    printf("Press 1 for Simple Calculator\n");
    printf("Press 2 for Scientific Calculator\n");
    printf("Press 3 for Converter Calculator\n");
    printf("Press 4 for Exit the Program\n");
    printf("Enter Your Choice...");
    scanf("%d", &n);
    system("cls");
    }

    return;
}


void simple_calculator()
{
    printf("Press 1 to  Calculate Addition\n");
    printf("Press 2 to  Calculate Subtraction\n");
    printf("Press 3 to  Calculate Multiply\n");
    printf("Press 4 to  Calculate Divided\n");
    printf("Press 5 to  Calculate Power\n");
    printf("Press 6 to  Calculate Root\n");
    printf("Press 7 for main Menu\n");
    printf("Press 8 to Exit\n");
    printf("Enter Your to Continue...");
    int simple_number;
    int a, b, result;
    double number,num, p;
    scanf("%d", &simple_number);
    while(simple_number > 0 && simple_number < 9){
        switch(simple_number){
            case 1:
                printf("\nEnter the first value  : ");
                scanf("%d", &a);
                printf("Enter the Second value : ");
                scanf("%d", &b);
                result = a + b;
                printf("Addition = %d\n\n", result);
                clear();
                break;
            case 2:
                printf("\nEnter the first value  : ");
                scanf("%d", &a);
                printf("Enter the Second value : ");
                scanf("%d", &b);
                result = a - b;
                printf("Subtraction = %d\n\n", result);
                clear();
                break;
            case 3:
                printf("\nEnter the first value  : ");
                scanf("%d", &a);
                printf("Enter the Second value : ");
                scanf("%d", &b);
                result = a * b;
                printf("Multiply = %d\n\n", result);
                clear();
                break;
            case 4:
                printf("\nEnter the first value  : ");
                scanf("%d", &a);
                printf("Enter the Second value : ");
                scanf("%d", &b);
                float result = (float) a / (float) b;
                printf("Divided = %.2f\n\n", result);
                clear();
                break;
            case 5:
                printf("\nEnter The numbers and Power\n");
                printf("Enter The Number : ");
                scanf("%lf",&number);
                printf("Enter The Power : ");
                scanf("%lf",&num);
                p = pow(number, num);
                printf("Result = %.2lf\n\n", p);
                clear();
                break;
            case 6:
                printf("\nTo Root Enter The number\n");
                printf("Enter The Number : ");
                scanf("%lf",&number);
                p = sqrt(number);
                printf("Result = %.2lf\n\n", p);
                clear();
                break;
            case 7:
                main();
                clear();
                break;
            case 8:
                exit(0);
                break;
            default:
                break;
        }
    printf("Press 1 to  Calculate Addition\n");
    printf("Press 2 to  Calculate Subtraction\n");
    printf("Press 3 to  Calculate Multiply\n");
    printf("Press 4 to  Calculate Divided\n");
    printf("Press 5 to  Calculate Power\n");
    printf("Press 6 to  Calculate Root\n");
    printf("Press 7 for main Menu\n");
    printf("Press 8 to Exit\n");
    printf("Enter Your Choice to Continue...");
    scanf("%d", &simple_number);
    }
    return;
}


void simple_scientific_calculator(){
    float a, b;
    float result;
    int count = 0;
    char check;
    printf("\nInter the value and calculate : ");
    scanf("%f %c %f", &a, &check, &b);
    if(check == '+'){
            result = a + b;
    }
    else if(check == '-'){
            result = a - b;
    }
    else if(check == '*'){
            result = a * b;
    }
    else if(check == '/'){
            result = a / b;
            count++;
    }
    else if(check == '^'){
            result = pow(a , b);
    }

    scanf("%c", &check);
    float c;
    while(check != '+' && check != '-' && check != '*' && check != '/' && check != '\n'){
        scanf("%c", &check);
        scanf("%f", &c);
        if(check == '+'){
            result = result + c;
        }
        else if(check == '-'){
            result = result - c;
        }
        else if(check == '*'){
            result = result * c;
        }
        else if(check == '/'){
            result =  result / c;
            count++;
        }
        scanf("%c", &check);
        }

    if(count != 0){
        printf("Result = %.2f\n\n", result);
    }
    else{
        printf("Result = %.0f\n\n", result);
    }

    return;
}


void trigonometric_function(){
    int trigonometric_number;
    printf("Press 1 to Find the value of sine\n");
    printf("Press 2 to Find the value of cos\n");
    printf("Press 3 to Find the value of tan\n");
    printf("Press 4 for main Menu\n");
    printf("Press 5 to Exit\n");
    printf("Enter Your Choice to continue... ");
    scanf("%d", &trigonometric_number);
    while(trigonometric_number >= 1 && trigonometric_number <= 4){
        switch(trigonometric_number){
            case 1:
                sine();
                clear();
                break;
            case 2:
                cosine();
                clear();
                break;
            case 3:
                tangent();
                clear();
                break;
            case 4:
                main();
                break;
                clear();
            case 5:
                exit(0);
                break;
            default:
                break;
        }
        printf("Press 1 to Find the value of sine\n");
        printf("Press 2 to Find the value of cos\n");
        printf("Press 3 to Find the value of tan\n");
        printf("Press 4 for main Menu\n");
        printf("Press 5 to Exit\n");
        printf("Enter Your Choice to continue... ");
        scanf("%d", &trigonometric_number);
    }
}
void sine(){
    double input, output;
    printf("\nEnter the value angle of sin : ");
    scanf("%lf", &input);
    output = sin(input*PI/180);
    printf ("sin of %.0lf degrees is %.3lf\n\n", input, output );
    return;
}
void cosine(){
    double input, output;
    printf("\nEnter the value angle of cos : ");
    scanf("%lf", &input);
    output = cos(input*PI/180);
    printf ("Cos of %.0lf degrees is %.3lf\n\n", input, output );
    return;
}
void tangent(){
    double input, output;
    printf("\nEnter the value angle of tan : ");
    scanf("%lf", &input);
    output = tan(input*PI/180);
    printf ("Tan of %.0lf degrees is %.3lf\n\n", input, output);
    return;
}


void matrix_addition()
{
    int row_size, column_size;
    printf("\nInsert Row Size    : ");
    scanf("%d", &row_size);
    printf("Insert Column Size : ");
    scanf("%d", &column_size);
    int array1[row_size][column_size], array2[row_size][column_size];
    printf("Insert the %d * %d Matrix A :\n", row_size, column_size);
    int i, j;
    for(i = 0; i < row_size; i++){
        for(j = 0; j < column_size; j++){
            scanf("%d", &array1[i][j]);
        }
    }
    printf("Insert the %d * %d Matrix B :\n", row_size, column_size);
    int k, l;
    for(k = 0; k < row_size; k++){
        for(l = 0; l < column_size; l++){
            scanf("%d", &array2[k][l]);
        }
    }
    printf("Here Matrix A + B\n", row_size, column_size);
    for(i = 0; i < row_size; i++){
        for(j = 0; j < column_size; j++){
            printf("%d ", array1[i][j]);
            printf("+");
            printf(" %d", array2[i][j]);
            printf("\t");
        }

    printf("\n");
    }
    //int sum = 0;
    printf("Summation of A , B Matrix is : \n");
    for(i = 0; i < row_size; i++){
        int sum = 0;
        //printf("\t\t\t\t\t        ");
        for(j = 0; j < column_size; j++){
            sum = array1[i][j] + array2[i][j];
        printf("%d\t", sum);
        }
        printf("\n");

    }
    printf("\n");


    //getch();
    return;
}


void matrix_substraction(){
    system("color 4a");
    int row_size, column_size;
    printf("\nInsert Row Size    : ");
    scanf("%d", &row_size);
    printf("Insert Column Size : ");
    scanf("%d", &column_size);
    int array1[row_size][column_size], array2[row_size][column_size];
    printf("Insert the %d * %d Matrix A :\n", row_size, column_size);
    int i, j;
    for(i = 0; i < row_size; i++){
        for(j = 0; j < column_size; j++){
            scanf("%d", &array1[i][j]);
        }
    }
    printf("Insert the %d * %d Matrix B :\n", row_size, column_size);
    int k, l;
    for(k = 0; k < row_size; k++){
        for(l = 0; l < column_size; l++){
            scanf("%d", &array2[k][l]);
        }
    }
    printf("Here Matrix A - B\n", row_size, column_size);
    for(i = 0; i < row_size; i++){
        for(j = 0; j < column_size; j++){
            printf("%d ", array1[i][j]);
            printf("-");
            printf(" %d", array2[i][j]);
            printf("\t");
        }

    printf("\n");
    }
    printf("SubsTraction of A , B Matrix is : \n");
    for(i = 0; i < row_size; i++){
        int sum = 0;
        for(j = 0; j < column_size; j++){
            sum = array1[i][j] - array2[i][j];
        printf("%d\t", sum);
        }
        printf("\n");
    }
    printf("\n");


    return;
}


void matrix_devided()
{
    system("cls");
    int row_size, column_size;
    printf("\n\n\n\n\n\n\n\n");
    printf("\t\t\t\t\tInsert Row Size    : ");
    scanf("%d", &row_size);
    printf("\t\t\t\t\tInsert Column Size : ");
    scanf("%d", &column_size);
    int array1[row_size][column_size], array2[row_size][column_size];
    printf("\t\t\t\t      Insert the %d * %d Matrix A :\n", row_size, column_size);
    int i, j;
    for(i = 0; i < row_size; i++){
        printf("\t\t\t\t\t\t ");
        for(j = 0; j < row_size; j++){
            scanf("%d", &array1[i][j]);
        }
    }
    printf("\t\t\t\t      Insert the %d * %d Matrix B :\n", row_size, column_size);
    int k, l;
    for(k = 0; k < row_size; k++){
        printf("\t\t\t\t\t\t ");
        for(l = 0; l < row_size; l++){
            scanf("%d", &array2[k][l]);
        }
    }
    printf("\t\t\t\t\t  Here Matrix A / B\n", row_size, column_size);
    for(i = 0; i < row_size; i++){
        printf("\t\t\t\t\t    ");
        for(j = 0; j < row_size; j++){
            printf("%d ", array1[i][j]);
            printf("/");
            printf(" %d\t", array2[i][j]);
        }

    printf("\n");
    }
    //int sum = 0;
    printf("\t\t\t\t     Divided of A , B Matrix is : \n");
    for(i = 0; i < row_size; i++){
        float divided = 0;
        printf("\t\t\t\t\t     ");
        for(j = 0; j < row_size; j++){
            divided = (float) array1[i][j] / (float) array2[i][j];
        printf("%.2f\t", divided);
        }
        printf("\n");

    }


    return;
}


void matrix_multiply()
{
    system("cls");
    int a[10][10], b[10][10], mult[10][10], a_row_size, a_column_size, b_row_size, b_column_size, i, j, k;
    int row_size, column_size;
    printf("Enter 1st Matrix Rows and Column : ");
    scanf("%d %d", &a_row_size, &a_column_size);
    printf("Enter 2nd Matrix Rows and Column : ");
    scanf("%d %d", &b_row_size, &b_column_size);
    printf("\nInsert the %d * %d Matrix A :\n", a_row_size, a_column_size);
    for(i = 0; i < a_row_size; i++){
            for(j = 0; j < a_column_size; j++){
        scanf("%d",&a[i][j]);
        }
    }
    printf("Insert the %d * %d Matrix B :\n", b_row_size, b_column_size);
    for(i = 0; i < b_row_size; i++){
        for(j = 0; j < b_column_size; j++){
            scanf("%d",&b[i][j]);
        }
    }
    for(i = 0; i < a_row_size; i++){
        for(j = 0; j < b_column_size; j++){
           mult[i][j]=0;
        }
    }
    printf("Here Matrix A * B\n", a_row_size, b_column_size);
    for(i = 0; i < a_row_size; i++){
        for(j = 0; j < b_column_size; j++){
            int count = 0;
            for(k = 0; k < a_column_size; k++){
                printf("%d * %d", a[i][k], b[k][j]);
                mult[i][j] += a[i][k]*b[k][j];
                if(count == a_column_size - 1){
                break;
            }
            count++;
            printf(" + ");
            }
           printf("\t");
        }
        printf("\n");
    }
    printf("\nResult of Matrix A * B\n", row_size, column_size);
    for(i=0; i<a_row_size; ++i){
        for(j=0; j<b_column_size; ++j){
            printf("%d\t",mult[i][j]);
        }
        printf("\n");
    }
    printf("\n");


    return;
}


void birth_calculator(){
    system("cls");
    int birth_date, birth_month, birth_day;
    int present_date, present_month, present_day;
    int date, month, day;
    printf("Enter Your Present Date Month Day : ");
    scanf("%d %d %d", &present_date, &present_month, &present_day);
    printf("Enter Your Birth Date Month Day   : ");
    scanf("%d %d %d", &birth_date, &birth_month, &birth_day);
    printf("Your Birth Calculate in Year Month Day Below\n");
    if(present_month > 12 || birth_month > 12 || present_day > 31 || birth_day > 31){
        printf("Error Calculation\n");
    }
    else{
        //d>=m>=d>=
        if((present_date > birth_date || present_date == birth_date) && (present_month > birth_month || present_month == birth_month) && (present_day > birth_day || present_day == birth_day)){
            date = present_date - birth_date;
            month = present_month - birth_month;
            day = present_day - birth_day;
            printf("Year - Month - Day\n");
            printf("%d -    %d -    %d\n", date, month, day + 1);
        }
        //d>=m>=d<=
        else if((present_date > birth_date || present_date == birth_date) && (present_month > birth_month || present_month == birth_month) && (present_day < birth_day || present_day == birth_day)){
            if(present_month == 1 || present_month == 3 || present_month == 5 || present_month == 7 || present_month == 8 || present_month == 10 || present_month == 12 ){
                date = present_date - birth_date;
                month = (present_month - 1) - birth_month;
                day = (present_day + 31) - birth_day;
                printf("Year - Month - Day\n");
                printf("%d -    %d -    %d\n", date, month, day + 1);
                }
            else{
                if(present_month != 2){
                    date = present_date - birth_date;
                    month = (present_month - 1) - birth_month;
                    day = (present_day + 30) - birth_day;
                    printf("Year - Month - Day\n");
                    printf("%d -    %d -    %d\n", date, month, day + 1);
                }
                else{
                    if(present_date % 4 != 0){
                    date = present_date - birth_date;
                    month = (present_month - 1) - birth_month;
                    day = (present_day + 29) - birth_day;
                    printf("Year - Month - Day\n");
                    printf("%d -    %d -    %d\n", date, month, day + 1);
                    }
                    else{
                    date = present_date - birth_date;
                    month = (present_month - 1) - birth_month;
                    day = (present_day + 28) - birth_day;
                    printf("Year - Month - Day\n");
                    printf("%d -    %d -    %d\n", date, month, day + 1);
                    }
                }
            }
        }
        //d>=m<=d>=
        else if((present_date > birth_date || present_date == birth_date) && (present_month < birth_month || present_month == birth_month) && (present_day > birth_day || present_day == birth_day)){
            date = (present_date - 1) - birth_date;
            month = (present_month + 12) - birth_month;
            day = present_day - birth_day;
            printf("Year - Month - Day\n");
            printf("%d -    %d -    %d\n", date, month, day + 1);
        }
        //d>=m=<d<=
        else if((present_date > birth_date || present_date == birth_date) && (present_month < birth_month || present_month == birth_month) && (present_day < birth_day || present_day == birth_day)){
            if(present_month == 1 || present_month == 3 || present_month == 5 || present_month == 7 || present_month == 8 || present_month == 10 || present_month == 12 ){
                date = (present_date - 1) - birth_date;
                month = (present_month + 11) - birth_month;
                day = (present_day + 31) - birth_day;
                printf("Year - Month - Day\n");
                printf("%d -    %d -    %d\n", date, month, day + 1);
                }
            else{
                if(present_month != 2){
                    date = (present_date - 1) - birth_date;
                    month = (present_month + 11) - birth_month;
                    day = (present_day + 30) - birth_day;
                    printf("Year - Month - Day\n");
                    printf("%d -    %d -    %d\n", date, month, day + 1);
                }
                else{
                    if(present_date % 4 != 0){
                    date = (present_date - 1) - birth_date;
                    month = (present_month + 11) - birth_month;
                    day = (present_day + 29) - birth_day;
                    printf("Year - Month - Day\n");
                    printf("%d -    %d -    %d\n", date, month, day + 1);
                    }
                    else{
                    date = (present_date - 1) - birth_date;
                    month = (present_month + 11) - birth_month;
                    day = (present_day + 28) - birth_day;
                    printf("Year - Month - Day\n");
                    printf("%d -    %d -    %d\n", date, month, day + 1);
                    }
                }
            }
        }
        else{
            printf("Error Calculation\n");
        }
    }


    return;
}


void length(){
    system("cls");
    float centimeter, miter, kilometer, convert_number;
    int length_number;
    printf("Press 1 to Convert Centimeter to Miter");
    printf("\nPress 2 to Convert Centimeter to Kilometer");
    printf("\nPress 3 to Convert Miter to Centimeter");
    printf("\nPress 4 to Convert Miter to Kilometer");
    printf("\nPress 5 to Convert Kilometer to Centimeter");
    printf("\nPress 6 to Convert Kilometer to Miter");
    printf("\nPress Any Key to Continue...");
    scanf("%d", &length_number);
    system ("cls");
    while(length_number > 0 && length_number < 7){
        switch(length_number){
            case 1:
                printf("\nCentimeter : ");
                scanf("%f", &convert_number);
                printf("Meter      : %.3f\n", convert_number / 100);
                clear();
                break;
            case 2:
                printf("\nCentimeter : ");
                scanf("%f", &convert_number);
                printf("Kilometer  : %.3f\n", convert_number / 1000);
                clear();
                break;
            case 3:
                printf("\nMiter      : ");
                scanf("%f", &convert_number);
                printf("Centimeter : %.3f\n", convert_number * 100);
                clear();
                break;
            case 4:
                printf("\nMiter     : ");
                scanf("%f", &convert_number);
                printf("Kilometer : %.3f\n", convert_number / 100);
                clear();
                break;
            case 5:
                printf("\nKilometer  : ");
                scanf("%f", &convert_number);
                printf("Centimeter : %.3f\n", convert_number * 1000);
                clear();
                break;
            case 6:
                printf("\nKilometer : ");
                scanf("%f", &convert_number);
                printf("Miter     : %.3f\n", convert_number * 100);
                clear();
                break;
            default:
                break;
        }
        system ("cls");
        printf("Press 1 to Convert Centimeter to Miter");
        printf("\nPress 2 to Convert Centimeter to Kilometer");
        printf("\nPress 3 to Convert Miter to Centimeter");
        printf("\nPress 4 to Convert Miter to Kilometer");
        printf("\nPress 5 to Convert Kilometer to Centimeter");
        printf("\nPress 6 to Convert Kilometer to Miter");
        printf("\nPress Any Key to Continue...");
        scanf("%d", &length_number);
        system ("cls");
    }


    return;
}



void mass(){
    system("cls");
    float convert_number;
    int mass_number;
    printf("Press 1 to Convert Centigram to Gram");
    printf("\nPress 2 to Convert Centimeter to Kilogram");
    printf("\nPress 3 to Convert Gram to Centigram");
    printf("\nPress 4 to Convert Gram to Kilogram");
    printf("\nPress 5 to Convert Kilogram to Centigram");
    printf("\nPress 6 to Convert Kilogram to Gram");
    printf("\nPress Any Key to Continue...");
    scanf("%d", &mass_number);
    system ("cls");
    while(mass_number > 0 && mass_number < 7){
        switch(mass_number){
            case 1:
                printf("\nCentigram : ");
                scanf("%f", &convert_number);
                printf("Gram      : %.3f\n", convert_number / 100);
                clear();
                break;
            case 2:
                printf("\nCentigram : ");
                scanf("%f", &convert_number);
                printf("Kilogram  : %.3f\n", convert_number / 1000);
                clear();
                break;
            case 3:
                printf("\nGram      : ");
                scanf("%f", &convert_number);
                printf("Centigram : %.3f\n", convert_number * 100);
                clear();
                break;
            case 4:
                printf("\nGram     : ");
                scanf("%f", &convert_number);
                printf("Kilogram : %.3f\n", convert_number / 100);
                clear();
                break;
            case 5:
                printf("\nKilogram  : ");
                scanf("%f", &convert_number);
                printf("Centigram : %.3f\n", convert_number * 1000);
                clear();
                break;
            case 6:
                printf("\nKilogram : ");
                scanf("%f", &convert_number);
                printf("Gram     : %.3f\n", convert_number * 100);
                clear();
                break;
            default:
                break;
        }
        system ("cls");
    printf("Press 1 to Convert Centigram to Gram");
    printf("\nPress 2 to Convert Centimeter to Kilogram");
    printf("\nPress 3 to Convert Gram to Centigram");
    printf("\nPress 4 to Convert Gram to Kilogram");
    printf("\nPress 5 to Convert Kilogram to Centigram");
    printf("\nPress 6 to Convert Kilogram to Gram");
    printf("\nPress Any Key to Continue...");
    scanf("%d", &mass_number);
    system ("cls");
    }

    return;
}


void temperature()
{
    system ("cls");
    float convert_number;
    int temperature_number;
    printf("\nPress 1 to Convert Celsius to Fahrenheit");
    printf("\nPress 2 to Convert Celsius to Kelvin");
    printf("\nPress 3 to Convert Fahrenheit to Celsius");
    printf("\nPress 4 to Convert Fahrenheit to Kelvin");
    printf("\nPress 5 to Convert Kelvin to Celsius");
    printf("\nPress 6 to Convert Kelvin to Fahrenheit");
    printf("\nPress Any Key to Continue...");
    scanf("%d", &temperature_number);
    system ("cls");
    while(temperature_number > 0 && temperature_number < 7){
        switch(temperature_number){
            case 1:
                printf("\nCelsius    : ");
                scanf("%f", &convert_number);
                printf("Fahrenheit : %.3f\n", convert_number * 1.8 + 32);
                clear();
                break;
            case 2:
                printf("\nCelsius : ");
                scanf("%f", &convert_number);
                printf("Kelvin  : %.3f\n", convert_number + 273.15);
                clear();
                break;
            case 3:
                printf("\nFahrenheit : ");
                scanf("%f", &convert_number);
                printf("Celsius    : %.3f\n", (convert_number - 32) * .5556);
                clear();
                break;
            case 4:
                printf("\nFahrenheit : ");
                scanf("%f", &convert_number);
                printf("Kelvin     : %.3f\n", (convert_number + 459.67) * 5/9);
                clear();
                break;
            case 5:
                printf("\nKelvin  : ");
                scanf("%f", &convert_number);
                printf("Celsius : %.3f\n",  convert_number - 273.15);
                clear();
                break;
            case 6:
                printf("\nKelvin     : ");
                scanf("%f", &convert_number);
                printf("Fahrenheit : %.3f\n", convert_number * 9/5 - 459.67);
                clear();
                break;
            default:
                break;
        }
    system ("cls");
    printf("Press 1 to Convert Celsius to Fahrenheit");
    printf("\nPress 2 to Convert Celsius to Kelvin");
    printf("\nPress 3 to Convert Fahrenheit to Celsius");
    printf("\nPress 4 to Convert Fahrenheit to Kelvin");
    printf("\nPress 5 to Convert Kelvin to Celsius");
    printf("\nPress 6 to Convert Kelvin to Fahrenheit");
    printf("\nPress Any Key to Continue...");
    scanf("%d", &temperature_number);
    system ("cls");
    }

    return;
}



void speed()
{
    system ("cls");
    system("color 4a");
    float centimeter, miter, kilometer, convert_number;
    int speed_number;
    printf("Press 1 to Convert Meters per Second to Kilometers per Hours");
    printf("\nPress 2 to Convert Meters per Second to Miles per Hours");
    printf("\nPress 3 to Convert Kilometers per Hours to Meters per Second");
    printf("\nPress 4 to Convert Kilometers per Hours to Miles per Hours");
    printf("\nPress 5 to Convert Miles per Hours to Meters per Second");
    printf("\nPress 6 to Convert Miles per Hours to Kilometers per Hours");
    printf("\nPress Any Key to Continue...");
    scanf("%d", &speed_number);
    system ("cls");
    while(speed_number > 0 && speed_number < 0){
        switch(speed_number){
            case 1:
                printf("\nMeters per Second    : ");
                scanf("%f", &convert_number);
                printf("Kilometers per Hours : %.2f\n\n", convert_number * 3.60);
                clear();
                break;
            case 2:
                printf("\nMeters per Second : ");
                scanf("%f", &convert_number);
                printf("Miles per Hours   : %.2f\n\n", convert_number * 2.24);
                clear();
                break;
            case 3:
                printf("\nKilometers per Hours : ");
                scanf("%f", &convert_number);
                printf("Meters per Second    : %.2f\n\n", convert_number * 0.28);
                clear();
                break;
            case 4:
                printf("\nKilometers per Hours : ");
                scanf("%f", &convert_number);
                printf("Miles per Hours      : %.2f\n\n", convert_number * 0.62);
                clear();
                break;
            case 5:
                printf("\nMiles per Hours   : ");
                scanf("%f", &convert_number);
                printf("Meters per Second : %.2f\n\n", convert_number * 0.45);
                clear();
                break;
            case 6:
                printf("\nMiles per Hours      : ");
                scanf("%f", &convert_number);
                printf("Kilometers per Hours : %.2f\n\n", convert_number * 1.61);
                clear();
                break;
            default:
                break;
        }
        system ("cls");
    printf("Press 1 to Convert Meters per Second to Kilometers per Hours");
    printf("\nPress 2 to Convert Meters per Second to Miles per Hours");
    printf("\nPress 3 to Convert Kilometers per Hours to Meters per Second");
    printf("\nPress 4 to Convert Kilometers per Hours to Miles per Hours");
    printf("\nPress 5 to Convert Miles per Hours to Meters per Second");
    printf("\nPress 6 to Convert Miles per Hours to Kilometers per Hours");
    printf("\nPress Any Key to Continue...");
    scanf("%d", &speed_number);
    system ("cls");
    }

    return;
}


void timec(){
    system ("cls");
    system("color 4a");
    float centimeter, miter, kilometer, convert_number;
    int time_number;
    printf("Press 1 to Convert Seconds to Minutes");
    printf("\nPress 2 to Convert Seconds to Hours");
    printf("\nPress 3 to Convert Minutes to Seconds");
    printf("\nPress 4 to Convert Minutes to Hours");
    printf("\nPress 5 to Convert Hours to Seconds");
    printf("\nPress 6 to Convert Hours to Minutes");
    printf("\nPress 7 for main Menu");
    printf("\nPress 8 to Exit");
    printf("\nPress Any Key to Continue...");
    scanf("%d", &time_number);
    system ("cls");
    system("color 1b");
    while(time_number > 0 && time_number < 7){
        switch(time_number){
            case 1:
                printf("\nSeconds : ");
                scanf("%f", &convert_number);
                printf("Minutes : %.2f\n\n", convert_number / 60);
                clear();
                break;
            case 2:
                printf("\nSeconds : ");
                scanf("%f", &convert_number);
                printf("Hours   : %.5f\n\n", convert_number / 3600);
                clear();
                break;
            case 3:
                printf("\nMinutes : ");
                scanf("%f", &convert_number);
                printf("Seconds : %.2f\n\n", 60 * convert_number);
                clear();
                break;
            case 4:
                printf("\nMinutes : ");
                scanf("%f", &convert_number);
                printf("Hours   : %.2f\n\n", convert_number / 60);
                clear();
                break;
            case 5:
                printf("\nHours   : ");
                scanf("%f", &convert_number);
                printf("Seconds : %.2f\n\n", convert_number * 3600);
                clear();
                break;
            case 6:
                printf("\nHours   : ");
                scanf("%f", &convert_number);
                printf("Minutes : %.2f\n\n", convert_number * 60);
                clear();
                break;
            case 7:
                main();
                clear();
                break;
            case 8:
                exit(0);
                break;
            default:
                break;
        }
    system ("cls");
    printf("Press 1 to Convert Seconds to Minutes");
    printf("\nPress 2 to Convert Seconds to Hours");
    printf("\nPress 3 to Convert Minutes to Seconds");
    printf("\nPress 4 to Convert Minutes to Hours");
    printf("\nPress 5 to Convert Hours to Seconds");
    printf("\nPress 6 to Convert Hours to Minutes");
    printf("\nPress 7 for main Menu");
    printf("\nPress 8 to Exit");
    printf("\nPress Any Key to Continue...");
    scanf("%d", &time_number);
    system ("cls");
    system("color 1b");
    }


    return;
}


void currency()
{
    system ("cls");
    system("color 4a");
    float centimeter, miter, kilometer, convert_number;
    int currency_number;
    printf("Press 1 to Convert Bangladeshi Taka to US Dollar");
    printf("\nPress 2 to Convert Bangladeshi Taka to Euro");
    printf("\nPress 3 to Convert US Dollar to Bangladeshi Taka");
    printf("\nPress 4 to Convert US Dollar to Euro");
    printf("\nPress 5 to Convert Euro to Bangladeshi Taka");
    printf("\nPress 6 to Convert Euro to US Dollar");
    printf("\nPress 7 for main Menu");
    printf("\nPress 8 to Exit");
    printf("\nEnter Your Choice to Continue...");
    scanf("%d", &currency_number);
    while(currency_number > 0 && currency_number < 7){
        switch(currency_number){
            case 1:
                printf("\nBangladeshi Taka : ");
                scanf("%f", &convert_number);
                printf("US Dollar   : %.2f\n\n", convert_number *  0.0122133);
                clear();
                break;
            case 2:
                printf("\nBangladeshi Taka : ");
                scanf("%f", &convert_number);
                printf("Euro        : %.3f\n\n", convert_number * 0.0103774);
                clear();
                break;
            case 3:
                printf("\nUS Dollar    : ");
                scanf("%f", &convert_number);
                printf("Bangladeshi Taka : %10.f\n\n", 81.8783 * convert_number);
                clear();
                break;
            case 4:
                printf("\nUS Dollar     : ");
                scanf("%f", &convert_number);
                printf("Euro      : %.3f\n\n", convert_number * 0.848139);
                clear();
                break;
            case 5:
                printf("\nEuro       : ");
                scanf("%f", &convert_number);
                printf("Bangladeshi Taka : %.3f\n\n", convert_number * 96.4136);
                clear();
                break;
            case 6:
                printf("\nEuro     : ");
                scanf("%f", &convert_number);
                printf("US Dollar : %f\n\n", convert_number * 1.17905);
                clear();
                break;
            case 7:
                main();
                clear();
                break;
            case 8:
                exit(0);
                break;
            default:
                break;
        }
    printf("Press 1 to Convert Bangladeshi Taka to US Dollar");
    printf("\nPress 2 to Convert Bangladeshi Taka to Euro");
    printf("\nPress 3 to Convert US Dollar to Bangladeshi Taka");
    printf("\nPress 4 to Convert US Dollar to Euro");
    printf("\nPress 5 to Convert Euro to Bangladeshi Taka");
    printf("\nPress 6 to Convert Euro to US Dollar");
    printf("\nPress 7 for main Menu");
    printf("\nPress 8 to Exit");
    printf("\nEnter Your Choice to Continue...");
    scanf("%d", &currency_number);

    }


    return;
}


void energy(){
    system ("cls");
    system("color 4a");
    float centimeter, miter, kilometer, convert_number;
    int energy_number;
    printf("Press 1 to Convert Joules to Kilowatts");
    printf("\nPress 2 to Convert Joules to Kilojoules");
    printf("\nPress 3 to Convert Kilowatts to Joules");
    printf("\nPress 4 to Convert Kilowatts to Kilojoules");
    printf("\nPress 5 to Convert Kilojoules to Joules");
    printf("\nPress 6 to Convert Kilojoules to Kilowatts");
    printf("\nPress 7 for main Menu");
    printf("\nPress 8 to Exit");
    printf("\nPress Any Key to Continue...");
    scanf("%d", &energy_number);
    while(energy_number > 0 && energy_number <= 8){
        switch(energy_number){
            case 1:
                printf("\nJoules    : ");
                scanf("%f", &convert_number);
                printf("Kilowatts : %.10f\n\n", convert_number / 3600000);
                clear();
                break;
            case 2:
                printf("\nJoules     : ");
                scanf("%f", &convert_number);
                printf("KiloJoules : %.3f\n\n", convert_number / 1000);
                clear();
                break;
            case 3:
                printf("\nKilowatts : ");
                scanf("%f", &convert_number);
                printf("Joules    : %10.f\n\n", 3600000 * convert_number);
                clear();
                break;
            case 4:
                printf("\nKilowatts  : ");
                scanf("%f", &convert_number);
                printf("Kilojoules : %.3f\n\n", convert_number * 3600);
                clear();
                break;
            case 5:
                printf("\nKilojoules : ");
                scanf("%f", &convert_number);
                printf("Joules     : %.3f\n\n", convert_number * 1000);
                clear();
                break;
            case 6:
                printf("\nKilojoules : ");
                scanf("%f", &convert_number);
                printf("Kilowatts  : %f\n\n", convert_number / 3600);
                clear();
                break;
            case 7:
                main();
                clear();
                break;
            case 8:
                exit(0);
                break;
            default:
                break;
        }
    printf("Press 1 to Convert Joules to Kilowatts");
    printf("\nPress 2 to Convert Joules to Kilojoules");
    printf("\nPress 3 to Convert Kilowatts to Joules");
    printf("\nPress 4 to Convert Kilowatts to Kilojoules");
    printf("\nPress 5 to Convert Kilojoules to Joules");
    printf("\nPress 6 to Convert Kilojoules to Kilowatts");
    printf("\nPress 7 for main Menu");
    printf("\nPress 8 to Exit");
    printf("\nPress Any Key to Continue...");
    scanf("%d", &energy_number);
    }


    return;
}