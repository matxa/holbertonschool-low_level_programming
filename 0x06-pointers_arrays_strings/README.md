C - More pointers, arrays and strings

6 --- The *leet Function --- 6

 - Prototype *leet(char *s);

The leet function I've created takes a string argument represented with the parameter (char *s). The string passed to the function is then transformed into a new string.\n
String transformation or translation. The way I look at this is the same as saying. I am swapping values between arrays. 

 - Declarations

From the get go I made two "arrays or strings", char letter[] = "aAeEoOtTlL"; which stores the letter characters that we are looking for in the string given to us "passed as an argument to the leet fucntion".
char numbers[] = "4433007711"; which stores the number characters value, that we are going to change the given string to once a match is found between the given string (s) and the letters[] string array.

- int i; - incrementor for the first while loop\n
- int i_sec_loop; - incrementor for the secound while loop\n

 - Loops and statements

The first while, iterates until the index of the given string not equal (!=) to the null byte.
-    while (s[i] != '\0')
the incrementor(i) is updated everytime the loop runs, and by doing so it captures the length of the given string (s).
-    i++;
The second while loop which, which is nested inside the first while loop. Iterates through the letters[]
-    while (letters[i_sec_loop])
the incrementor(i_sec_loop) is updated everytime the loop runs, and by doing so it captures the length of letters[]
-    i_sec_loop++;
The if statement is just checking if the value of the index of given string (s) matches the value of the index of letters[]; if so then change the value of that index with a new char,that char is found in the numbers[]

 - Return

The leet function returns the translated string where char a and A is now 4, char e and E is now 3, char o and O is now 0, char t and T is now 7, char l and L is now 1

 - Example:

Input:

char s[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\n";

Output:

3xp3c7 7h3 b3s7. Pr3p4r3 f0r 7h3 w0rs7. C4pi741iz3 0n wh47 c0m3s.