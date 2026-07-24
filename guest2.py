guests=["albert Einstein","Lu Xun","ling Song"]
invite1=f" Join me for dinner, {guests[0].title()}!!!"
print(invite1)
invite2=f" Join me for dinner, {guests[1]}!!!"
print(invite2)
invite3=f" Join me for dinner, {guests[2]}!!!"
print(invite3)
message=f"{guests[2].title()} can't make it to the dinner"
del guests[2]
print(message)
guests.append("lao jiang")
invite4=f"Join me for dinner, {guests[2]}!!!"
print(invite4)
dinner_table="I found a bigger dinner table"
print(dinner_table)
guests.insert(0,"jia yu")
guests.insert(2,"guang hong")
guests.append("guang hong")
invite5=f" Join me for dinner, {guests[0].title()}!!!"
invite6=f" Join me for dinner, {guests[2].title()}!!!"
invite7=f" Join me for dinner, {guests[4].title()}!!!"
print(invite1)
print(invite2)
print(invite5)
print(invite6)
print(invite7)
print("The new table I bought won't arrive on time,so I can only invite two guests for dinner")
popped_guests=guests.pop(2)
refuse=f"{popped_guests.title()},You are not invited"
print(refuse)
popped_guests=guests.pop(3)
refuse=f"{popped_guests.title()},You are not invited"
print(refuse)
popped_guests=guests.pop(2)
refuse=f"{popped_guests.title()},You are not invited"
print(refuse)
print(invite1)
print(invite2)
print(len(guests))