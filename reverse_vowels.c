#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isvowels(char c){
    if(c=='A'||c=='a'||c=='e'||c=='E'||c=='i'||c=='I'||c=='o'||c=='O'||c=='u'||c=='U') return true else return false;
}

char* reverse_vowels(char* s){
    int end=strlen(s-1),start=0;
    while (start<end)
    {
if (!isvowels(s[start]))
{
    start++;
}else if(!isvowels(s[end])){
    end--;
}else{
    char temp=s[start];
    s[start]=s[end];
    s[end]=temp;
    start++;
    end--;
}
    }
    return s;
    
} 