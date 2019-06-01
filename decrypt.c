#include<stdio.h>
#include<ctype.h>

void caesar(char text[100],int s)
{
    int i;
    char result[100];
    for (i=0;text[i]!='\0';i++)
    {
        result[i] = (char)((text[i]+s-65)%26 + 65);
    }
    result[i]='\0';

    printf("Encoded: %s\n",result);
}

char * mstr(char x) {

  switch (x) {
    case 'A':
        return ".- ";
    case 'B':
        return "-... ";
    case 'C':
        return "-.-. ";
    case 'D':
        return "-.. ";
    case 'E':
        return ". ";
    case 'F':
        return "..-. ";
    case 'G':
        return "--. ";
    case 'H':
        return ".... ";
    case 'I':
        return ".. ";
    case 'J':
        return ".--- ";
    case 'K':
        return "-.- ";
    case 'L':
        return ".-.. ";
    case 'M':
        return "-- ";
    case 'N':
        return "-. ";
    case 'O':
        return "--- ";
    case 'P':
        return ".--. ";
    case 'Q':
        return "--.- ";
    case 'R':
        return ".-. ";
    case 'S':
        return "... ";
    case 'T':
        return "- ";
    case 'U':
        return "..- ";
    case 'V':
        return "...- ";
    case 'W':
        return ".-- ";
    case 'X':
        return "-..- ";
    case 'Y':
        return "-.-- ";
    case 'Z':
        return "--.. ";
    default:
        return "/";
  }
}

void morse(char s[100]) {

  for (int i = 0; s[i] != '\0'; i++)
    printf("%s ",mstr(s[i]));
}


int main()
{
    short int a,s;
    char msg[100];
    printf("Input message in uppercase.\n");
    gets(msg);
    printf("\nSelect the encryption method from the following: \n\n");
    printf("1. Morse\n2. Caesar Cipher\n3. Vignerre Cipher\n");
    //label:
    scanf("%d",&a);

    switch (a)
        {
            case 1:
                printf("Encoded:  ");
                morse(msg);
                break;

            case 2:
                {printf("\nCaesar Cipher\nEnter the shift : ");
                scanf("%d", &s);

                caesar(msg, s);
                break; }

            case 3:
                printf("Vn\n");
                //vignerre(msg);
                break;

            default:
                {
                    printf("\nInput valid integer.\n");
                    //goto label;
                }
        }
    scanf("%d",&a);
    }
