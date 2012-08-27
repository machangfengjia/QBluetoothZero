/*
 * QBtSerialPortServer_stub.cpp
 *
 *  
 *      Author: Ftylitakis Nikolaos
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "../QBtSerialPortServer_win32.h"

QBT_NAMESPACE_BEGIN

QBtSerialPortServerPrivate::QBtSerialPortServerPrivate(QBtSerialPortServer* publicClass) : 
		p_ptr(publicClass)
{	
}

QBtSerialPortServerPrivate::~QBtSerialPortServerPrivate()
{
	emit p_ptr->error(QBtSerialPortServer::ErrorNotSupported);
}

void QBtSerialPortServerPrivate::StartListener()
{
	emit p_ptr->error(QBtSerialPortServer::ErrorNotSupported);
}

void QBtSerialPortServerPrivate::StopListener()
{
	emit p_ptr->error(QBtSerialPortServer::ErrorNotSupported);
}

void QBtSerialPortServerPrivate::SendData(const QString /*data*/)
{
	emit p_ptr->error(QBtSerialPortServer::ErrorNotSupported);
}

QBT_NAMESPACE_END