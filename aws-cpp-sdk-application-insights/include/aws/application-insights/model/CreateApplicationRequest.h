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

#pragma once
#include <aws/application-insights/ApplicationInsights_EXPORTS.h>
#include <aws/application-insights/ApplicationInsightsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ApplicationInsights
{
namespace Model
{

  /**
   */
  class AWS_APPLICATIONINSIGHTS_API CreateApplicationRequest : public ApplicationInsightsRequest
  {
  public:
    CreateApplicationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateApplication"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the resource group.</p>
     */
    inline const Aws::String& GetResourceGroupName() const{ return m_resourceGroupName; }

    /**
     * <p>The name of the resource group.</p>
     */
    inline bool ResourceGroupNameHasBeenSet() const { return m_resourceGroupNameHasBeenSet; }

    /**
     * <p>The name of the resource group.</p>
     */
    inline void SetResourceGroupName(const Aws::String& value) { m_resourceGroupNameHasBeenSet = true; m_resourceGroupName = value; }

    /**
     * <p>The name of the resource group.</p>
     */
    inline void SetResourceGroupName(Aws::String&& value) { m_resourceGroupNameHasBeenSet = true; m_resourceGroupName = std::move(value); }

    /**
     * <p>The name of the resource group.</p>
     */
    inline void SetResourceGroupName(const char* value) { m_resourceGroupNameHasBeenSet = true; m_resourceGroupName.assign(value); }

    /**
     * <p>The name of the resource group.</p>
     */
    inline CreateApplicationRequest& WithResourceGroupName(const Aws::String& value) { SetResourceGroupName(value); return *this;}

    /**
     * <p>The name of the resource group.</p>
     */
    inline CreateApplicationRequest& WithResourceGroupName(Aws::String&& value) { SetResourceGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the resource group.</p>
     */
    inline CreateApplicationRequest& WithResourceGroupName(const char* value) { SetResourceGroupName(value); return *this;}


    /**
     * <p> When set to <code>true</code>, creates opsItems for any problems detected on
     * an application. </p>
     */
    inline bool GetOpsCenterEnabled() const{ return m_opsCenterEnabled; }

    /**
     * <p> When set to <code>true</code>, creates opsItems for any problems detected on
     * an application. </p>
     */
    inline bool OpsCenterEnabledHasBeenSet() const { return m_opsCenterEnabledHasBeenSet; }

    /**
     * <p> When set to <code>true</code>, creates opsItems for any problems detected on
     * an application. </p>
     */
    inline void SetOpsCenterEnabled(bool value) { m_opsCenterEnabledHasBeenSet = true; m_opsCenterEnabled = value; }

    /**
     * <p> When set to <code>true</code>, creates opsItems for any problems detected on
     * an application. </p>
     */
    inline CreateApplicationRequest& WithOpsCenterEnabled(bool value) { SetOpsCenterEnabled(value); return *this;}


    /**
     * <p> The SNS topic provided to Application Insights that is associated to the
     * created opsItem. Allows you to receive notifications for updates to the opsItem.
     * </p>
     */
    inline const Aws::String& GetOpsItemSNSTopicArn() const{ return m_opsItemSNSTopicArn; }

    /**
     * <p> The SNS topic provided to Application Insights that is associated to the
     * created opsItem. Allows you to receive notifications for updates to the opsItem.
     * </p>
     */
    inline bool OpsItemSNSTopicArnHasBeenSet() const { return m_opsItemSNSTopicArnHasBeenSet; }

    /**
     * <p> The SNS topic provided to Application Insights that is associated to the
     * created opsItem. Allows you to receive notifications for updates to the opsItem.
     * </p>
     */
    inline void SetOpsItemSNSTopicArn(const Aws::String& value) { m_opsItemSNSTopicArnHasBeenSet = true; m_opsItemSNSTopicArn = value; }

    /**
     * <p> The SNS topic provided to Application Insights that is associated to the
     * created opsItem. Allows you to receive notifications for updates to the opsItem.
     * </p>
     */
    inline void SetOpsItemSNSTopicArn(Aws::String&& value) { m_opsItemSNSTopicArnHasBeenSet = true; m_opsItemSNSTopicArn = std::move(value); }

    /**
     * <p> The SNS topic provided to Application Insights that is associated to the
     * created opsItem. Allows you to receive notifications for updates to the opsItem.
     * </p>
     */
    inline void SetOpsItemSNSTopicArn(const char* value) { m_opsItemSNSTopicArnHasBeenSet = true; m_opsItemSNSTopicArn.assign(value); }

    /**
     * <p> The SNS topic provided to Application Insights that is associated to the
     * created opsItem. Allows you to receive notifications for updates to the opsItem.
     * </p>
     */
    inline CreateApplicationRequest& WithOpsItemSNSTopicArn(const Aws::String& value) { SetOpsItemSNSTopicArn(value); return *this;}

    /**
     * <p> The SNS topic provided to Application Insights that is associated to the
     * created opsItem. Allows you to receive notifications for updates to the opsItem.
     * </p>
     */
    inline CreateApplicationRequest& WithOpsItemSNSTopicArn(Aws::String&& value) { SetOpsItemSNSTopicArn(std::move(value)); return *this;}

    /**
     * <p> The SNS topic provided to Application Insights that is associated to the
     * created opsItem. Allows you to receive notifications for updates to the opsItem.
     * </p>
     */
    inline CreateApplicationRequest& WithOpsItemSNSTopicArn(const char* value) { SetOpsItemSNSTopicArn(value); return *this;}

  private:

    Aws::String m_resourceGroupName;
    bool m_resourceGroupNameHasBeenSet;

    bool m_opsCenterEnabled;
    bool m_opsCenterEnabledHasBeenSet;

    Aws::String m_opsItemSNSTopicArn;
    bool m_opsItemSNSTopicArnHasBeenSet;
  };

} // namespace Model
} // namespace ApplicationInsights
} // namespace Aws
