/* Representing cards in a poker game as structs.
 * Paula Amaya
 * April 28, 2025
 */
#include <stdio.h>

enum Pip {Ace, One, Two, Three,Four, Five, Six, Seven, Eight, Nine, Ten, \
    Jack, Queen, King};
enum Suit {Diamond = 'd', Spade = 's', Heart = 'h', Club = 'c'};



int main(void)
{
    enum Suit hearts = 'h';
    printf("%d\n", hearts);
    printf("%c\n", hearts);
    return 0;
}
