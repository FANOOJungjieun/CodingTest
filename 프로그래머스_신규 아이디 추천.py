
def solution(new_id):
    answer = ''
    
    new_id = new_id.lower() #step 1
    for i in new_id: #step2
        if not i.islower() and not i.isdigit() and i not in ['-','_','.']:
            new_id = new_id.replace(i,'')
    while '..' in new_id: #step 3
        new_id = new_id.replace('..','.')
    new_id = new_id.rstrip('.')
    new_id = new_id.lstrip('.') #step 4
    if new_id == '': #step 5
        new_id += 'a'
    if len(new_id)>15: #step 6
        new_id = new_id[:15]
        new_id = new_id.rstrip('.')
        new_id = new_id.lstrip('.')
    if len(new_id)<3:
        while len(new_id) < 3:
            new_id += new_id[len(new_id)-1]
    
    return new_id
