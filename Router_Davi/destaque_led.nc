( Created by GrblGru )
( 24.04.2024 14:11:09 )



( Additional commands from settings )
G1 F200 Z25
G4 P2

( Job: boardoutline  -> None 3.175mm )
( ------------------------------- )

( Job mode = 0, CUT )
( Type of tool = 0, SPINDLE )

( TransformationTyp = NONE )
( Plano de segurança = 5 )
( Soma da profundidade = 1.7 )
( Profundidade por passo = 1.7 )
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

( Current depth = -1.700 )

( MoveToStartpoint2 )
F2000 G90 z5.000
F2000 x0.000 y-5.502 z5.000
F2000 x0.000 y-5.502 z0.000

( Loop )
G90 F500
x0.000 y-5.502 z-1.700
F500
x0.000 y-23.241 z-1.700
x12.793 y-23.241 z-1.700
x12.893 y-23.241 z-0.700
x19.068 y-23.241 z-0.700
F500
x19.168 y-23.241 z-1.700
F500
x31.989 y-23.241 z-1.700
x31.989 y0.000 z-1.700
x19.182 y0.000 z-1.700
x19.082 y0.000 z-0.700
x12.907 y0.000 z-0.700
F500
x12.807 y0.000 z-1.700
F500
x0.000 y0.000 z-1.700
x0.000 y-5.502 z-1.700

( Lift to 5.000 )
F2000 z5.000

( Program end, back to origin )
G90 F2000 z5.000

( Spindle off )
M5
F2000 x0.000 y0.000 z5.000
