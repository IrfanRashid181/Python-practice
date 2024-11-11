
print('Assalamualikum')
print('Enter you Name')
yourname = input()
print('Enter your Rollno')
yourrollno = input()
print('Enter your marks')
yourmarks = input()
print('Your name is:',str(yourname))
print('Your rollno is:',str(yourrollno))
print('Your marks are:',str(yourmarks))
print('Enter the marks')
marks = int(input())
if marks > 75:
    print('Distinction')
elif marks > 40:
    print('Pass')
else:
    print('Fail')