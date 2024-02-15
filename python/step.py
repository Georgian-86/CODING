# a="This is my class"
# for i in range(0, len(a), 3):
#     print(a[i:i+2])

a=["teamA 45","teamB 50","teamC 57","teamD 60"]
new_lst=[]
for element in a:
    new_lst.append(element[-2:])
z=new_lst.index(sorted(new_lst)[1])
print(a[z])

