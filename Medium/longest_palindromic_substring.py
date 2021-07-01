def palindrom(st):
    if st == st[::-1]:
        return True
    else:
        return False
        
def sub_string(inp_st):
    lst = []
    for i in range (len(inp_st)):
        for j in range(i+1, len(inp_st)+1):
            if palindrom(inp_st[i:j]):
                lst.append(inp_st[i:j])
    return lst
        
        
if __name__ == '__main__': 
    sub_string("abba")
    