# Esborrar les posicions parelles d'una llista

Afegeix un **mètode públic** a la classe `List<T>` que esborri els nodes
que ocupen una posició **parella**: el 2n, el 4t, el 6è, etc. (la primera
posició és la 1). Els nodes que ocupen posició senar es mantenen, en el
mateix ordre relatiu.

La capçalera és la següent:

    /**
     * @brief Elimina de la llista els nodes que ocupen una posició
     *        parella, és a dir, el 2n, el 4t, el 6è, etc. (la primera
     *        posició és la 1). Es manté l'ordre relatiu dels nodes que
     *        no s'esborren.
     *
     * @post  La llista conté només els nodes que originalment ocupaven
     *        una posició senar.
     */
    void remove_even_positions();

## Observació

Per poder avaluar l'ús de punters, *no feu servir altres mètodes, ni
públics ni privats,* de la classe per resoldre el problema, accediu
sempre als membres privats directament.

Els fitxers públics (icona del gatet) contenen:

  ---------- ------------------------------------------------------
  `list.hh`  la classe `List<T>`
  `main.cc`  el programa principal (gestiona l'entrada i sortida)
  `Makefile` per compilar amb `make` al terminal
  `.vscode`  per compilar i debuggar amb F5
  ---------- ------------------------------------------------------

Per entregar només cal **enviar el fitxer `list.hh` modificat.**

## Entrada

*De l'entrada se n'encarrega ja el programa principal.* L'entrada està
formada per diferents casos seguits. Cada cas és una línia amb una llista
en el format `{e1, e2, ..., eN}`.

## Sortida

*De la sortida també se n'encarrega el programa principal.* La sortida
mostra, per a cada cas, la llista un cop esborrades les posicions
parelles. Els resultats dels diferents casos se separen amb una línia
buida.

## Informació del problema

Exercici de pràctica generat amb el format dels problemes de PRO2
(Jutge.org). No és un problema oficial del Jutge.
