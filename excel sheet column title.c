#include <stdlib.h>

#define Z 26
#define TITLE_LEN_MAX 8 // 2^31-1 == 2147483647 == FXSHRVA

char *convertToTitle(int columnNumber)
{    
    char *title;
    
    title = (char *)calloc(TITLE_LEN_MAX, sizeof(char));
    if (title == NULL)
        return (NULL);

    /* MAIN ALGORITM */
    int titleCount = 0;
    for (int letter = columnNumber % Z; columnNumber; columnNumber /= Z, titleCount++, letter = columnNumber % Z)
        if (!letter)
        {
            title[titleCount] = Z + 64;
            columnNumber--;
        }
        else
            title[titleCount] = letter + 64;
    /* END MAIN ALGORITM */

    /* just string reversal */
    titleCount--;
    for (int i = 0, tmp; i < titleCount; i++, titleCount--)
    {
        tmp = title[i];
        title[i] = title[titleCount];
        title[titleCount] = tmp;
    }

    return title;
}
