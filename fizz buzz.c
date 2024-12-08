char** fizzBuzz(int n, int* returnSize) {
    char** answer = (char**)malloc(n*sizeof(char*));
    for(int i=1;i<=n;i++){
       if(i%3==0&&i%5==0){
        answer[i-1]="FizzBuzz";
       }
       else if(i%3==0){
        answer[i-1]="Fizz";
       }
       else if(i%5==0){
        answer[i-1]="Buzz";
       }
       else{
        char buffer[12];
        sprintf(buffer,"%d",i);
        answer[i-1]=strdup(buffer);
       }
    }
    *returnSize = n;
    return answer;
}