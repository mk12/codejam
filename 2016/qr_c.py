import fileinput

def solve(stack):
    pass

def main():
    for i, line in enumerate(fileinput.input()):
        if i == 0:
            continue
        n, j = [int(x) for x in line.split()]
        print("Case #{}:{}".format(i, '\n'.join(solve(n, h))))


if __name__ == "__main__":
    main()
