//
//  UtilsUrls.h
//  Owncloud iOs Client
//
//  Created by Javier Gonzalez on 16/10/14.
//

/*
 Copyright (C) 2014, ownCloud, Inc.
 This code is covered by the GNU Public License Version 3.
 For distribution utilizing Apple mechanisms please see https://owncloud.org/contribute/iOS-license-exception/
 You should have received a copy of this license
 along with this program. If not, see <http://www.gnu.org/licenses/gpl-3.0.en.html>.
 */

#import <Foundation/Foundation.h>

@interface UtilsUrls : NSObject

+ (NSString *) getOwnCloudFilePath;
+ (NSString *) getBundleOfSecurityGroup;
+ (NSString *) bundleSeedID;
+ (NSString *) getFullBundleSecurityGroup;

//Method to skip a file to a iCloud backup
+ (BOOL)addSkipBackupAttributeToItemAtURL:(NSURL *)URL;

@end
