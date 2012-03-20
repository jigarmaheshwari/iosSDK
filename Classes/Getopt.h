/**
 *  Getopt.h
 *  Mercury_iOS
 *
 *  Created by Julien Salvi on 9/12/11.
 *  Copyright 2011 Mogreet Inc. All rights reserved.
 *
 *  This file is part of Mercury.
 *
 *  Mercury is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  Mercury is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with Mercury. If not, see <http://www.gnu.org/licenses/>. 
 */

#import <Foundation/Foundation.h>
#import "TouchXML.h" 

/**
 * The Getopt object contains the response from a {@link Mercury#getopt} request to the MoMS API.
 */
@interface Getopt : NSObject {
	
@private NSString *message;
@private NSString *responseStatus;
@private int responseCode;
@private NSMutableArray *campaignID;
@private NSMutableArray *campaignStatus;
@private NSMutableArray *campaignStatusCode;

}

/**
 * Initializes a new Getopt response object.
 * @param urlGetopt URL for calling requests from Mogreet API.
 */
- (void) initGetopt:(NSString*)urlGetopt;

/**
 * Checks if the response code is 1.
 * @return YES if the response code is 1, NO if it is not
 */
- (BOOL) responseIsValid;

/**
 * @return The Message.
 */
- (NSString*) getMessage;

/**
 * @return The response Status.
 */
- (NSString*) getResponseStatus;

/**
 * @return The response Code.
 */
- (int) getResponseCode;

/**
 * Gets the campaign IDs.
 * @return An NSMutableArray that contains all the campaigns ID.
 */
- (NSMutableArray*) getCampaignsIdList;

/**
 * Gets the campaign status.
 * @return An NSMutableArray that contains all the campaigns status.
 */
- (NSMutableArray*) getCampaignStatusList;

/**
 * Gets the campaign status codes.
 * @return An NSMutableArray that contains all the campaign status codes.
 */
- (NSMutableArray*) getCampaignStatusCodeList;

/**
 * Gets a campaign status code.
 * @param campaignId The campaign ID.
 * @return The campaign status code of the specified campaign.
 */
- (int) getCampaignStatusCode: (NSString*)campaignId;

/**
 * Gets a campaign status.
 * @param campaignId The campaign ID.
 * @return The campaign status of the specified campaign.
 */
- (NSString*) getCampaignStatus: (NSString*)campaignId;

@end
