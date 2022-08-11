#include "main.h"
/**
*
*
*/
int main(void)
{
    int len;
    int len2;
    len = _printf("%c\n", 'S');
    len2 = printf("%c\n", 'S');
    printf("length of _printf:%d\n", len);
    printf("length of printf:%d\n", len2);
    len = _printf("A char inside a sentence: %c. Did it work?\n", 'F');
    len2 = printf("A char inside a sentence: %c. Did it work?\n", 'F');
    printf("length of _printf:%d\n", len);
    printf("length of printf:%d\n", len2);
    len = _printf("Let'see if the case is correctly done: %c. Did it work?\n", 48);
    len2 = printf("Let'see if the cast is correctly done: %c. Did it work?\n", 48);
    printf("length of _printf:%d\n", len);
    printf("length of printf:%d\n", len2);
    len = _printf("%s", "This sentence is retrieved from va_args!\n");
    len2 = printf("%s", "This sentence is retrieved from va_args!\n");
    printf("length of _printf:%d\n", len);
    printf("length of printf:%d\n", len2);
    len = _printf("Complete the sentence: You %s nothing, Jon Snow.\n", "know"); 
    len2 = printf("Complete the sentence: You %s nothing, Jon Snow.\n", "know");
    printf("length of _printf:%d\n", len);
    printf("length of printf:%d\n", len2);
    len = _printf("Complete the sentence: You %s nothing, Jon Snow. \n", (char *)0); 
    len2 = printf("Complete the sentence: You %s nothing, Jon Snow. \n", (char *)0); 
    printf("length of _printf:%d\n", len);
    printf("length of printf:%d\n", len2);
    len = _printf("%c%cth %s%s a%cg%s: Y%sou %s no%ching%s Snow.\n", 'W', 'i', "some ", "more", 'r', "s", "", "know", 't', ", Jon"); 
    len2 = printf("%c%cth %s%s a%cg%s: Y%sou %s no%ching%s Snow.\n", 'W', 'i', "some ", "more", 'r', "s", "", "know", 't', ", Jon");
    printf("length of _printf:%d\n", len);
    printf("length of printf:%d\n", len2);
    len = _printf("%%\n");
    len2 = printf("%%\n");
    printf("length of _printf:%d\n", len);
    printf("length of printf:%d\n", len2);
    len = _printf("Should print a single percent sign: %%\n");
    len2 = printf("Should print a single percent sign: %%\n");
    printf("length of _printf:%d\n", len);
    printf("length of printf:%d\n", len2);
    len = _printf("%s%c%c%c%s%%%s%c", "Loading", '.', '.','.', "99", "Please wait", '\n');
    len2 = printf("%s%c%c%c%s%%%s%c", "Loading", '.', '.','.', "99", "Please wait", '\n');
    printf("length of _printf:%d\n", len);
    printf("length of printf:%d\n", len2);
    len = _printf("css%ccs%scscscs", 'T', "Test");
    len2 = printf("css%ccs%scscscs", 'T', "Test");
    printf("\nlength of _printf:%d\n", len);
    printf("length of printf:%d\n", len2);
    return (0);
}
