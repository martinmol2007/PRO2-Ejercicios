# Fulles a la mateixa profunditat

Afegeix un **mètode públic** a la classe `Arbre<T>` que determini si
**totes** les fulles de l'arbre estan a la mateixa profunditat. La
profunditat de l'arrel és 1, la dels seus fills és 2, i així
successivament. Un arbre buit es considera que compleix la condició
(no té cap fulla).

La capçalera és la següent:

    /**
     * @brief Determina si totes les fulles de l'arbre estan a la mateixa
     *        profunditat. Un arbre buit es considera que compleix la
     *        condició (no té cap fulla).
     *
     * @returns `true` si totes les fulles estan a la mateixa
     *          profunditat, `false` altrament.
     */
    bool all_leaves_same_depth() const;

## Observació

Per poder avaluar l'ús de punters, *no feu servir altres mètodes, ni
públics ni privats,* de la classe per resoldre el problema, accediu
sempre als membres privats directament.

Els fitxers públics (icona del gatet) contenen:

  ----------- ------------------------------------------------------
  `Arbre.hh`  la classe `Arbre<T>`
  `main.cc`   el programa principal (gestiona l'entrada i sortida)
  `Makefile`  per compilar amb `make` al terminal
  `.vscode`   per compilar i debuggar amb F5
  ----------- ------------------------------------------------------

Per entregar només cal **enviar el fitxer `Arbre.hh` modificat.**

## Entrada

*De l'entrada se n'encarrega ja el programa principal.* L'entrada està
formada per diferents casos seguits. Cada arbre d'entrada és una línia de
números o `#`s en preordre (un `#` indica un arbre buit).

## Sortida

*De la sortida també se n'encarrega el programa principal.* La sortida
mostra `si` quan totes les fulles estan a la mateixa profunditat o `no`
altrament, cada resultat en una línia separada.

## Informació del problema

Exercici de pràctica generat amb el format dels problemes de PRO2
(Jutge.org). No és un problema oficial del Jutge.
