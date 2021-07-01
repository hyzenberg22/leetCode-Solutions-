print("Roman to int")

r_dic = {
    "V":5,
    "X":10,
    "L":50,
    "I":1,
    "C":100,
    "D":500,
    "M":1000
}
res = 0
inp = input("Enter the string:- ").upper()
for i in range(len(inp)):
    if (i+1)!= len(inp) and r_dic[inp[i]] < r_dic[inp[i+1]]:
        res -= r_dic[inp[i]]
    else:
        res += r_dic[inp[i]]
        
print(res)