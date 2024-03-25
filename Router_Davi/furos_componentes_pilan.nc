( Created by GrblGru )
( 25.03.2024 14:07:30 )



( Additional commands from settings )
G1 F200 Z25
G4 P2

( Job: Job Percurso da ferramenta 31 + 15 -> Bohrung 3.175mm )
( ------------------------------- )

( Job mode = 2, DRILL )
( Type of tool = 0, SPINDLE )

( Plano de segurança = 1 )
( Soma da profundidade = 2.5 )
( Profundidade por passo = 2.5 )
( Rampa de Mergulho = 0 )
( Tamanho de partição = 2 )
( Avanço de corte = 800 )
( Avanço rápido = 2000 )
( Avanço de mergulho = 100 )
( Tool = Drill bit 1mm )
( Tool diameter = 1 )



G1 G90 F100

( Spindle on )
M3
S1000

( MoveToStartpoint )
F2000 G90 z1.000
F2000 x4.747 y-6.218 z1.000
F100 x4.747 y-6.218 z-2.500

F2000 x4.747 y-6.218 z1.000

( MoveToStartpoint )
F2000 G90 z1.000
F2000 x4.778 y-10.790 z1.000
F100 x4.778 y-10.790 z-2.500

F2000 x4.778 y-10.790 z1.000

( MoveToStartpoint )
F2000 G90 z1.000
F2000 x4.778 y-15.489 z1.000
F100 x4.778 y-15.489 z-2.500

F2000 x4.778 y-15.489 z1.000

( MoveToStartpoint )
F2000 G90 z1.000
F2000 x14.938 y-15.489 z1.000
F100 x14.938 y-15.489 z-2.500

F2000 x14.938 y-15.489 z1.000

( MoveToStartpoint )
F2000 G90 z1.000
F2000 x14.938 y-10.790 z1.000
F100 x14.938 y-10.790 z-2.500

F2000 x14.938 y-10.790 z1.000

( MoveToStartpoint )
F2000 G90 z1.000
F2000 x14.907 y-6.218 z1.000
F100 x14.907 y-6.218 z-2.500

F2000 x14.907 y-6.218 z1.000

( MoveToStartpoint )
F2000 G90 z1.000
F2000 x20.653 y-6.853 z1.000
F100 x20.653 y-6.853 z-2.500

F2000 x20.653 y-6.853 z1.000

( MoveToStartpoint )
F2000 G90 z1.000
F2000 x21.923 y-6.853 z1.000
F100 x21.923 y-6.853 z-2.500

F2000 x21.923 y-6.853 z1.000

( MoveToStartpoint )
F2000 G90 z1.000
F2000 x23.193 y-6.853 z1.000
F100 x23.193 y-6.853 z-2.500

F2000 x23.193 y-6.853 z1.000

( MoveToStartpoint )
F2000 G90 z1.000
F2000 x30.218 y-6.980 z1.000
F100 x30.218 y-6.980 z-2.500

F2000 x30.218 y-6.980 z1.000

( MoveToStartpoint )
F2000 G90 z1.000
F2000 x35.218 y-6.980 z1.000
F100 x35.218 y-6.980 z-2.500

F2000 x35.218 y-6.980 z1.000

( MoveToStartpoint )
F2000 G90 z1.000
F2000 x35.218 y-14.473 z1.000
F100 x35.218 y-14.473 z-2.500

F2000 x35.218 y-14.473 z1.000

( MoveToStartpoint )
F2000 G90 z1.000
F2000 x30.218 y-14.473 z1.000
F100 x30.218 y-14.473 z-2.500

F2000 x30.218 y-14.473 z1.000

( MoveToStartpoint )
F2000 G90 z1.000
F2000 x23.193 y-14.473 z1.000
F100 x23.193 y-14.473 z-2.500

F2000 x23.193 y-14.473 z1.000

( MoveToStartpoint )
F2000 G90 z1.000
F2000 x21.923 y-14.473 z1.000
F100 x21.923 y-14.473 z-2.500

F2000 x21.923 y-14.473 z1.000

( MoveToStartpoint )
F2000 G90 z1.000
F2000 x20.653 y-14.473 z1.000
F100 x20.653 y-14.473 z-2.500

F2000 x20.653 y-14.473 z1.000
F2000 z1.000

( Program end, back to origin )
G90 F2000 z1.000

( Spindle off )
M5
F2000 x0.000 y0.000 z1.000
