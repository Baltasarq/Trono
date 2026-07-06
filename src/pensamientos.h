! pensamiento.h
! Pensamientos que:
! 	aparecen y desaparecen (PensamientoFugaz)
! 	van cambiando		  (PensamientoEnCadena)
! 	varían				  (PensamientosVarios)

System_file;

Include "responde";
Include "cadenas";

class Pensamiento
	with
		elPensamiento [;
			return "";
		],
		piensa [ persona ideaPensada;
			ideaPensada =  self.elPensamiento();
			
			if ( longitudCadena( ideaPensada ) == 0 ) {
				return;
			}
		
			if ( persona ofclass Personaje ) {
				persona.cabecera();
				Negrita();
				print " piensa: ";
				Normal();
			}
			else
			if ( persona ofclass string ) {
				Negrita();
				print (string) persona;
				Normal();
			}
			else
			if ( persona ofclass object ) {
				Negrita();
				print (string) persona;
				Normal();
			}
			else {
				print "^^*** ERROR *** Pensamientos.pensar(): ¿quién piensa ésto?^^";
				rfalse;
			}
		
			print "~";
			Italica();
			print (string) ideaPensada, "~^";
			Normal();
			return;
		]
;

class PensamientoFugaz
class Pensamiento
private
	mostrado false
with
	ideaFugaz "",
	elPensamiento [;
		if ( ~~self.mostrado ) {
			self.mostrado = true;			
			return self.ideaFugaz;
		}
		else return "";
	]
;

class PensamientoEnCadena
class Pensamiento
class RespondeUnaVez
with
	elPensamiento [;
		if ( self.num < self.longitud() )
			return self.dev_msg();
		else	return "";
	]
;

class PensamientosVarios
class Pensamiento
class Responde
with
	elPensamiento [;
		return self.dev_msg();
	]
;
