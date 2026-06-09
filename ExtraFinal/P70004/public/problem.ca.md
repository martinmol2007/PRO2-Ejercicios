# Comptar elements majors que un valor en una cua

Afegeix un **mètode públic** a la classe `Queue<T>` que, donat un valor
`x`, compti quants elements de la cua són **estrictament majors** que `x`.
El mètode no modifica la cua.

La capçalera és la següent:

    /**
     * @brief Compta quants elements de la cua són estrictament majors
     *        que `x`.
     *
     * @param x El valor de referència.
     * @returns el nombre d'elements del p.i. amb valor major que `x`.
     */
    int count_greater(const T& x) const;

## Observació

Per poder avaluar l'ús de punters, *no feu servir altres mètodes, ni
públics ni privats,* de la classe per resoldre el problema, accediu
sempre als membres privats directament.

Els fitxers públics (icona del gatet) contenen:

  ------------ ------------------------------------------------------
  `queue.hh`   la classe `Queue<T>`
  `main.cc`    el programa principal (gestiona l'entrada i sortida)
  `Makefile`   per compilar amb `make` al terminal
  `.vscode`    per compilar i debuggar amb F5
  ------------ ------------------------------------------------------

Per entregar només cal **enviar el fitxer `queue.hh` modificat.**

## Entrada

*De l'entrada se n'encarrega ja el programa principal.* L'entrada està
formada per diferents casos seguits. Cada cas té dues línies: la primera
conté una cua en el format `{e1, e2, ..., eN}` i la segona indica el valor
`x`. Els casos se separen amb una línia buida.

## Sortida

*De la sortida també se n'encarrega el programa principal.* Per a cada cas
es mostra un enter: quants elements de la cua són majors que `x`, un
resultat per línia.

## Informació del problema

Exercici de pràctica generat amb el format dels problemes de PRO2
(Jutge.org). No és un problema oficial del Jutge.
