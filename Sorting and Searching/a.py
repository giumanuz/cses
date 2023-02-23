from heapq import heapify, heappush, heappop

n, t = map(int, input().split())
a = list(map(int, input().split()))

ans = n

low = 1
high = n
while low <= high:
    workers = (low + high) // 2

    heap = a[:workers]
    heapify(heap)
    index = workers
    while len(heap) > 1:
        mini = heappop(heap)
        if index < n:
            heappush(heap, mini + a[index])
            index += 1

    if heappop(heap) <= t:
        ans = workers
        high = workers - 1
    else:
        low = workers + 1

print(ans)