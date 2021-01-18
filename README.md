# THE ANAGRAMS PROBLEM

Two words are anagrams of each other if they have the same letters in the same quantity, in a different
sequence. For instance, cat and act are anagrams. Also pots, stop, and tops are all anagrams of one
another (each can be formed by permuting the letters of the others). <br />

Write a program that, given a word, will find all anagrams of the word that are in the provided dictionary
(words.txt). The program should repeatedly ask the user to enter a word and it should display the
anagrams of the word entered by the user. The program should also give the user the option to exit. <br />
Sample run: <br />
Enter a word (press enter to exit)> cat <br />
Anagrams of cat: act cat<br/>
Enter a word (press enter to exit)> meat <br />
Anagrams of meat: mate meat meta tame team <br />
Enter a word (press enter to exit)> pot <br />
Anagrams of pot: opt pot top <br />
Enter a word (press enter to exit): <br />
Good bye <br />

## SOLUTION

At the beginning of the program, load the dictionary into a map where the key is a word in its
alphabetized form and the value is the set of all words that map to that key. A word is converted
to its alphabetized form by sorting all the letters in the word alphabetically. The map will look
like: <br />
KEY | VALUE <br />
act | act, cat <br />
aeonrsst | senators, treasons <br />
deirw | weird, wider, wired, wrieds <br />

When looking for the anagrams of a word, lookup the alphabetized form of that word in the map
and then simply retrieve the set of words associated to that key. 