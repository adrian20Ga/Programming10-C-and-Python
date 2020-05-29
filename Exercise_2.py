words = {'Mérida', 'upy', 'ella', 'programa', 'octocat',
    'gupy', 'México', '(halo)', '1863', "89"}

l = {
    1
    if (a in "abcdefghijklmnopqrstuvwxyz"
        or
        a in "ABCDEFGHIJKLMNOPQRSTUVWXYZ")
    else w
    for w in words
    for a in w
}

print(words - l)
