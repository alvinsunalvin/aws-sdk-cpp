﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/datasync/model/SmbMountOptions.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataSync
{
namespace Model
{

SmbMountOptions::SmbMountOptions() : 
    m_version(SmbVersion::NOT_SET),
    m_versionHasBeenSet(false)
{
}

SmbMountOptions::SmbMountOptions(JsonView jsonValue) : 
    m_version(SmbVersion::NOT_SET),
    m_versionHasBeenSet(false)
{
  *this = jsonValue;
}

SmbMountOptions& SmbMountOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Version"))
  {
    m_version = SmbVersionMapper::GetSmbVersionForName(jsonValue.GetString("Version"));

    m_versionHasBeenSet = true;
  }

  return *this;
}

JsonValue SmbMountOptions::Jsonize() const
{
  JsonValue payload;

  if(m_versionHasBeenSet)
  {
   payload.WithString("Version", SmbVersionMapper::GetNameForSmbVersion(m_version));
  }

  return payload;
}

} // namespace Model
} // namespace DataSync
} // namespace Aws
