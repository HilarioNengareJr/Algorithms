def reverse_string(word):
  """
  Recursive function to reverse specified string literal.
  """
  
    if len(word) == 0: # if we reach an empty string state then we stop
        return ""
    return str(reverse_string(word[1:])) + word[0] # Cast return value of recursive call to string(to avoid typeerror)- to be able to concatenate with word[0]
  
    
def main():
    print(reverse_string("Hello"))
    
    
if __name__ == '__main__':
    main()
