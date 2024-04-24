( Created by GrblGru )
( 24.04.2024 14:05:11 )



( Additional commands from settings )
G1 F200 Z25
G4 P2

( Job: Job Percurso da ferramenta 10 + 9 -> Bohrung 3.175mm )
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
F2000 x2.896 y-4.572 z1.000
F100 x2.896 y-4.572 z-2.500

F2000 x2.896 y-4.572 z1.000

( MoveToStartpoint )
F2000 G90 z1.000
F2000 x5.456 y-4.572 z1.000
F100 x5.456 y-4.572 z-2.500

F2000 x5.456 y-4.572 z1.000

( MoveToStartpoint )
F2000 G90 z1.000
F2000 x5.583 y-10.922 z1.000
F100 x5.583 y-10.922 z-2.500

F2000 x5.583 y-10.922 z1.000

( MoveToStartpoint )
F2000 G90 z1.000
F2000 x3.023 y-10.922 z1.000
F100 x3.023 y-10.922 z-2.500

F2000 x3.023 y-10.922 z1.000

( MoveToStartpoint )
F2000 G90 z1.000
F2000 x3.023 y-17.653 z1.000
F100 x3.023 y-17.653 z-2.500

F2000 x3.023 y-17.653 z1.000

( MoveToStartpoint )
F2000 G90 z1.000
F2000 x5.583 y-17.653 z1.000
F100 x5.583 y-17.653 z-2.500

F2000 x5.583 y-17.653 z1.000

( MoveToStartpoint )
F2000 G90 z1.000
F2000 x9.412 y-17.780 z1.000
F100 x9.412 y-17.780 z-2.500

F2000 x9.412 y-17.780 z1.000

( MoveToStartpoint )
F2000 G90 z1.000
F2000 x28.912 y-17.780 z1.000
F100 x28.912 y-17.780 z-2.500

F2000 x28.912 y-17.780 z1.000

( MoveToStartpoint )
F2000 G90 z1.000
F2000 x28.814 y-11.684 z1.000
F100 x28.814 y-11.684 z-2.500

F2000 x28.814 y-11.684 z1.000

( MoveToStartpoint )
F2000 G90 z1.000
F2000 x28.814 y-9.144 z1.000
F100 x28.814 y-9.144 z-2.500

F2000 x28.814 y-9.144 z1.000
F2000 z1.000

( Program end, back to origin )
G90 F2000 z1.000

( Spindle off )
M5
F2000 x0.000 y0.000 z1.000
