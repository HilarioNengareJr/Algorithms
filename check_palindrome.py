def palindrome_check(word):
    """ Check if word is a palindrome or not. """
    
    if len(word) == 0 or len(word) == 1:
        return True
    elif word[0] == word[len(word)-1]:
        return palindrome_check(word[1:len(word)-1])
    else:    
        return False
    
def main():
    print(palindrome_check("kayak")) # prints true
    
if __name__ == '__main__':
    main()
