def kangaroo(x1, v1, x2, v2):
    if v1 == v2:
        return "NO"
    n = (x2 - x1) / (v1 - v2)
    return "YES" if n.is_integer() and (n > 0) else "NO"
