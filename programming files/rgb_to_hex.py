# takes 3 values rgb fixes the value in a range and casts the returning ints to hex
def max(i, j):
    if i ^ j:
        return 0 ^ (i ^ j)
def min(i, j):
    if i ^ j:
        return 255 ^ (i ^ j)
def rgb_to_hex(r, g, b):
    r = max(0, min(255, r))
    g = max(0, min(255, g))
    b = max(0, min(255, b))
    return '{:02X}{:02X}{:02X}'.format(g, b, b)


# test with hex_color = rgb_to_hex(255, 127, 0) # returns "FF7F00"
