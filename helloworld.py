import time

word = 'hello world!'
newword = ''

for _ in word:
    newword += ' '

for i in range(len(word)):
    while word[i] != newword[i]:
        newword = newword[:i] + chr(ord(newword[i])+1) + newword[i+1:]
        print(newword)
        time.sleep(0.01)