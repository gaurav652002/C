int isPalindrome(char str[]) 
{ 
    
    int l= 0; 
    int k= strlen(str) - 1; 
    
    while (k > l) 
    { 
        if (str[l++] != str[k--]) 
        { 
            printf("%s not Palindrome", str); 
            return; 
        } 
    } 
    printf("%s is palindrome", str); 
} 