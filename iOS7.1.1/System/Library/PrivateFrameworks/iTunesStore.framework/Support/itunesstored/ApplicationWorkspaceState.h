/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 5:50:38 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreServices/SSSQLiteEntity.h>

@interface ApplicationWorkspaceState : SSSQLiteEntity
+(BOOL)incompleteNotificationForFailedDownload:(long long)arg1 bundleIdentifier:(id)arg2 ;
+(BOOL)incompleteNotificationForInstallingDownload:(long long)arg1 bundleIdentifier:(id)arg2 ;
+(BOOL)incompleteNotificationForCanceledDownload:(long long)arg1 bundleIdentifier:(id)arg2 ;
+(BOOL)_completeNotification:(id)arg1 bundleIdentifier:(id)arg2 ;
+(BOOL)_incompleteNotification:(id)arg1 forDownload:(long long)arg2 bundleIdentifier:(id)arg3 ;
+(BOOL)completeNotificationForCanceledBundleIdentifier:(id)arg1 ;
+(BOOL)completeNotificationForFailedBundleIdentifier:(id)arg1 ;
+(BOOL)completeNotificationForInstallingBundleIdentifier:(id)arg1 ;
+(BOOL)deleteIncompleteNotification:(id)arg1 forBundleIdentifier:(id)arg2 ;
+(id)databaseTable;
@end
