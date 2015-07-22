/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:16:55 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/DataClassMigrators/MobileSafari.migrator/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DataMigration/DataClassMigrator.h>

@interface MobileSafariDataMigrator : DataClassMigrator {

	unsigned long long _migrationLevel;

}
-(void)_migrateFileFromPath:(id)arg1 toPath:(id)arg2 ;
-(void)_migrateLegacyWebKitWebsiteData;
-(BOOL)_symlinkCookieStorage;
-(void)_migrateLegacyWebKitPreferences;
-(void)_removeBookmarksPanelStatePreferences;
-(BOOL)_migrateAutofillPasswordAndPreferences;
-(BOOL)_migrateAuthenticationCredentials;
-(void)_updateCloudTabsEnabledDefaultFromAccounts;
-(void)_clearReadingListFetcherPendingChanges;
-(void)_removeAutocompleteOffBypassSettings;
-(void)_migrateWebClipIconFilesToClassD;
-(void)_migrateAutofillContactInfo;
-(void)_removeObsoleteDirectories;
-(void)_migrateLibraryFilesIntoContainer;
-(void)_migrateCloudTabsMetadataOutOfContainer;
-(BOOL)_migrateSearchSettings;
-(id)dataClassName;
-(id)init;
-(BOOL)performMigration;
@end
