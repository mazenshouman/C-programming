#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include "cards.h"


void assert_card_valid(card_t c) {
  assert ((c.value >=2 && c.value <=14) && (c.suit >=SPADES && c.suit <=CLUBS));

}

const char * ranking_to_string(hand_ranking_t r) {
  const char * ret;
  switch(r){
  case STRAIGHT_FLUSH :
    ret = "STRAIGHT_FLUSH";
    break;
  case FOUR_OF_A_KIND :
    ret = "FOUR_OF_A_KIND";
    break;
  case  FULL_HOUSE :
    ret = "FULL_HOUSE";
    break;
  case  FLUSH :
    ret = "FLUSH";
    break;
  case  STRAIGHT :
    ret = "STRAIGHT";
    break;
  case  THREE_OF_A_KIND :
    ret = "THREE_OF_A_KIND";
    break;
  case  TWO_PAIR :
    ret = "TWO_PAIR";
    break;
  case  PAIR :
    ret = "PAIR";
    break;
  case  NOTHING :
    ret = "NOTHING";
    break;
}
  return ret;
}

char value_letter(card_t c) {
  char value;
  
  if(c.value<=9)
    value =(c.value+'0');
  else if(c.value==10)
    value = '0';
  else{
    switch(c.value){
    case VALUE_JACK:
      value = 'J';
      break;
    case VALUE_QUEEN:
      value = 'Q';
      break;
    case VALUE_KING:
      value = 'K';
      break;
    case VALUE_ACE:
      value = 'A';
      break;
    }
  }
  return value;
}

char suit_letter(card_t c) {
  char value;
  switch(c.suit){
  case SPADES :
    value = 's';
    break;
  case HEARTS :
    value = 'h';
    break;
  case DIAMONDS :
    value = 'd';
    break;
  case CLUBS :
    value = 'c';
    break;
  }
  return value;
}

void print_card(card_t c) {
  printf("%c%c" , value_letter(c) , suit_letter(c));
}
unsigned  value_from_letter (char let){
  unsigned value;
  if( let >= '2' && let <= '9')
    value = let - '0';
  else if(let=='0')
    value = 10;
  else if(let=='J')
    value = VALUE_JACK;
  else if(let=='Q')
    value = VALUE_QUEEN;
  else if(let=='K')
    value = VALUE_KING;
  else if(let=='A')
    value = VALUE_ACE;
  return value;
} 

suit_t suit_from_letter(char let){
  suit_t temp;
  if(let=='s' )
    temp=SPADES;
  else if (let=='h')
    temp=HEARTS;
  else if (let=='d')
    temp=DIAMONDS;
  else if (let=='c')
    temp=CLUBS;
  return temp;
}
card_t card_from_letters(char value_let, char suit_let) {
  card_t temp;
  temp.value = value_from_letter(value_let);
  temp.suit = suit_from_letter(suit_let);
  assert_card_valid(temp);
  return temp;
}

card_t card_from_num(unsigned c) {
  card_t temp;
  temp.suit=(c/13);
  unsigned reminder=c%13;
  if((reminder>=2) &&(reminder<=9))
    temp.value= reminder;
  else if (reminder>=10 && reminder<=12)
    temp.value = reminder+1;
  else if (reminder == 0)
    temp.value = 10;
  else if (reminder == 1)
    temp.value = VALUE_ACE;

  return temp;
}
