( Created by GrblGru )
( 17.04.2024 17:34:13 )



( Additional commands from settings )
G1 F200 Z25
G4 P2

( Job: Job Percurso da ferramenta 33 -> None 3.175mm )
( ------------------------------- )

( Job mode = 0, CUT )
( Type of tool = 0, SPINDLE )

( TransformationTyp = NONE )
( Plano de segurança = 5 )
( Soma da profundidade = 1.7 )
( Profundidade por passo = 1.7 )
( Rampa de Mergulho = 0 )
( Tamanho de partição = 2 )
( Avanço de corte = 50 )
( Avanço rápido = 2000 )
( Avanço de mergulho = 500 )
( Tool = Endmill 3.175mm )
( Tool diameter = 3.175 )



G1 G90 F100

( Percurso da ferramenta 33 )
( ------------------------- )

( Spindle on )
M3
S500

( Current depth = -1.700 )

( MoveToStartpoint2 )
F2000 G90 z5.000
F2000 x0.015 y0.000 z5.000
F2000 x0.015 y0.000 z0.000

( Loop )
G90 F500
x0.015 y0.000 z-1.700
F50
x0.015 y0.000 z-1.700
x0.000 y-46.736 z-1.700
x0.015 y-46.736 z-1.700
x80.015 y-46.736 z-1.700
x80.015 y0.000 z-1.700
x0.015 y0.000 z-1.700

( Lift to 5.000 )
F2000 z5.000

( Program end, back to origin )
G90 F2000 z5.000

( Spindle off )
M5
F2000 x0.000 y0.000 z5.000
