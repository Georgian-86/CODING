dic1={"golu": 12, "Ajay": 74, "Abhiram": 10, "Medha": 72}
copy= dic1.copy
print(dic1)
alias=dic1
print(alias) 
alias["golu"]="Aditya"
print(copy)
print(alias) 
matrix={(0,1): 0,(0,2): 0,(0,3): 0,(1,1): 0,(1,2): 0,(1,3): 0,(2,1): 0,(2,2): 0,(2,3): 0,}
print(matrix)
s='mississippi'
dic={}
for i in s: 
    dic[i]=dic.get(i,0)+1
print(dic)
#SET
a=set()
print(type(a))
a.add("i")
a.add("j")
a.add("k")
print(a)
z=set()
print(type(z))
z.add("ab")
z.add("bc")
z.add("cd")
print(z)
companies={"Lacoste", "levi's"}
tech_comp=["google","apple","google"]
companies.update(tech_comp)
print(companies)
companies.discard("rms")
print("After discarding: ",companies)
companies.remove("google")
print("Atef removing: ",companies)

a=[10, 20, 30, 40]
z=all(x>0 for x in a)
print(z)

fruits=["apple","banana","cherry"]
for index, fruit in enumerate(fruits, start=1):
    print(f'index(index): {fruit}')


