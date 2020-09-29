system 1
mov 0180,r0
out r0,p0
mov 0240,r1
out r1,p1
mov 04E0,r2
out r2,p2
mov 0810,r3
out r3,p3
mov 1FF8,r0
out r0,p4
mov 1008,r1
out r1,p5
mov 1008,r2
out r2,p6
mov 1FF8,r3
out r3,p7

mov 1, r1
show:
system A
system B
system B
system A
system 6
jnz show
stop