int countSegments(char* s) 
{
    if(s == NULL) //null pointer check
        return 0;
    int segment_count = 0; //counter to return number of segments
    bool space_detect_flag = false; //detects space
    bool char_present = false; //we use this incase there is no non-space chars are present
    int i = 0;
    while(s[i])
    {
        if(s[i] == ' ') //if space
        {
            if(!space_detect_flag && char_present) //if space and non-space was detected already
            {
                segment_count++;
            }
            space_detect_flag = true;
        }
        else
        {
            if(space_detect_flag && (s[i] != ' ')) //if space detected i-1 and now i as non-space char, reset space flag
            {
                space_detect_flag = false;
            }
            char_present = true; //helps segment_count increment code
        }
        i++;
        if(s[i] == '\0' & s[i-1]!=' ')
            segment_count++; //covers last segment if not space present
    }
    return segment_count;

}
