scores = {}
for i in range(1, 8 + 1):
    scores.setdefault(int(i), int(input()))

sorted_scores = sorted(scores.values(), reverse=True)

additional_val = sorted_scores[0:5]
print(sum(additional_val))

for key, value in scores.items():
    if value in additional_val:
        print(key, end=" ")
