( Created by GrblGru )
( 27.11.2023 14:00:30 )



( Additional commands from settings )
G1 F200 Z25
G4 P2

( Job: boardoutline  -> None 3.175mm )
( ------------------------------- )

( Job mode = 0, CUT )
( Type of tool = 0, SPINDLE )

( TransformationTyp = NONE )
( Plano de segurança = 5 )
( Soma da profundidade = 1.8 )
( Profundidade por passo = 1.8 )
( Rampa de Mergulho = 0 )
( Aba de rampa = 0 )
( Tamanho de partição = 2 )
( Avanço de corte = 500 )
( Avanço rápido = 2000 )
( Avanço de mergulho = 500 )
( Tool = Endmill 3.175mm )
( Tool diameter = 3.175 )



G1 G90 F100

( Percurso da ferramenta 1 )
( ------------------------- )

( Spindle on )
M3
S500

( Current depth = -1.800 )

( MoveToStartpoint2 )
F2000 G90 z5.000
F2000 x0.000 y-6.510 z5.000
F2000 x0.000 y-6.510 z0.000

( Loop )
G90 F500
x0.000 y-6.510 z-1.800
F500
x0.000 y-7.239 z-1.800
x14.927 y-7.239 z-1.800
x15.027 y-7.239 z-0.800
x21.202 y-7.239 z-0.800
F500
x21.302 y-7.239 z-1.800
F500
x36.228 y-7.239 z-1.800
x36.228 y0.000 z-1.800
x21.302 y0.000 z-1.800
x21.202 y0.000 z-0.800
x15.027 y0.000 z-0.800
F500
x14.927 y0.000 z-1.800
F500
x0.000 y0.000 z-1.800
x0.000 y-6.510 z-1.800

( Lift to 5.000 )
F2000 z5.000

( Program end, back to origin )
G90 F2000 z5.000

( Spindle off )
M5
F2000 x0.000 y0.000 z5.000
