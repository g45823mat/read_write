program hello
  integer rr,pp
  open(10,file='a.txt',status='old')
  open(11,file='b2.txt',status='replace')

  read (10,*) rr,pp
  read (10,*) rr,pp
  read (10,*) rr,pp
  write (11,*) rr,pp*2
  read (10,*) rr,pp
  write (11,*) rr,pp*2


  close(10)
  close(11)
end program hello
