unsigned char swap_bits(unsigned char octet)
{
	return((octet >> 4 | octet << 4));
}
/*Esta función intercambia las mitades de un byte:
octet >> 4: desplaza los 4 bits más altos hacia la derecha → se convierten en los 4 bits más bajos.
octet << 4: desplaza los 4 bits más bajos hacia la izquierda → se convierten en los 4 bits más altos.
El operador | (OR bit a bit) combina ambos resultados en un solo byte con las mitades intercambiadas*/
