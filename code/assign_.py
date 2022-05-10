import matplotlib.pyplot as plt

t1=[[1,1], [10,1], [8.17, 4.55]]
t2=[[10,1], [13,1], [8.17, 4.55]]
t1.append(t1[0])
t2.append(t2[0])
x, y = zip(*t1)
x1, y1 = zip(*t2)
plt.ylim(0,5)
plt.plot(x,y)
plt.plot(x1,y1)
plt.text(0.7,1,"Q        ") 
plt.annotate("S",[10,0.7])
plt.annotate("R",[13,1])
plt.annotate("P",[8.17,4.55])
plt.savefig('fig1.png')
