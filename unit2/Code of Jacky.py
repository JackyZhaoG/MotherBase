def count_char(fn):
    import os.path
    if os.path.isfile(fn):
        with open(fn, 'r') as fh:
            total = 0
            for line in fh:
                total+=len(line.split())
            return total


