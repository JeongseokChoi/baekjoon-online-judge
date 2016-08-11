import datetime

day = ["MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN"]

month_date = input()
m = month_date.split()[0]
d = month_date.split()[1]

print(day[datetime.date(2007, int(m), int(d)).weekday()])
