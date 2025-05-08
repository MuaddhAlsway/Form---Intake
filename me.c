#include <stdio.h>
#include <string.h>
#include <stdbool.h>

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

char getConditionInput() {
    char condition;

    printf("First Question: What is your condition?\n");
    printf("A. Sick\n");
    printf("B. Tired\n");
    printf("C. Emergency\n");

    printf("Choose your condition (A/B/C): ");
    scanf(" %c", &condition); 

    return condition;
}

char getDurationInput() {
    char duration;

    printf("How long have you had this condition?\n");
    printf("A. A week\n");
    printf("B. A month\n");
    printf("C. A year\n");

    printf("Choose duration (A/B/C): ");
    scanf(" %c", &duration); 

    return duration;
}

char getDoctorInput() {
    char doctor;

    printf("Which doctor do you want?\n");
    printf("A. Dr. Malona - Heart Specialist\n");
    printf("B. Dr. David - Pediatrician\n");
    printf("C. Dr. Emily - General Practitioner\n");

    printf("Choose your doctor (A/B/C): ");
    scanf(" %c", &doctor); 

    return doctor;
}

void displaySummary(char name[], int age, char condition, char duration, char doctor) {
    printf("\n========================\n");
    printf("        Summary         \n");
    printf("========================\n");
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);

    printf("Condition: ");
    switch(condition) {
        case 'A': case 'a': printf("Sick\n"); break;
        case 'B': case 'b': printf("Tired\n"); break;
        case 'C': case 'c': printf("Emergency\n"); break;
        default: printf("Unknown\n"); break;
    }

    printf("Duration: ");
    switch(duration) {
        case 'A': case 'a': printf("A week\n"); break;
        case 'B': case 'b': printf("A month\n"); break;
        case 'C': case 'c': printf("A year\n"); break;
        default: printf("Unknown\n"); break;
    }

    printf("Preferred Doctor: ");
    switch(doctor) {
        case 'A': case 'a': printf("Dr. Malona - Heart Specialist\n"); break;
        case 'B': case 'b': printf("Dr. David - Pediatrician\n"); break;
        case 'C': case 'c': printf("Dr. Emily - General Practitioner\n"); break;
        default: printf("Unknown\n"); break;
    }
}

int main(){
    char name[100];
    int age;
    char condition, duration, doctor;

    printf("Enter your name: ");
    scanf(" %[^\n]", name);

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("What is your condition? (A - Sick, B - Tired, C - Emergency): ");
    scanf(" %c", &condition);

    // Display the first form (with age check)
    SimpleForm(name, age, condition);

    // Get more detailed info
    condition = getConditionInput();
    duration = getDurationInput();
    doctor = getDoctorInput();

    // Show full summary
    displaySummary(name, age, condition, duration, doctor);

    return 0;
}
