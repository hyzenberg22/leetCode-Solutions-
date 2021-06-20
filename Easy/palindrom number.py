# This is the program the compiler is showing correct but the not running in the leet code 

# ------------sol:-1-------------
# ------------This is the string reversing approach 
# def palindrom(inp):
#     temp = str(inp)[::-1]
#     if str(inp)[0]=="-":
#         return False
#     else:
#         if (inp >= -2147483648 and inp<= 2147483647):
#             if str(inp) == temp:
#                 return True
#             else:
#                 return False
#         else:
#             return 0


# ----------sol:-2----------
#-----------This is the mathematical approach of reversing the number 

def palindrom(inp):
    if inp < 0:
        return False
    else:
        c = inp
        b = 0
        while c:
            b = b*10 + c%10
            c//=10
        return b == inp
    
        

if __name__ == '__main__':
    print(palindrom(121))