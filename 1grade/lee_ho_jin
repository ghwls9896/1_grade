def header_text(width, text):
    print("*", end="")
    lspace = int((width-len(text))/2)
    rspace = int(width - len(text)-lspace)
    print_space(lspace)
    print(text, end="")
    print_space(rspace)
    print("*")
def print_space(count):
    for i in range(count):
        print(" ", end="")
def star_line(count):
    for i in range(count):
        print("*", end="")
    print()
def header_print(title, data , name):
    line_len = max(len(title), len(data), len(name))
    star_line(line_len+4)
    header_text(line_len+2,title)
    header_text(line_len+2,data)
    header_text(line_len+2,name)
    star_line(line_len+4)
