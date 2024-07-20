with open("garbage.txt") as f:
    counts = {}
    for line in f:
        for c in line.strip():
            counts[c] = counts.get(c, 0) + 1
    print (counts)