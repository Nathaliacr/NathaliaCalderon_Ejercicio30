import numpy as np
import matplotlib.pyplot as plt


fig, a = plt.subplot(figsize=(7,7))

data = np.loadtxt("sol.dat")

d=dat.shape[1]

x = np.linspace(0.0, 1.0, d)

def anima(i):
    
    n = "{0:.2f}".format((2/d)*((i+1)*0.5))
    line.set_ydata(data[i])
    a.set_title("Tiempo")
    return line,

def init():
    a.set_xline(0,1)
    a.set_yline(-0.05,0.05)
    a.setlabel("Posición")
    a.setlabel("U")
    plt.grit(True)
    
    return line,


animacion = animation.FuncAnimation(fig, anima, init_func=init, frames=range(d*2), interval=100, blit=True)
animacion.save("animacion.gif")
    