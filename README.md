# _Printf Project :pencil:

#### &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Printf is a C function that was created as part of the project assigned by Holberton School.

## How does it work  :question:

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;The C function "_printf" sends formatted output to standart output.

## Usage :bulb:

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;The _printf function works as follows :

```
      > _printf FORMAT [ARGUMENT]...
```
### &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;*Parameters :clipboard:

  #### &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;-Format:

**&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;formats are always preceded by the character '%'**

---

**&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;%c :**

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;print char

**&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;%s :**

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;print string

**&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;%d :**

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;print signed decimal integer

**&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;%i :**

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;print signed decimal integer

---

## Return Value :traffic_light:

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;If successful, The total number of characters written is returned. On failure, a negative number is returned.

## Example: :round_pushpin:

### &nbsp;&nbsp;&nbsp;&nbsp;Code:
```c

#include "holberton.h"

int main () {
   int ch;

   for( ch = 75 ; ch <= 80; ch++ ) {
      printf("ASCII value = %d, Character = %c\n", ch , ch );
   }

   return(0);
}
```
### &nbsp;&nbsp;&nbsp;&nbsp;Output:
```c

 ASCII value = 75, Character = K
 ASCII value = 76, Character = L
 ASCII value = 77, Character = M
 ASCII value = 78, Character = N
 ASCII value = 79, Character = O
 ASCII value = 80, Character = P
```

## Contributing :scroll:

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;[Alejandro Ramirez Ciceros](https://github.com/FatChicken277) :chicken:

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;[Marlon Aurelio Garcia Morales](https://github.com/clasesucatmarlon) :tophat:

## License :book:

### &nbsp;&nbsp;&nbsp;&nbsp;Holberton School Project.
