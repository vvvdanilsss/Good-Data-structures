# 2
guests = ["Анна", "Маша", "Федор", "Сергей"]
guests.append("Владимир")
print(1)

# 3
t = [-27, -23, -20, -12, -8]
t.insert(2, -22)
print("n")

# 4
usd_rub1 = [68.5, 69.1, 70.2, 71, 69.54]
usd_rub2 = [60.1, 62.7, 62.5, 65.6]

usd_rub = usd_rub2 + usd_rub1
print("n+m")

# 7
lst_in = list(map(str.strip, input().split()))
cities = lst_in[:]

del cities[-1]
print(1)

# 8
lst_in = list(map(str.strip, input().split()))
cities = lst_in[:]

cities.remove("Пермь") if "Пермь" in cities else None
print("n")