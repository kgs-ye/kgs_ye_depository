fondness=["chicken","beef","mutton","duck"]
#好吃的
print(fondness)
print(fondness[0])
print(fondness[1])
print(fondness[2])
print(fondness[3])
print(fondness[-1])
print(fondness[-2])
print(fondness[-3])
print(fondness[-4])
fondness[0]="goose"
print(fondness)
#用鹅肉顶掉鸡肉好再append回来
fondness.append("chicken")
fondness.insert(0,"pork")
#在列表第一位插入猪肉
print(fondness)
del fondness[0]
print(fondness)
#插入猪肉
fondness.insert(0,"pork")
#用remove移除猪肉
fondness.remove("pork")
#再次插入猪肉
fondness.insert(0,"pork")
#使用pop
popped_meat=fondness.pop(0)
print(f"I don't like {popped_meat}")
#sorted
print(sorted(fondness))
#sorted_desc
sorted_fondness_desc=sorted(fondness,reverse=True)
print(sorted_fondness_desc)
print(fondness)
fondness.sort()
print(fondness)
fondness.sort(reverse=True)
print(fondness)

print(len(fondness))
fondness.reverse()
print(fondness)


