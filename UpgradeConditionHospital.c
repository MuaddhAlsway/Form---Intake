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


char conditionForm() {
    char condition;

    printf("First Question: What is your condition?\n");
    printf("A. Your condition is Sick\n");
    printf("B. Your condition is Tired\n");
    printf("C. Your condition is Emergency\n\n");

    printf("Choose your condition (A/B/C): ");
    scanf(" %c", &condition); 

    return condition;
  
}

char DurationInput(){
    char duration;

    printf("How long have you had this condition?\n");
    printf("A. It take a week\n");
    printf("B. It take a month\n");
    printf("C. It take a year\n");

    printf("Choose your condition (A/B/C): ");
    scanf(" %c", &duration); 

    return duration;   
}

char doctorForYou(){
    char doctor;

    printf("Which Doctor do you want?\n");
    printf("A. Dr. Malona - Heart Specialist\n");
    printf("B. Dr. David - Pediatrician\n");
    printf("C. Dr. Emily - General Practitioner\n");

    printf("Choose your doctor (A/B/C): ");
    scanf(" %c", &doctor); 

    return doctor;
   
}

void FinalMovement(char name[], int age, char condition, char duration, char doctor) {
    printf("\n========================\n");
    printf("        Sign in         \n");
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
    scanf(" %[^\n]", name);  // Reads full name including spaces

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("What is your condition? (A - Sick, B - Tired, C - Emergency): ");
    scanf(" %c", &condition);

    
    // Display the first form (with age check)
// Display the first form (with age check)
    SimpleForm(name, age, condition);

    // Get more detailed info
    condition = conditionForm();
    duration = DurationInput();
    doctor = doctorForYou();

    // Show full summary
    FinalMovement(name, age, condition, duration, doctor);

    return 0;
}
