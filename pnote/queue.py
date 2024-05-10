from collections import deque

q=deque(["anb","bc","css"])
q.popleft()
print(q)
q.popleft()
print(q)
q.popleft()
if not q:
    print("nothing left")