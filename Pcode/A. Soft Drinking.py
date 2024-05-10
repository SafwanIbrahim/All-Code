n,k,l,c,d,p,nl,np=map(int,input().split())

dwehave=k*l
lwehave =c*d
swehave = p

dwecan=dwehave//nl

lwecan=lwehave/1

swecan=swehave//np



mini=min(dwecan,lwecan,swecan)
print(int(mini//n))