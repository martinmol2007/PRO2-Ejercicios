# Alçada d'un arbre general

Afegeix un **mètode públic** a la classe `ArbreGen<T>` que calculi
l'alçada de l'arbre. Un arbre buit té alçada 0; un arbre format només per
l'arrel té alçada 1; en general, l'alçada és el nombre de nivells del
camí més llarg des de l'arrel fins a una fulla.

La capçalera és la següent:

    /**
     * @brief Calcula l'alçada de l'arbre general. Un arbre buit té alçada
     * 0; un arbre amb només l'arrel té alçada 1.
     *
     * @returns l'alçada del p.i.
     */
    int height() const;

## Observació

Per poder avaluar l'ús de punters, *no feu servir altres mètodes, ni
públics ni privats,* de la classe per resoldre el problema, accediu
sempre als membres privats directament.

Recordeu que un arbre general no té fills buits.

Els fitxers públics (icona del gatet) contenen:

  --------------- ------------------------------------------------------
  `ArbreG.hh`     la classe `ArbreGen<T>`
  `ArbreG-io.hh`  entrada/sortida per `ArbreGen<T>`
  `main.cc`       el programa principal (gestiona l'entrada i sortida)
  `Makefile`      per compilar amb `make` al terminal
  `.vscode`       per compilar i debuggar amb F5
  --------------- ------------------------------------------------------

Per entregar només cal **enviar el fitxer `ArbreG.hh` modificat.**

## Entrada

*De l'entrada se n'encarrega ja el programa principal.* L'entrada comença
amb un nombre `n` que indica quants casos hi ha. Després hi ha els `n`
arbres generals en el format gràfic típic de la classe `Tree<T>` de PRO2,
separats per una línia buida.

## Sortida

*De la sortida també se n'encarrega el programa principal.* Per a cada
arbre es mostra un enter: la seva alçada, un resultat per línia.

## Informació del problema

Exercici de pràctica generat amb el format dels problemes de PRO2
(Jutge.org). No és un problema oficial del Jutge.
