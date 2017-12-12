import sys

if 2 != len(sys.argv) :
    sys.exit(-1)

asciiart_file = open(sys.argv[1], "r")
asciiart = asciiart_file.read()
# print(asciiart)

layout = ""
text = ""
count = 0

for c in asciiart :
    # print(c, end = ' ')
    if ord(c) == ord(' ') :
        count += 1
        if count >= (125-35) :
            # print(count)
            layout += chr(count+35)
            count = 0
            text += '~'
    else :
        # print(count)
        layout += chr(count+35)
        count = 0
        if 10 == ord(c) :
            text += '!'
        else :
            text += chr(ord(c)+1)

print(layout)
print(text)
print("%d %d"%(len(layout), len(text)))

for line in asciiart_file.readlines() :
    print(line)

asciiart_file.close()
