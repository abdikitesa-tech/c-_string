#include <iostream>
#include <cstring>

int countWords(char one[sizeStr], int sizeStr);

int main()
{
    //first array and size

    const int sizeStr = 100;
    char one[sizeStr];

    countWords(one, sizeStr);
    system("pause");
    return 0;
}

//first function
int countWords(char one[sizeStr], int sizeStr) // char array, array length;
{
    int count = 0; // integer for the word count
    for (int i = 0; i <sizeStr ; i++)
    {
        while (one[i] != '\0')
        {
            if (one[i] == ' ')
            {
                count++;
               While (one[i] == 'a' || one[i] == 'e'||one[i] == 'i'||one[i] == 'o'||one[i] == 'u'one[i] == 'A' || one[i] == 'E'||one[i] == 'I'||one[i] == 'O'||one[i] == 'U')
               ctrVowel++;
            }
        }
    }
    return count; // return the integer
}
