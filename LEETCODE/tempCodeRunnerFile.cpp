bool isPalindrome(int n) {
    int x =  n;
    int remainder = 0;
    int reversed = 0;
    while(x!=0){
        remainder = x%10;
        reversed = reversed*10+remainder;
        x /= 10;
    }

    if(n == reversed)
        return true;
    else    return false;
}