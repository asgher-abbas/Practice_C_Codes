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

//Q1
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

//Q2
/*#include<stdio.h>
int main(){
int currentfloor = 0;
int requestfloor;
//Request 1
printf("\nSelect the floor (1-5): ");
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
//Request 2
printf("\nSelect the floor (1-5): ");
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
//Request 3
printf("\nSelect the floor (1-5): ");
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
}*/


//Q3
/*#include<stdio.h>
int main(){
    int s1, s2, s3, s4, s5;
    int sum;
    int avg;
    printf("First subject marks: ");
    scanf("%d", &s1);
    printf("Second subject marks: ");
    scanf("%d", &s2);
    printf("Third subject marks: ");
    scanf("%d", &s3);
    printf("Fourth subject marks: ");
    scanf("%d", &s4);
    printf("Fifth subject marks: ");
    scanf("%d", &s5);
    sum = s1 + s2 + s3 + s4 + s5;
    avg = sum / 5;  
    printf("Average = %d", avg);
    if (s1 < 33 || s2 < 33 || s3 < 33 || s4 < 33 || s5 < 33) {
    printf("\nSubject deficiency");
}
else if(avg >= 80){
    printf("\nDistinction");
}
else if (avg >= 60 && avg < 80)
{
    printf("\nPass");
}
else{
    printf("\nFail");
}
return 0;
}*/

//Q4
/*#include<stdio.h>
int main(){
    int subtotal;
    int discount;
    int qty;
    int price;
    int tax;
    int discount_percentage;
    int final_bill;
    printf("Enter the quantity of product: ");
    scanf("%d", &qty);
    printf("Enter the price of product: ");
    scanf("%d", &price);
    printf("Enter the discount percentage: ");
    scanf("%d", &discount_percentage);
    printf("Enter the tax percentage: ");
    scanf("%d", &tax);
    subtotal = qty * price;
    discount = subtotal - (subtotal * discount_percentage)/ 100;
    final_bill = discount + (discount * tax)/ 100;
    printf("\nQuantity: %d\n", qty);
    printf("Price of item: %d\n", price);
    printf("Discount percentage: %d\n", discount_percentage);
    printf("Tax: %d\n", tax);
    printf("Discount applied: %d\n", discount);
    printf("Final Bill: %d\n", final_bill);
}*/

//Q6
/*#include <stdio.h>
int main(){
    char vehicle;
    char member;
    char disabled;
    char available;
    int battery;
    int required;
    int hours;
    int time;
    int charging;
    float chargingCost;
    float parkingCost;
    float discount;
    float finalBill;
    printf("Enter vehicle type (E/H): ");
    scanf(" %c", &vehicle);
    printf("Enter current battery percentage: ");
    scanf("%d", &battery);
    printf("Enter required charging percentage: ");
    scanf("%d", &required);
    printf("Enter parking duration: ");
    scanf("%d", &hours);
    printf("Enter current time: ");
    scanf("%d", &time);
    printf("Are you a member (Y/N): ");
    scanf(" %c", &member);
    printf("Disabled person priority (Y/N): ");
    scanf(" %c", &disabled);
    printf("Charging station available (Y/N): ");
    scanf(" %c", &available);
    if(available == 'N' || available == 'n'){
        if(vehicle == 'H' || vehicle == 'h'){
            printf("Charging unavailable - Parking only.");
        }
        else{
            printf("No charging slot available.");
        }
        return 0;
    }
    if(vehicle == 'H' || vehicle == 'h'){
        if(battery >= 40){
            printf("Vehicle does not qualify for EV charging.");
            return 0;
        }
    }
    else if(vehicle != 'E' && vehicle != 'e'){
        printf("Invalid vehicle type.");
        return 0;
    }
    charging = required - battery;
    if(charging <= 0){
        printf("No charging required.");
        return 0;
    }
    if(battery <= 15 && required >= 80){
        printf("Emergency Charging Priority\n");
    }
    else if(disabled == 'Y' || disabled == 'y' ||
            ((member == 'Y' || member == 'y') && battery <= 30)){
        printf("Priority Charging\n");
    }
    else{
        printf("Normal Charging\n");
    }
    if(time < 17 || time > 22){
        printf("Off-Peak\n");
        chargingCost = charging * 35;
        if(member == 'Y' || member == 'y'){
            discount = chargingCost * 0.20;
        }
        else{
            discount = 0;
        }
    }
    else{
        printf("Peak\n");
        chargingCost = charging * 50;
        if(battery <= 15 && required >= 80){
            discount = 0;
        }
        else{
            discount = chargingCost * 0.10;
        }
    }
    chargingCost = chargingCost - discount;
    if(hours <= 2){
        parkingCost = 200;
    }
    else if(hours <= 5){
        parkingCost = 400;
    }
    else{
        parkingCost = 700;
    }
    if(disabled == 'Y' || disabled == 'y'){
        parkingCost = 0;
    }
    else if(member == 'Y' || member == 'y'){
        parkingCost = parkingCost - (parkingCost * 0.20);
    }
    finalBill = chargingCost + parkingCost;
    printf("\nVehicle: %c\n", vehicle);
    printf("Battery: %d%%\n", battery);
    printf("Required: %d%%\n", required);
    printf("Charging cost: %.2f\n", chargingCost);
    printf("Parking cost: %.2f\n", parkingCost);
    printf("Discount: %.2f\n", discount);
    printf("Final bill: %.2f\n", finalBill);
    if(hours > 8){
        printf("Long-stay warning: Please relocate your vehicle after charging.");
    }
    else{
        printf("Standard parking duration.");
    }
    return 0;*/

//Q5
#include <stdio.h>

int main(){

    char vehicle;
    char category;
    char permit;
    char emergency;

    int zoneA = 0;
    int zoneB = 0;
    int zoneC = 0;

    int accepted = 0;
    int rejected = 0;

    int cars = 0;
    int bikes = 0;
    int vans = 0;

    int spaces;
    int parked = 0;

    printf("Enter vehicle type (C-Car, B-Bike, V-Van): ");
    scanf(" %c", &vehicle);

    /* Vehicle validation */

    if(vehicle != 'C' && vehicle != 'c' &&
       vehicle != 'B' && vehicle != 'b' &&
       vehicle != 'V' && vehicle != 'v'){

        printf("Invalid vehicle type.\n");
        return 0;
    }


    printf("Enter category (F-Faculty, S-Student, G-Visitor): ");
    scanf(" %c", &category);

    /* Category validation */

    if(category != 'F' && category != 'f' &&
       category != 'S' && category != 's' &&
       category != 'G' && category != 'g'){

        printf("Invalid category.\n");
        return 0;
    }


    printf("Does the vehicle have a valid permit? (Y/N): ");
    scanf(" %c", &permit);

    /* Permit validation */

    if(permit != 'Y' && permit != 'y' &&
       permit != 'N' && permit != 'n'){

        printf("Invalid permit value.\n");
        return 0;
    }


    /* Ask emergency only if permit is invalid */

    if(permit == 'N' || permit == 'n'){

        printf("Is this an emergency vehicle? (Y/N): ");
        scanf(" %c", &emergency);

        if(emergency != 'Y' && emergency != 'y' &&
           emergency != 'N' && emergency != 'n'){

            printf("Invalid emergency value.\n");
            return 0;
        }
    }
    else{
        emergency = 'N';
    }


    /* Check permit */

    if((permit == 'N' || permit == 'n') &&
       (emergency == 'N' || emergency == 'n')){

        printf("Rejected: Invalid permit.\n");
        rejected++;
    }

    else{

        /* Emergency vehicle */

        if(emergency == 'Y' || emergency == 'y'){

            if(category == 'F' || category == 'f'){

                if(vehicle == 'V' || vehicle == 'v'){
                    spaces = 2;
                }
                else{
                    spaces = 1;
                }

                if(zoneA + spaces <= 20){

                    zoneA = zoneA + spaces;
                    parked = 1;

                    printf("Emergency vehicle assigned to Zone A.\n");
                    printf("Remaining capacity: %d\n", 20 - zoneA);
                }
                else{
                    printf("Rejected: No space in Zone A.\n");
                }
            }

            else if(category == 'S' || category == 's'){

                if(vehicle == 'V' || vehicle == 'v'){
                    spaces = 2;
                }
                else{
                    spaces = 1;
                }

                if(zoneB + spaces <= 40){

                    zoneB = zoneB + spaces;
                    parked = 1;

                    printf("Emergency vehicle assigned to Zone B.\n");
                    printf("Remaining capacity: %d\n", 40 - zoneB);
                }
                else{
                    printf("Rejected: No space in Zone B.\n");
                }
            }

            else{

                if(vehicle == 'V' || vehicle == 'v'){
                    spaces = 2;
                }
                else{
                    spaces = 1;
                }

                if(zoneC + spaces <= 15){

                    zoneC = zoneC + spaces;
                    parked = 1;

                    printf("Emergency vehicle assigned to Zone C.\n");
                    printf("Remaining capacity: %d\n", 15 - zoneC);
                }
                else{
                    printf("Rejected: No space in Zone C.\n");
                }
            }
        }

        /* Normal vehicle */

        else{

            /* Faculty */

            if(category == 'F' || category == 'f'){

                if(vehicle == 'V' || vehicle == 'v'){
                    spaces = 2;
                }
                else{
                    spaces = 1;
                }

                if(zoneA + spaces <= 20){

                    zoneA = zoneA + spaces;
                    parked = 1;

                    printf("Vehicle assigned to Zone A.\n");
                    printf("Remaining capacity: %d\n", 20 - zoneA);
                }
                else{
                    printf("Rejected: No space in Zone A.\n");
                }
            }


            /* Student */

            else if(category == 'S' || category == 's'){

                /* Student van goes to Zone C */

                if(vehicle == 'V' || vehicle == 'v'){

                    if(zoneC + 2 <= 15){

                        zoneC = zoneC + 2;
                        parked = 1;

                        printf("Student van redirected to Zone C.\n");
                        printf("Remaining capacity: %d\n", 15 - zoneC);
                    }
                    else{
                        printf("Rejected: No space in Zone C.\n");
                    }
                }

                /* Student car or bike goes to Zone B */

                else{

                    if(zoneB + 1 <= 40){

                        zoneB = zoneB + 1;
                        parked = 1;

                        printf("Vehicle assigned to Zone B.\n");
                        printf("Remaining capacity: %d\n", 40 - zoneB);
                    }
                    else{
                        printf("Rejected: No space in Zone B.\n");
                    }
                }
            }


            /* Visitor */

            else{

                /* Visitor van */

                if(vehicle == 'V' || vehicle == 'v'){

                    if(zoneC + 2 <= 15){

                        zoneC = zoneC + 2;
                        parked = 1;

                        printf("Visitor van assigned to Zone C.\n");
                        printf("Remaining capacity: %d\n", 15 - zoneC);
                    }
                    else{
                        printf("Rejected: Visitor Zone needs 2 spaces.\n");
                    }
                }

                /* Visitor car or bike */

                else{

                    if(zoneC + 1 <= 15){

                        zoneC = zoneC + 1;
                        parked = 1;

                        printf("Vehicle assigned to Zone C.\n");
                        printf("Remaining capacity: %d\n", 15 - zoneC);
                    }
                    else{
                        printf("Rejected: No space in Zone C.\n");
                    }
                }
            }
        }


        /* Update counters */

        if(parked == 1){

            accepted++;

            if(vehicle == 'C' || vehicle == 'c'){
                cars++;
            }
            else if(vehicle == 'B' || vehicle == 'b'){
                bikes++;
            }
            else{
                vans++;
            }
        }
        else{
            rejected++;
        }
    }


    /* Summary */

    printf("\n==============================\n");
    printf("       PARKING SUMMARY\n");
    printf("==============================\n");

    printf("Total vehicles processed: 1\n");
    printf("Total accepted vehicles: %d\n", accepted);
    printf("Total rejected vehicles: %d\n", rejected);

    printf("Cars successfully parked: %d\n", cars);
    printf("Bikes successfully parked: %d\n", bikes);
    printf("Vans successfully parked: %d\n", vans);

    printf("\nZone A Occupied: %d\n", zoneA);
    printf("Zone A Remaining: %d\n", 20 - zoneA);

    printf("\nZone B Occupied: %d\n", zoneB);
    printf("Zone B Remaining: %d\n", 40 - zoneB);

    printf("\nZone C Occupied: %d\n", zoneC);
    printf("Zone C Remaining: %d\n", 15 - zoneC);


    /* Highest occupancy */

    if(zoneA >= zoneB && zoneA >= zoneC){
        printf("\nHighest occupancy: Zone A\n");
    }
    else if(zoneB >= zoneA && zoneB >= zoneC){
        printf("\nHighest occupancy: Zone B\n");
    }
    else{
        printf("\nHighest occupancy: Zone C\n");
    }


    /* Check if campus is full */

    if(zoneA == 20 && zoneB == 40 && zoneC == 15){
        printf("Entire parking facility is FULL.\n");
    }
    else{
        printf("Entire parking facility is NOT FULL.\n");
    }

    return 0;
}
