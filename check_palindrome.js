function checkPalindrome(word){
// function to check if a word is a palindrome or not
    if(word.length==0 || word.length==1){ 
        return true; // true if there is now word or it is of length 1
    }
    
    //compare first character to last character
    if(word.charAt(0) == word.charAt(word.length-1)){
        //slice word
        return checkPalindrome(word.substring(1, word.length-1));
    }
    
    //for false palindromes
    return false;
    
}

//test
console.log(checkPalindrome("kayak")); //prints true
console.log(checkPalindrome("kayam")); //prints false
