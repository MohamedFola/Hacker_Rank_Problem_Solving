# the idea of the solution is so easy
# the constraint is that k1 and k2 will meet at the same point after the same number of jumps
# so the equation is --> x1 + ( n * v1 ) = x2 + ( n * v2 ) where n is the number of jumps
# n = (x2 - x1) / (v1 - v2)
# if n is integer and +ve number this means that the two kangaros will really meet at a point
# otherwise if n is negative or fraction then they will not meet

def kangaroo(x1, v1, x2, v2):
    if v1 == v2:
        return "NO"
    n = (x2 - x1) / (v1 - v2)
    return "YES" if n.is_integer() and (n > 0) else "NO"
