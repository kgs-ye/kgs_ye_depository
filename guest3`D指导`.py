guests = ["albert Einstein", "Lu Xun", "ling Song"]

# 打印初始邀请
for g in guests:
    print(f"Join me for dinner, {g.title()}!!!")

# 处理不能赴约的客人
cant_come = guests[2]  # 这里知道是最后一个，但最好用变量
print(f"{cant_come.title()} can't make it to the dinner")
guests.remove(cant_come)  # 用 remove 而不是 del 索引，避免索引乱

# 添加新客人
guests.append("lao jiang")

# 发现大餐桌，插入三人（注意不要重复）
guests.insert(0, "jia yu")
guests.insert(2, "guang hong")   # 这个位置是第三位，观察变化
# 注意：guang hong 已经插入过了，不要再 append 重复的了

# 打印当前所有嘉宾
print("\nCurrent guest list:")
for g in guests:
    print(f"  {g.title()}")

# 后来桌子没了，只能邀请两位，则取前两位（或后两位）
print("\nThe new table won't arrive, so I can only invite two guests.")
final_guests = guests[:2]   # 取前两位，假设就是最终邀请的
for g in final_guests:
    print(f"Join me for dinner, {g.title()}!!!")