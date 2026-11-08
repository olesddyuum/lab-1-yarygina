
name_ru = "Олеся Ярыгина"
name_en = "Olesya Yarygina"
num = 29
group = "М3О-103Б-26"
lang = "Python"


control = 304 * num


student_id = group + "/" + str(num)


print("Hello to 304 from " + name_en + ", number " + str(num) + ", group " + group + "!")
print("Привет, 304! Это " + name_ru + ", номер " + str(num) + ", группа " + group + "!")
print("Student ID: " + student_id + " | Language: " + lang + " | Control: " + str(control))


words = name_en.split()
count = len(words)
print("Word count in English name: " + str(count))
