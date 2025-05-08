#include <stdio.h>
#include <string.h>
#include <stdbool.h>



bool HospitalForms(){

}

void SimpleForm(char name[], int age, char condition){
    printf("________________________\n"); 
    printf("Welcome to a Hospital Form\n");
    
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Condition: %c\n", condition);  

    if(age >= 18 && age <= 65){
        printf("You are in the right place\n");
    } else {
        printf("Age: Sorry about that\n");
    }
}


#include <stdio.h>


void ConditionForm() {
    char condition;

    printf("First Question: What is your condition?\n");
    printf("A. Your condition is Sick\n");
    printf("B. Your condition is Tired\n");
    printf("C. Your condition is Emergency\n\n");

    printf("Choose your condition (A/B/C): ");
    scanf(" %c", &condition); 

    switch(condition) {
        case 'A':
        case 'a':  
            printf("You selected: Sick\n");
            break;
        case 'B':
        case 'b':
            printf("You selected: Tired\n");
            break;
        case 'C':
        case 'c':
            printf("You selected: Emergency\n");
            break;
        default:
            printf("Invalid input. Please choose A, B, or C.\n");
    }
}

void longTime(){
    char LongTime;

    printf("How long you been this condition\n");
    printf("A. It take a week\n");
    printf("B. It take a month\n");
    printf("C. It take a year\n");

    printf("Choose your condition (A/B/C): ");
    scanf(" %c", &LongTime); 

    switch(LongTime) {
        case 'A':
        case 'a':  
            printf("You selected: a week\n");
            break;
        case 'B':
        case 'b':
            printf("You selected: a month\n");
            break;
        case 'C':
        case 'c':
            printf("You selected: a year\n");
            break;
        default:
            printf("Invalid input. Please choose A, B, or C.\n");
    }
}

void DoctorForYou(){
    char doctor;

    printf("Which Doctor do you want?\n");
    printf("A. Dr. Malona - Heart Specialist\n");
    printf("B. Dr. David - Pediatrician\n");
    printf("C. Dr. Emily - General Practitioner\n");

    printf("Choose your doctor (A/B/C): ");
    scanf(" %c", &doctor); 

    switch(doctor) {
        case 'A':
        case 'a':  
            printf("You selected: Dr. Malona\n");
            break;
        case 'B':
        case 'b':
            printf("You selected: Dr. David\n");
            break;
        case 'C':
        case 'c':
            printf("You selected: Dr. Emily\n");
            break;
        default:
            printf("Invalid input. Please choose A, B, or C.\n");
    }
}



int main(){
    char name[100];
    int age;
    char condition;

    printf("Enter your name: ");
    scanf(" %[^\n]", name);  // Reads full name including spaces

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("What is your condition? (A - Sick, B - Tired, C - Emergency): ");
    scanf(" %c", &condition);

    SimpleForm(name, age, condition);  // Call the form
    
    ConditionForm();
    longTime();
    DoctorForYou();

    return 0;
}
