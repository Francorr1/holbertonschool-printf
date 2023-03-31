![](https://static.wixstatic.com/media/aaf0fb_44565f883075417ab38af433fbc0334b~mv2.png/v1/fill/w_320,h_320,al_c,q_85,usm_0.66_1.00_0.01,enc_auto/aaf0fb_44565f883075417ab38af433fbc0334b~mv2.png)

***
# C - PRINTF
***

# Our printf function
The purpose of the following project is to create our printf function, using some of the most conventional commands included in the printf man.  Implementing some techniques to improve our teamwork skills and facilitate us to develop a readable code.

***
## Requirements
> A list of requirements used within the project:
***

* Allowed editors: vi, vim, emacs.
* All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89.
* All your files should end with a new line.
* A README.md file, at the root of the folder of the project is mandatory.
* Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl.
* You are not allowed to use global variables.
* No more than 5 functions per file.
* In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples.
* The prototypes of all your functions should be included in your header file called main.h.
* Don’t forget to push your header file.
* All your header files should be include guarded.
* Note that we will not provide the _putchar function for this project.

***
## Description
***
One of the main functionalities that we can avail of programming in C languages is to be able to show messages on the screen, for example a message to the user or a calculation result.

It is known that there are some other functions to show messages on the screen, but PRINTF has the advantage of entering as much text and as many variables as is desired. Using the command [man 3 printf](https://man7.org/linux/man-pages/man3/printf.3.html), we can display the function manual which is going to provide all kinds of help and explanation on the use of the previously mentioned function.

### Conversion Specifiers:

| Type | Description |
| ---- | --------|
| %c | Prints Character |
| %s | Prints String |
| %% | Prints Percentage |
| %i | Prints Integer |
| %d | Prints decimal |

***
## Synopsis

+ int _printf(const char *format, ...);

***
## Flowchart
> The following flowchart graphically represents the structured sequence required to develop our function
***
![] (Flowchart)

***
## ¿How to use?
***
You must include all the files listed above and your own .c file with a main function to call _printf.c

***
## Example
#### #include "main.h"

_printf("Every wednesday at %d AM I go to the %s for the mandatory day.", 9, "Campus");

Print: Every wednesday at 9 AM I go to the Campus for the mandatory day.

***
## Authors
[Franco Correa](https://github.com/Francorr1), [Miguel Coa](https://github.com/Macj04)
