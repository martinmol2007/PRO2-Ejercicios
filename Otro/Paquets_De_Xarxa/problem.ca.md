# Paquets de Xarxa

Escriu un programa que simuli un rúter de xarxa (*router*). El rúter té
un *buffer* intern implementat amb una cua de prioritat de capacitat
$N$. Cada paquet de xarxa té tres camps: una prioritat (enter), una
adreça IP d'origen (string) i una adreça IP de destí (string).
Representem un paquet amb l'struct següent:

    struct Paquet {
        int prioritat;
        string origen, desti;
    };

Per poder fer servir el `pro2::Heap` amb l'struct `Paquet`, cal definir
l'operador `>` de la manera següent:

    bool operator>(const Paquet& p1, const Paquet& p2) {
        return p1.prioritat > p2.prioritat;
    }

El rúter funciona de la manera següent: mentre la cua de prioritat té
menys de $N$ elements, simplement afegeix els paquets entrants a la cua.
Quan la cua està plena (té $N$ elements), abans d'afegir el nou paquet,
el rúter treu el paquet amb la prioritat més alta, l'escriu pel canal de
sortida, i després afegeix el nou paquet a la cua. Quan ja no hi ha més
paquets d'entrada, el rúter buida la cua de prioritat escrivint els
paquets restants en ordre de prioritat (de més alta a més baixa).

## Entrada

La primera línia conté un enter $N$ (la capacitat del buffer de el
rúter). A continuació, una seqüència de paquets, un per línia, cadascun
amb tres camps: prioritat (enter), adreça IP d'origen (string) i adreça
IP de destí (string). Les adreces IP tenen el format `aaa.bbb.ccc.ddd`.

## Sortida

Cada paquet que el rúter envia es mostra en una línia amb el format:
prioritat, espai, adreça d'origen, espai, adreça de destí.

## Observació

Envia `program.cc` incloent `"heap.hh"`. Descarrega els fitxers públics
(icona del gatet).

## Informació del problema

Autoria: Pau Fernández

Generació: 2026-03-05T21:05:12.185Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
