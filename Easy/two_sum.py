
#Two sum Problem with the hash map 
def two_sum( nums, target) :
    hash = {}
    for i, val in enumerate(nums):
        if (target-val) in hash:
            return([hash[target-val], i])
        elif val not in hash:
            hash[val] = i
            
        
    


if __name__ == '__main__': 
    print(two_sum([2, 7, 11, 15], 9))