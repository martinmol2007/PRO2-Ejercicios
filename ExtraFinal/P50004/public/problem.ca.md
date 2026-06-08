# Eliminar duplicats consecutius d'una cua

Afegeix un **mètode públic** a la classe `Queue<T>` que elimini els
duplicats consecutius: per a cada seqüència de nodes consecutius amb el
mateix valor, només se'n manté el primer i s'esborren la resta.

La capçalera és la següent:

    /**
     * @brief Elimina de la cua els duplicats consecutius: per a cada
     *        seqüència de nodes consecutius amb el mateix valor només
     *        se'n manté el primer i s'esborren la resta.
     *
     * @post  La cua no conté dos nodes consecutius amb el mateix valor.
     *        L'ordre relatiu dels valors que queden no canvia.
     */
    void remove_consecutive_duplicates();

## Observació

Per poder avaluar l'ús de punters, *no feu servir altres mètodes, ni
públics ni privats,* de la classe per resoldre el problema, accediu
sempre als membres privats directament.

Recordeu que cal mantenir coherents els punters `first` i `last` i el
comptador `_size` de la cua.

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
formada per diferents casos seguits. Cada cas és una línia amb una cua en
el format `{e1, e2, ..., eN}`.

## Sortida

*De la sortida també se n'encarrega el programa principal.* La sortida
mostra la cua tal qual ha quedat després d'aplicar el mètode
`remove_consecutive_duplicates`. Els resultats dels diferents casos se
separen amb una línia buida.

## Informació del problema

Exercici de pràctica generat amb el format dels problemes de PRO2
(Jutge.org). No és un problema oficial del Jutge.
