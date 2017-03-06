def GreedyTour(n):
   tour[0] = 0
   used[0] = true
   for i in range(1,n):
      best = -1
      for j in range(0,n):
         if not used[j] and (best is -1 or dist(tour[i-1],j) < dist(tour[i-1],best))
            best = j
      tour[i] = best
      used[best] = true
   return tour
