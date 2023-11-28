( Created by GrblGru )
( 28.11.2023 13:52:53 )



( Additional commands from settings )
G1 F200 Z25
G4 P2

( Job: boardoutline  -> None 3.175mm )
( ------------------------------- )

( Job mode = 0, CUT )
( Type of tool = 0, SPINDLE )

( TransformationTyp = NONE )
( Plano de segurança = 10 )
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
F2000 G90 z10.000
F2000 x80.000 y0.000 z10.000
F2000 x80.000 y0.000 z0.000

( Loop )
G90 F500
x80.000 y0.000 z-1.800
F500
x43.188 y0.000 z-1.800
x43.088 y0.000 z-0.800
x36.913 y0.000 z-0.800
F500
x36.813 y0.000 z-1.800
F500
x0.000 y0.000 z-1.800
x0.000 y-23.313 z-1.800
x0.000 y-23.413 z-0.800
x0.000 y-29.588 z-0.800
F500
x0.000 y-29.688 z-1.800
F500
x0.000 y-53.000 z-1.800
x36.813 y-53.000 z-1.800
x36.913 y-53.000 z-0.800
x43.088 y-53.000 z-0.800
F500
x43.188 y-53.000 z-1.800
F500
x80.000 y-53.000 z-1.800
x80.000 y-29.688 z-1.800
x80.000 y-29.588 z-0.800
x80.000 y-23.413 z-0.800
F500
x80.000 y-23.313 z-1.800
F500
x80.000 y0.000 z-1.800

( Lift to 10.000 )
F2000 z10.000

( Program end, back to origin )
G90 F2000 z10.000

( Spindle off )
M5
F2000 x0.000 y0.000 z10.000
