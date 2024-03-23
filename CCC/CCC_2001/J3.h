/*
Keeping Score
In a card game, each player's hand is made up of 13 cards. Each hand has a total point value determined by the number of
cards that have a point value. The cards which are worth points are the Ace (4 points), King (3 points), Queen
(2 points) and Jack (1 point). The other cards (2, 3, 4, 5, 6, 7, 8, 9, 10) have no point value. There are four of each
        type of card, one in each of the four suits. The suits are called clubs (C), diamonds (D), hearts (H), and spades (S).
As well, points are assigned for each suit which has a void (3 points), a singleton (2 points), or a doubleton
        (1 point). A void in a suit means that there are no cards of that suit (e.g. a hand with no spades). A singleton in a
suit means that there is only one card in that suit (e.g. a hand with only one diamond). A doubleton in a suit means
that there are only two cards in that suit.

Write a program to read a set of thirteen cards in the form of a string, then evaluate the number of points in the hand.
The suits will appear in increasing alphabetical order. Within each suit there will be no duplicate cards.
The output is to be the hand and the point value shown in a table form as below. Your output should list the cards in
        the same order as the input. Note that 10 is represented by the character T in both the input and the output. Input is
from the keyboard, output to the screen.

Sample session 1 (user input in italics)
Enter cards:
C258TJKD69QAHSTJA
        Cards Dealt                 points
Clubs 2 5 8 T J K             4
Diamonds 6 9 Q A              6
Hearts                        3
Spades T J A                  5
Total 18

Sample Session 2
Enter cards:
CAD578KAHAS47TQKA
        Cards Dealt                 points
Clubs A                       6
Diamonds 5 7 8 K A            7
Hearts A                      6
Spades 4 7 T Q K A            9
Total 28
*/

