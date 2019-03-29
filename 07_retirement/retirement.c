#include <stdio.h>
#include <stdlib.h>

struct _retire_info {
  int months;
  double contribution;
  double rate_of_return;
};

typedef struct _retire_info retire_info;

void retirement ( int startAge , double initial , retire_info working , retire_info retired){
  double current_balance = initial;
  double balance_Increase=0;
  int age_until_retirement=startAge+working.months;
  int age_until_death=age_until_retirement+retired.months;
  for(int counter1 = startAge ; counter1 < age_until_retirement ; counter1++ ){
    printf("Age %3d month %2d you have $%.2lf\n" , counter1/12 , counter1%12 , current_balance);
    balance_Increase =  (current_balance*working.rate_of_return)/1200 + working.contribution;
    current_balance += balance_Increase;
  }
  for(int counter2 = age_until_retirement ; counter2 <age_until_death ; counter2++ ){
    printf("Age %3d month %2d you have $%.2lf\n" , counter2/12 , counter2%12 , current_balance);
    //balance decrease
    balance_Increase =  (current_balance*retired.rate_of_return)/1200 + retired.contribution;
    current_balance += balance_Increase;
  }
}

int main (){
  retire_info working;
  retire_info retired;
  int startingAge=327;
  double initial_savings=21345;
  working.months=489;
  working.contribution=1000;
  working.rate_of_return=4.5;
  retired.months=384;
  retired.contribution=-4000;
  retired.rate_of_return=1;
  retirement(startingAge , initial_savings , working , retired);
  return EXIT_SUCCESS;
}
