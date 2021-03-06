/*----------------------------------------------------------------------------
			Este c�digo pertence a um projeto pessoal,
			baseado no c�digo aberto da Unreal Engine,
			com o intuito de aprendizado. Apenas as
			estrutura b�sica das classes s�o semelhantes
			e as vezes iguais, j� os corpos de m�todos
			s�o implementa��es pr�prias do desenvolvedor
			deste projeto.
			
			Saiba mais:
			https://github.com/felipedec/LeafEngine
----------------------------------------------------------------------------*/

#pragma once

#include "CoreTypes.h"


class FTranslationMatrix : public FMatrix
{
public:

	FORCEINLINE FTranslationMatrix(const FVector& Delta)
		: FTranslationMatrix(Delta.X, Delta.Y, Delta.Z)
	{}

	FORCEINLINE FTranslationMatrix(const float X, const float Y, const float Z)
		: FMatrix
	(
		FVector4(1.0f, 0.0f, 0.0f, 0.0f),
		FVector4(0.0f, 1.0f, 0.0f, 0.0f),
		FVector4(0.0f, 0.0f, 1.0f, 0.0f),
		FVector4(X, Y, Z, 1.0f)
	) { }

public:

	/** F�brica de matr�zes */
	static CORE_API FMatrix Make(const FVector& Delta)
	{
		return FTranslationMatrix(Delta);
	}

	/** F�brica de matr�zes */
	static CORE_API FMatrix Make(const float X, const float Y, const float Z)
	{
		return FTranslationMatrix(X, Y, Z);
	}
};
  