// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Interfaces/ISslCertificateManager.h"

class FSslCertificateManager : public ISslCertificateManager
{
public:
	//virtual const TArray<X509*>& GetCertificateArray() override; 
	virtual void AddCertificatesToSslContext(SSL_CTX* SslContextPtr) override;

	void BuildRootCertificateArray();
	void EmptyRootCertificateArray();

protected:
	TArray<X509*> RootCertificateArray;
};