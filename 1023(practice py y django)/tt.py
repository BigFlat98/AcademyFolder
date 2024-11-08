import re

text = 'one two three four five five 5'
p = re.compile('five|5')
change = '5'
result = p.sub(change, text)

print(text)
print(result)