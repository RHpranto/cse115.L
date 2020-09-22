#include<stdio.h>
int length(char arr[])
{
    int i = 0;
    while(arr[i]!='\0'){
        i++; //counting length
    }
    return i;
}
int main()
{
    char string[1000]; //declaring string
    printf("Enter string: ");
    scanf("%[^\n]s",&string); //scanning string with space

    int len = length(string); //passing into function
    printf("Length is: %d",len);
    return 0;
}
