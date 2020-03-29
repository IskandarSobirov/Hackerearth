lambda c,m:list(map(sum,zip(*[[i[0]*j/sum(m),i[1]*j/sum(m)]for i,j in zip(*([c,m]))])))
