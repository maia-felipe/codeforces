def solve():
    s = input()
    if not s:
        return 0
    
    initial_len = len(s)

    s = s.replace("4", "")
    
    dir_13 = s.count('1') + s.count('3')
    esq_2 = 0
    
    max_mantidos = dir_13 
    
    for char in s:
        if char == '2':
            esq_2 += 1
            
        elif char in ('1', '3'):
            dir_13 -= 1
            
        mantidos_agora = esq_2 + dir_13
        
        if mantidos_agora > max_mantidos:
            max_mantidos = mantidos_agora

    return initial_len - max_mantidos

t = int(input())
while t:
    print(solve())
    t -= 1