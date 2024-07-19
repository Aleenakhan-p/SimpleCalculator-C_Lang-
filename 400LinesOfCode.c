#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

//All GLOBAL declarations for VARIABLES
char operation,yes_no;
int num;
float answer;
float ope1,ope2,ope3,ope4,ope5,ope6,ope7,ope8,ope9,ope10;

//All GLOBAL declarations for FUNCTIOS/METHODS
float addition(),subtraction(),product(),division();
void Ask_user(),resume();



//Addition function to perform addition operation
float addition()
{

  printf("\nEnter number of operands(maximum 10) you want to perform addition of: ");
  scanf("%d",&num);

    switch(num)
   {
    case 0:
    case 1:
    printf("Enter atleast two operands");
    break;
    case 2:   
    printf("\nEnter values for %d operands :",num);
    scanf("%f %f",&ope1,&ope2);
    answer=ope1+ope2;
    break;
    case 3:   
    printf("\nEnter values for %d operands :",num);
    scanf("%f %f %f",&ope1,&ope2,&ope3);
    answer=ope1+ope2+ope3;
    break;
    case 4:   
    printf("\nEnter values for %d operands :",num);
    scanf("%f %f %f %f",&ope1,&ope2,&ope3,&ope4);
    answer=ope1+ope2+ope3+ope4;
    break;
    case 5:
    printf("\nEnter values for %d operands :",num);
    scanf("%f %f %f %f %f",&ope1,&ope2,&ope3,&ope4,&ope5);
    answer=ope1+ope2+ope3+ope4+ope5;
    break;
    case 6:   
    printf("\nEnter values for %d operands :",num);
    scanf("%f %f %f %f %f %f",&ope1,&ope2,&ope3,&ope4,&ope5,&ope6);
    answer=ope1+ope2+ope3+ope4+ope5+ope6;
    break;
    case 7:   
    printf("\nEnter values for %d operands :",num);
    scanf("%f %f %f %f %f %f %f ",&ope1,&ope2,&ope3,&ope4,&ope5,&ope6,&ope7);
    answer=ope1+ope2+ope3+ope4+ope5+ope6+ope7;
    break;
    case 8:   
    printf("\nEnter values for %d operands :",num);
    scanf("%f %f %f %f %f %f %f %f",&ope1,&ope2,&ope3,&ope4,&ope5,&ope6,&ope7,&ope8);
    answer=ope1+ope2+ope3+ope4+ope5+ope6+ope7+ope8;
    break;
    case 9:   
    printf("\nEnter values for %d operands :",num);
    scanf("%f %f %f %f %f %f %f %f %f",&ope1,&ope2,&ope3,&ope4,&ope5,&ope6,&ope7,&ope8,&ope9);
    answer=ope1+ope2+ope3+ope4+ope5+ope6+ope7+ope8+ope9;
    break;
    case 10:   
    printf("\nEnter values for %d operands :",num);
    scanf("%f %f %f %f %f %f %f %f %f %f",&ope1,&ope2,&ope3,&ope4,&ope5,&ope6,&ope7,&ope8,&ope9,&ope10);
    answer=ope1+ope2+ope3+ope4+ope5+ope6+ope7+ope8+ope9+ope10;
    break;
    default:
    printf("\nInvalid input. No such case exist\nCheck again");
    break;
   }

return answer;    
}



//Subtraction function feature to perform subtraction operations
float subtraction()
{

  printf("\nEnter number of operands(maximum 10) you want to perform subtraction of: ");
  scanf("%d",&num);

    switch(num)
   {
    case 0:
    case 1:
    printf("Enter atleast two operands");
    break;
    case 2:   
    printf("\nEnter values for %d operands :",num);
    scanf("%f %f",&ope1,&ope2);
    answer=ope1-ope2;
    break;
    case 3:   
    printf("\nEnter values for %d operands :",num);
    scanf("%f %f %f",&ope1,&ope2,&ope3);
    answer=ope1-ope2-ope3;
    break;
    case 4:   
    printf("\nEnter values for %d operands :",num);
    scanf("%f %f %f %f",&ope1,&ope2,&ope3,&ope4);
    answer=ope1-ope2-ope3-ope4;
    break;
    case 5:
    printf("\nEnter values for %d operands :",num);    
    scanf("%f %f %f %f %f",&ope1,&ope2,&ope3,&ope4,&ope5);
    answer=ope1-ope2-ope3-ope4-ope5;
    break;
    case 6:   
    printf("\nEnter values for %d operands :",num);
    scanf("%f %f %f %f %f %f",&ope1,&ope2,&ope3,&ope4,&ope5,&ope6);
    answer=ope1-ope2-ope3-ope4-ope5-ope6;
    break;
    case 7:   
    printf("\nEnter values for %d operands :",num);
    scanf("%f %f %f %f %f %f %f ",&ope1,&ope2,&ope3,&ope4,&ope5,&ope6,&ope7);
    answer=ope1-ope2-ope3-ope4-ope5-ope6-ope7;
    break;
    case 8:   
    printf("\nEnter values for %d operands :",num);
    scanf("%f %f %f %f %f %f %f %f",&ope1,&ope2,&ope3,&ope4,&ope5,&ope6,&ope7,&ope8);
    answer=ope1-ope2-ope3-ope4-ope5-ope6-ope7-ope8;
    break;
    case 9:   
    printf("\nEnter values for %d operands :",num);
    scanf("%f %f %f %f %f %f %f %f %f",&ope1,&ope2,&ope3,&ope4,&ope5,&ope6,&ope7,&ope8,&ope9);
    answer=ope1-ope2-ope3-ope4-ope5-ope6-ope7-ope8-ope9;
    break;
    case 10:   
    printf("\nEnter values for %d operands :",num);
    scanf("%f %f %f %f %f %f %f %f %f %f",&ope1,&ope2,&ope3,&ope4,&ope5,&ope6,&ope7,&ope8,&ope9,&ope10);
    answer=ope1-ope2-ope3-ope4-ope5-ope6-ope7-ope8-ope9-ope10;
    break;
    default:
    printf("\nInvalid input. No such case exist\nCheck again");
    break;
   }

return answer;    
}
 


//Multiplication function feature for performing multiplication operation
float product()
{

  printf("\nEnter number of operands(maximum 10) you want to perform product of: ");
  scanf("%d",&num);

    switch(num)
   {
    case 0:
    case 1:
    printf("Enter atleast two operands");
    break;
    case 2:   
    printf("\nEnter values for %d operands :",num);
    scanf("%f %f",&ope1,&ope2);
    answer=ope1*ope2;
    break;
    case 3:   
    printf("\nEnter values for %d operands :",num);
    scanf("%f %f %f",&ope1,&ope2,&ope3);
    answer=ope1*ope2*ope3;
    break;
    case 4:   
    printf("\nEnter values for %d operands :",num);
    scanf("%f %f %f %f",&ope1,&ope2,&ope3,&ope4);
    answer=ope1*ope2*ope3*ope4;
    break;
    case 5:
    printf("\nEnter values for %d operands :",num);
    scanf("%f %f %f %f %f",&ope1,&ope2,&ope3,&ope4,&ope5);
    answer=ope1*ope2*ope3*ope4*ope5;
    break;
    case 6:   
    printf("\nEnter values for %d operands :",num);
    scanf("%f %f %f %f %f %f",&ope1,&ope2,&ope3,&ope4,&ope5,&ope6);
    answer=ope1*ope2*ope3*ope4*ope5*ope6;
    break;
    case 7:   
    printf("\nEnter values for %d operands :",num);
    scanf("%f %f %f %f %f %f %f ",&ope1,&ope2,&ope3,&ope4,&ope5,&ope6,&ope7);
    answer=ope1*ope2*ope3*ope4*ope5*ope6*ope7;
    break;
    case 8:   
    printf("\nEnter values for %d operands :",num);
    scanf("%f %f %f %f %f %f %f %f",&ope1,&ope2,&ope3,&ope4,&ope5,&ope6,&ope7,&ope8);
    answer=ope1*ope2*ope3*ope4*ope5*ope6*ope7*ope8;
    break;
    case 9:   
    printf("\nEnter values for %d operands :",num);
    scanf("%f %f %f %f %f %f %f %f %f",&ope1,&ope2,&ope3,&ope4,&ope5,&ope6,&ope7,&ope8,&ope9);
    answer=ope1*ope2*ope3*ope4*ope5*ope6*ope7*ope8*ope9;
    break;
    case 10:   
    printf("\nEnter values for %d operands :",num);
    scanf("%f %f %f %f %f %f %f %f %f %f",&ope1,&ope2,&ope3,&ope4,&ope5,&ope6,&ope7,&ope8,&ope9,&ope10);
    answer=ope1*ope2*ope3*ope4*ope5*ope6*ope7*ope8*ope9*ope10;
    break;
    default:
    printf("\nInvalid input. No such case exist\nCheck again");
    break;
   }

return answer;    
}



//Division function feature for performing divsion operation
float division()
{

  printf("\nEnter number of operands(maximum 10) you want to perform division of: ");
  scanf("%d",&num);

    switch(num)
   {
    case 0:
    case 1:
    printf("Enter atleast two operands");
    break;
    case 2:   
    printf("\nEnter values for %d operands :",num);
    scanf("%f %f",&ope1,&ope2);
    answer=ope1/ope2;
    break;
    case 3:   
    printf("\nEnter values for %d operands :",num);
    scanf("%f %f %f",&ope1,&ope2,&ope3);
    answer=ope1/ope2/ope3;
    break;
    case 4:   
    printf("\nEnter values for %d operands :",num);
    scanf("%f %f %f %f",&ope1,&ope2,&ope3,&ope4);
    answer=ope1/ope2/ope3/ope4;
    break;
    case 5:
    printf("\nEnter values for %d operands :",num);
    scanf("%f %f %f %f %f",&ope1,&ope2,&ope3,&ope4,&ope5);
    answer=ope1/ope2/ope3/ope4/ope5;
    break;
    case 6:   
    printf("\nEnter values for %d operands :",num);
    scanf("%f %f %f %f %f %f",&ope1,&ope2,&ope3,&ope4,&ope5,&ope6);
    answer=ope1/ope2/ope3/ope4/ope5/ope6;
    break;
    case 7:   
    printf("\nEnter values for %d operands :",num);
    scanf("%f %f %f %f %f %f %f ",&ope1,&ope2,&ope3,&ope4,&ope5,&ope6,&ope7);
    answer=ope1/ope2/ope3/ope4/ope5/ope6/ope7;
    break;
    case 8:   
    printf("\nEnter values for %d operands :",num);
    scanf("%f %f %f %f %f %f %f %f",&ope1,&ope2,&ope3,&ope4,&ope5,&ope6,&ope7,&ope8);
    answer=ope1/ope2/ope3/ope4/ope5/ope6/ope7/ope8;
    break;
    case 9:   
    printf("\nEnter values for %d operands :",num);
    scanf("%f %f %f %f %f %f %f %f %f",&ope1,&ope2,&ope3,&ope4,&ope5,&ope6,&ope7,&ope8,&ope9);
    answer=ope1/ope2/ope3/ope4/ope5/ope6/ope7/ope8/ope9;
    break;
    case 10:   
    printf("\nEnter values for %d operands :",num);
    scanf("%f %f %f %f %f %f %f %f %f %f",&ope1,&ope2,&ope3,&ope4,&ope5,&ope6,&ope7,&ope8,&ope9,&ope10);
    answer=ope1/ope2/ope3/ope4/ope5/ope6/ope7/ope8/ope9/ope10;
    break;
    default:
    printf("\nInvalid input. No such case exist\nCheck again");
    break;
   }

return answer;    
}



//Asking the user if he/she wants to continue performing calculations
void Ask_user()
{

  printf("\nAre you interested in performing more calculations? \nChoose ('Y'/'y' for yes\n'N'/'n' for no) ");
  scanf(" %c",&yes_no);

//yes or no
   switch(yes_no)
   {
    case 'y':
    case 'Y':
    resume();
    break;
    case 'n':
    case 'N':
    printf("\nOkay so you are not interested in performing more calculations\nSo bye! :) ");
    printf("\nHappy Coding ...bye");
    break;
    default:
    printf("\nYou can either choose 'Y'/'y' or 'N'/'n' \nSo...");
    Ask_user();
    break;
   }
}



//Resuming the flow of calculations
void resume()
{
    
  printf("\nNow, Which operation do you want to perform \nSelect from these: { + for Addition, - for Subtraction, * for Multiplication, / for Division }\n");
  scanf(" %c",&operation);

   switch(operation)
   {
    case '+':
    addition();
    printf("\nRequired answer is:%.2f",answer);
    Ask_user();
    break;
    case '-':
    subtraction();
    printf("\nRequired answer is:%.2f",answer);
    Ask_user();
    break;
    case '*':
    product();
    printf("\nRequired answer is:%.2f",answer);
    Ask_user();
    break;
    case '/':
    division();
    printf("\nRequired answer is:%.2f",answer);
    Ask_user();
    break;
    default:
    printf("\nYou entered invalid input :( \nPlease choose from the mentioned characters");
    resume();
    break;
   }
}



//Main function, the code execution starts from here
int main()
{
 
  printf("\n\t\t\t\t---------------------\n\t\t\t\t| Simple Calculator: |\n\t\t\t\t---------------------\n\n");

//Making calculator design
// Aspect Ratio :  24(-) * 6(|) & 24 spaces 
  printf("\t\t\t -----------------------\n\t\t\t|           |           |\n\t\t\t|     +     |     -     |\n\t\t\t| Addition  |Subtraction|\n\t\t\t|-----------|-----------|\n\t\t\t|           |           |\n\t\t\t|     *     |     /     |\n\t\t\t|  Product  | Division  |\n\t\t\t -----------------------");

  printf("\nNote that!\n--->This is a Simple Calculator and can perform above '4' arithemtic operations.\n"); 


// Addition, Subtaction, Multiplication, Division
  printf("\n\nWhich operation do you want to perform \nSelect from these: { + for Addition, - for Subtraction, * for Multiplication, / for Division }\n");
  scanf("%c",&operation);
 
 //Selection Control Mechanism(Using Switch-case)
    switch(operation)
   {
    case '+':
    addition();
    printf("\nRequired answer is:%.2f",answer);//Answer will be upto 2 decimal places
    Ask_user();
    break;
    case '-':
    subtraction();
    printf("\nRequired answer is:%.2f",answer);//Answer will be upto 2 decimal places
    Ask_user();
    break;
    case '*':
    product();
    printf("\nRequired answer is:%.2f",answer);//Answer will be upto 2 decimal places
    Ask_user();
    break;
    case '/':
    division();
    printf("\nRequired answer is:%.2f",answer);//Answer will be upto 2 decimal places
    Ask_user();
    break;
    default:
    printf("\nYou entered invalid input :( \nPlease choose from the mentioned characters");
    resume();
   }

  printf("\nHopefully, you liked using this simple calculator\n\n\t~MADE BY @ALEENA KHAN\n\t---------------------");
  return 0;
}
