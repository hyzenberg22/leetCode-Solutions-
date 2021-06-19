def rev_int(inp):
    if str(inp)[0] == '-':
        a = int('-'+str(inp)[-1:0:-1])
        if a >= -2147483648 and a<= 2147483647:
            return a
        else:
            return 0
    else:
        x= int(str(inp)[::-1])
        if x >= -2147483648 and x<= 2147483647:
            return x
        else:
            return 0
    
    




if __name__ == '__main__': 
    print(rev_int(120))
