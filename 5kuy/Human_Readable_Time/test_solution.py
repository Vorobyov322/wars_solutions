import solution



def test_solution():
    assert(solution.make_readable(0)      == "00:00:00")
    assert(solution.make_readable(59)     == "00:00:59")
    assert(solution.make_readable(60)     == "00:01:00")
    assert(solution.make_readable(3599)   == "00:59:59")
    assert(solution.make_readable(3600)   == "01:00:00")
    assert(solution.make_readable(86399)  == "23:59:59")
    assert(solution.make_readable(86400)  == "24:00:00")
    assert(solution.make_readable(359999) == "99:59:59")
    print("All test passed!")


if __name__ == '__main__':
    test_solution()
