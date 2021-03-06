﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/events/CloudWatchEvents_EXPORTS.h>
#include <aws/events/CloudWatchEventsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CloudWatchEvents
{
namespace Model
{

  /**
   */
  class AWS_CLOUDWATCHEVENTS_API ListRulesRequest : public CloudWatchEventsRequest
  {
  public:
    ListRulesRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <zonbook> <simpara>The prefix matching the rule name.</simpara> </zonbook>
     * <xhtml> <p>The prefix matching the rule name.</p> </xhtml>
     */
    inline const Aws::String& GetNamePrefix() const{ return m_namePrefix; }

    /**
     * <zonbook> <simpara>The prefix matching the rule name.</simpara> </zonbook>
     * <xhtml> <p>The prefix matching the rule name.</p> </xhtml>
     */
    inline void SetNamePrefix(const Aws::String& value) { m_namePrefixHasBeenSet = true; m_namePrefix = value; }

    /**
     * <zonbook> <simpara>The prefix matching the rule name.</simpara> </zonbook>
     * <xhtml> <p>The prefix matching the rule name.</p> </xhtml>
     */
    inline void SetNamePrefix(Aws::String&& value) { m_namePrefixHasBeenSet = true; m_namePrefix = value; }

    /**
     * <zonbook> <simpara>The prefix matching the rule name.</simpara> </zonbook>
     * <xhtml> <p>The prefix matching the rule name.</p> </xhtml>
     */
    inline void SetNamePrefix(const char* value) { m_namePrefixHasBeenSet = true; m_namePrefix.assign(value); }

    /**
     * <zonbook> <simpara>The prefix matching the rule name.</simpara> </zonbook>
     * <xhtml> <p>The prefix matching the rule name.</p> </xhtml>
     */
    inline ListRulesRequest& WithNamePrefix(const Aws::String& value) { SetNamePrefix(value); return *this;}

    /**
     * <zonbook> <simpara>The prefix matching the rule name.</simpara> </zonbook>
     * <xhtml> <p>The prefix matching the rule name.</p> </xhtml>
     */
    inline ListRulesRequest& WithNamePrefix(Aws::String&& value) { SetNamePrefix(value); return *this;}

    /**
     * <zonbook> <simpara>The prefix matching the rule name.</simpara> </zonbook>
     * <xhtml> <p>The prefix matching the rule name.</p> </xhtml>
     */
    inline ListRulesRequest& WithNamePrefix(const char* value) { SetNamePrefix(value); return *this;}

    /**
     * <zonbook> <simpara>The token returned by a previous call to retrieve the next
     * set of results.</simpara> </zonbook> <xhtml> <p>The token returned by a previous
     * call to retrieve the next set of results.</p> </xhtml>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <zonbook> <simpara>The token returned by a previous call to retrieve the next
     * set of results.</simpara> </zonbook> <xhtml> <p>The token returned by a previous
     * call to retrieve the next set of results.</p> </xhtml>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <zonbook> <simpara>The token returned by a previous call to retrieve the next
     * set of results.</simpara> </zonbook> <xhtml> <p>The token returned by a previous
     * call to retrieve the next set of results.</p> </xhtml>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <zonbook> <simpara>The token returned by a previous call to retrieve the next
     * set of results.</simpara> </zonbook> <xhtml> <p>The token returned by a previous
     * call to retrieve the next set of results.</p> </xhtml>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <zonbook> <simpara>The token returned by a previous call to retrieve the next
     * set of results.</simpara> </zonbook> <xhtml> <p>The token returned by a previous
     * call to retrieve the next set of results.</p> </xhtml>
     */
    inline ListRulesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <zonbook> <simpara>The token returned by a previous call to retrieve the next
     * set of results.</simpara> </zonbook> <xhtml> <p>The token returned by a previous
     * call to retrieve the next set of results.</p> </xhtml>
     */
    inline ListRulesRequest& WithNextToken(Aws::String&& value) { SetNextToken(value); return *this;}

    /**
     * <zonbook> <simpara>The token returned by a previous call to retrieve the next
     * set of results.</simpara> </zonbook> <xhtml> <p>The token returned by a previous
     * call to retrieve the next set of results.</p> </xhtml>
     */
    inline ListRulesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

    /**
     * <zonbook> <simpara>The maximum number of results to return.</simpara> </zonbook>
     * <xhtml> <p>The maximum number of results to return.</p> </xhtml>
     */
    inline int GetLimit() const{ return m_limit; }

    /**
     * <zonbook> <simpara>The maximum number of results to return.</simpara> </zonbook>
     * <xhtml> <p>The maximum number of results to return.</p> </xhtml>
     */
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }

    /**
     * <zonbook> <simpara>The maximum number of results to return.</simpara> </zonbook>
     * <xhtml> <p>The maximum number of results to return.</p> </xhtml>
     */
    inline ListRulesRequest& WithLimit(int value) { SetLimit(value); return *this;}

  private:
    Aws::String m_namePrefix;
    bool m_namePrefixHasBeenSet;
    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
    int m_limit;
    bool m_limitHasBeenSet;
  };

} // namespace Model
} // namespace CloudWatchEvents
} // namespace Aws
