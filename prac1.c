/*#include<stdio.h>

int main(){
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);

    if(year % 4 == 0 &&(year % 100 != 0 || year % 400 == 0)){
        printf("It's a leap year");
    }
    else{
        printf("Not a leap year");
    }

}*/

/*#include<stdio.h>

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if(n % 1000 == n && n >= 100 && n <= 999){
        printf("It's a three digit number");
    }
    else if(n % 100 == n && n >= 10 && n <= 99){
        printf("It's a two digit number");
    }
    else if(n % 10 == n && n >=1 && n <= 9){
        printf("It's a single digit number");
    }
    else{
        printf("It's a four or more digit number");
    }

}*/

/*#include <stdio.h>

int main()
{
    int num;
    int copy;
    int count = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    copy = num;
     
    if(copy < 0){
        copy = -copy;
    }
    if(copy == 0){
        count = 1;
    }
    else{
    while (copy != 0)
    {
        copy = copy / 10;
        count += 1;
    }
}
    if(count == 1){
        printf("It's a one digit number");
    }
    else if(count == 2){
        printf("It's a two digit number");
    }
    else{
        printf("It's a %d digit number", count);
    }
}*/

/*#include <stdio.h>

int main() {

    for (int n = 1; n <= 10; n++) {

        if (n % 3 != 0)
        {
           printf("Table of %d:\n", n);
        
        

        for (int i = 1; i <= 10; i++) {
            printf("%d x %d = %d\n", n, i, n * i);
        }

        printf("\n");
    }
    }

    return 0;
}  */
/*#include <stdio.h>

int main(){

int n, sum = 0;

scanf("%d", &n);

while (n != 0) {
    sum = sum + n % 10;
    n = n / 10;
}

printf("Sum = %d", sum);
}*/





/*#include <stdio.h>

int main() {

    int n;
    int season;
    int type;
    int nights;
    int price;
    int price2;

    printf("Number of guests: ");
    scanf("%d", &n);

    printf("Choose the season\n");
    printf("1. Peak\n");
    printf("2. Off Peak\n");
    scanf("%d", &season);

    if (season == 1) {
        printf("1. Standard = Rs. 5,000/night\n");
        printf("2. Deluxe = Rs. 8,000/night\n");
        printf("3. Suite = Rs. 12,000/night\n");
        scanf("%d", &type);
    }
    else {
        printf("1. Standard = Rs. 3,000/night\n");
        printf("2. Deluxe = Rs. 5,000/night\n");
        printf("3. Suite = Rs. 8,000/night\n");
        scanf("%d", &type);
    }

    printf("Number of nights: ");
    scanf("%d", &nights);

    if (season == 1) {
    if (type == 1) {
        price = n * 5000;
    }
    else if (type == 2) {
        price = n * 8000;
    }
    else if (type == 3) {
        price = n * 12000;
    }
        else{
        }
    }
    

    if (type == 1 && nights > 7) {
        price = n * 5000 * 0.15;
    }
    else if (type == 2 && nights > 7) {
        price = n * 8000 * 0.15;
    }
    else if (type == 3 && nights > 7) {
        price = n * 12000 * 0.15;
    }
    else if (type2 == 1 && nights > 7) {
        price = n * 5000 * 0.15;
    }
    else if (type2 == 2 && nights > 7) {
        price = n * 8000 * 0.15;
    }
    else if (type2 == 3 && nights > 7) {
        price = n * 12000 * 0.15;
    }

    return 0;
}*/


/*#include <stdio.h>

int main() {

    int n;
    int season;
    int type;
    int nights;
    int price;
    int discount = 0;

    printf("Number of guests: ");
    scanf("%d", &n);

    printf("\nChoose the season:\n");
    printf("1. Peak\n");
    printf("2. Off-Peak\n");
    scanf("%d", &season);

    printf("\nChoose the room type:\n");

    if (season == 1) {

        printf("1. Standard = Rs. 5000/night\n");
        printf("2. Deluxe = Rs. 8000/night\n");
        printf("3. Suite = Rs. 12000/night\n");
        scanf("%d", &type);

    }
    else if (season == 2) {

        printf("1. Standard = Rs. 3000/night\n");
        printf("2. Deluxe = Rs. 5000/night\n");
        printf("3. Suite = Rs. 8000/night\n");
        scanf("%d", &type);

    }
    else {
        printf("Invalid season.\n");
        return 0;
    }

    printf("\nNumber of nights: ");
    scanf("%d", &nights);


    if (season == 1) {

        if (type == 1) {
            price = 5000 * nights;
        }
        else if (type == 2) {
            price = 8000 * nights;
        }
        else if (type == 3) {
            price = 12000 * nights;
        }
        else {
            printf("Invalid room type.\n");
            return 0;
        }

    }
    else {

        if (type == 1) {
            price = 3000 * nights;
        }
        else if (type == 2) {
            price = 5000 * nights;
        }
        else if (type == 3) {
            price = 8000 * nights;
        }
        else {
            printf("Invalid room type.\n");
            return 0;
        }

    }

    if (nights > 7) {
        discount = price * 0.15;
        price = price - discount;
    }


    printf("\nFinal Price = Rs. %d\n", price);

    return 0;
}*/


#include<stdio.h>

int main(){

int currentfloor = 0;
int requestfloor;

printf("Select the floor: ");
printf("Floor 1");
printf("Floor 2");
printf("Floor 3");
printf("Floor 4");
printf("Floor 5");
scanf("%d", &requestfloor);

if(requestfloor > currentfloor){
    printf("Moving Up");
}
else if(requestfloor < currentfloor){
    printf("Moving Down");
}
else{
    printf("Opening the door");
}
currentfloor = requestfloor;
return 0;

}