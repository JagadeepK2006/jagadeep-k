void reverse(char *s, int count)
{
    char temp;
    int start = 0;
    int end = count-1;
    printf("count %d\n", count);
    while(start<end)
    {
        temp = *(s+start);
        *(s+start) = *(s+end);
        *(s+end) = temp;

        start++;
        end--;
    }
}

char* toHex(int num) {
    char * res = (char*)calloc(33,sizeof(char));
    char arr[] = {'a','b','c','d','e','f'};
    int count = 0;
    int q = 0;
    unsigned int num_2;

    if(num<0)
    {
        num_2 = num + pow(2,32);
    }
    else
    {
        num_2 = num;
    }

    if(num_2 == 0)
    {
        res[0] = '0';
        count++;
    }
    else
    {
        while(num_2)
        {
            q = num_2%16;
            num_2 = num_2/16;
            printf("num %d q %d\n",num_2,q);
            if(q>=0 && q<=9)
            {
                res[count] = q + '0';
            }
            else
            {
                res[count] = arr[q-10];
            }
            count++;
        }
        reverse(res,count);
    }

    res[count] = '\0';
    return res;
}
