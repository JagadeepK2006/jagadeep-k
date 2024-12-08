int isvowel(char c)
{
    c=tolower(c);
    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
    {
        return true;
    }
    return false;
}
char* reverseVowels(char* s) {
    for(int i=0,j=strlen(s)-1;i<j;i++,j--)
    {
        char a=tolower(s[i]);
        char b=tolower(s[j]);
        if(isvowel(a)&&isvowel(b))
        {
            char c=s[i];
            s[i]=s[j];
            s[j]=c;
        }
        else if(isvowel(a)&&!isvowel(b))
        {
            i--;
        }
        else if(!isvowel(a)&&isvowel(b))
        {
            j++;
        }
    }
    return s;
}
