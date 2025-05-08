#include <stdio.h>
#include <string.h>
#include <stdbool.h>

// Function to check if email is valid

bool isValidEmail(const char email[]){
    int atInbox = -1;
    int dotIndex = -1;

    //check for empty input
    if(strlen(email) == 0){
        return false;
    }


    //loop throught the email to find '@' and '.'
    for(int i = 0; email[i] != '\0'; i++){
        if(email[i] == '@'){
            atInbox = i;
        } else if (email[i] == '.' && atInbox != -1){
            dotIndex = i;
        }
    }

    // Email must have '@' and a '.' after it
    
    if (atInbox != -1 && dotIndex > atInbox){
        return true;
    }

    return false;
    

}


void SimpleForm(char name[], int age, char email[]){
    printf("________________________\n"); 
    printf("Welcome to a Simple Form\n");
    
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Email: %s\n", email);


    if(age >= 18 && age <= 65){
        printf("You are in right Place\n");
    } else {
        printf("Age: Sorry about that\n");
    
    };
  

}

int main() {
    char name[100];
    int age;
    char email[100];
    
    
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = 0; // remove newline from input

    printf("Enter your age: ");
    scanf("%d", &age);
    getchar(); // clear newline left by scanf

    printf("Enter your email: ");
    fgets(email, sizeof(email), stdin);
    email[strcspn(email, "\n")] = 0; // remove newline

    // Get and validate email
    while(1) {
        printf("Enter your email: ");
        fgets(email, sizeof(email), stdin);
        email[strcspn(email, "\n")] = 0; // remove newline
        
        if (isValidEmail(email)){
            break;
        } else {
            printf("Invalid email! Please enter a valid email.\n");
        }
    }

    //call the form

    SimpleForm(name, age, email);
    printf("Thank you for you sign in");
    return 0;
}