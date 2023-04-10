# the idea is to check for the leap year for both calenders
# if year is 1918 print 26.09.1918 as this year 32nd day is 14th february
# if julian calender leap year is divisible by 4
# if gregorian calender leap year is divisible by 400 and divisible by 4 and not 100


def dayOfProgrammer(year):
    # 1918 case
    if year == 1918:
        return "26.09.1918"

    # julian case
    elif year < 1918:
        if year % 4 == 0:
            return f"12.09.{year}"
        else:
            return f"13.09.{year}"

    # gregorian cse
    elif year > 1918:
        if (year % 400 == 0) or ((year % 4 == 0) and (year % 100) != 0):
            return f"12.09.{year}"
        else:
            return f"13.09.{year}"
