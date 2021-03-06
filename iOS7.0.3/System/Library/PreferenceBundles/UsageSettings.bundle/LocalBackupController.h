/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:06:17 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PreferenceBundles/UsageSettings.bundle/UsageSettings
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSListController.h>
#import <Setup/MBManagerDelegate.h>
#import <UsageSettings/DelayedPushDelegate.h>

@class MBManager, NSMutableArray, PSSpecifier, DeviceIdentificationView, MBBackup, NSString, NSURL, SpinnerBezel, PreferencesRemoteUIDelegate, UIAlertView;

@interface LocalBackupController : PSListController <MBManagerDelegate, DelayedPushDelegate> {

	MBManager* _backupManager;
	NSMutableArray* _appSpecifiers;
	NSMutableArray* _visibleAppSpecifiers;
	BOOL _showAllPressed;
	PSSpecifier* _showAllSpecifier;
	PSSpecifier* _nextBackupSizeSpecifier;
	DeviceIdentificationView* _deviceIdentificationView;
	MBBackup* _deviceBackup;
	BOOL _doneLoadingDeviceBackup;
	NSString* _deviceName;
	NSString* _deviceIdentifier;
	NSString* _nextBackupSizeString;
	unsigned long long _backupSize;
	NSString* _additionalSpaceRequiredString;
	NSURL* _deviceImageURL;
	SpinnerBezel* _deletionBezel;
	PreferencesRemoteUIDelegate* _remoteDelegate;
	BOOL _scanInProgress;
	BOOL _shouldCancelScanOnExit;
	BOOL _manageStorageReloadNeeded;
	UIAlertView* _localBackupAlertView;

}

@property (assign,nonatomic) BOOL scanInProgress;                                       //@synthesize scanInProgress=_scanInProgress - In the implementation block
@property (assign,nonatomic) unsigned long long backupSize;                             //@synthesize backupSize=_backupSize - In the implementation block
@property (nonatomic,retain) NSString * additionalSpaceRequiredString;                  //@synthesize additionalSpaceRequiredString=_additionalSpaceRequiredString - In the implementation block
@property (nonatomic,retain) NSString * deviceName;                                     //@synthesize deviceName=_deviceName - In the implementation block
@property (nonatomic,retain) NSString * deviceIdentifier;                               //@synthesize deviceIdentifier=_deviceIdentifier - In the implementation block
@property (nonatomic,retain) NSURL * deviceImageURL;                                    //@synthesize deviceImageURL=_deviceImageURL - In the implementation block
@property (nonatomic,retain) PreferencesRemoteUIDelegate * remoteDelegate;              //@synthesize remoteDelegate=_remoteDelegate - In the implementation block
+(id)deviceImageURLFromAttributes:(id)arg1 ;
+(id)currentDeviceBackupWithMBManager:(id)arg1 filtering:(BOOL)arg2 error:(id*)arg3 ;
+(id)cellValueStyleDateStringForDate:(id)arg1 ;
+(id)dateStringForSnapshot:(id)arg1 ;
+(id)specifier;
-(void)didEnterBackground:(id)arg1 ;
-(id)remoteDelegate;
-(void)showAllApps:(id)arg1 ;
-(void)reloadQuotaInfo;
-(void)loadFailed:(id)arg1 ;
-(BOOL)beginScan;
-(void)loadFinished:(id)arg1 ;
-(void)setBackupSize:(unsigned long long)arg1 ;
-(id)deviceImageURL;
-(void)loadQuotaInfo;
-(id)nextBackupSizeStringWithSpecifier:(id)arg1 ;
-(void)setDeviceImageURL:(id)arg1 ;
-(void)setAdditionalSpaceRequiredString:(id)arg1 ;
-(void)loadPropertyValuesFromDictionary:(id)arg1 ;
-(void)setRemoteDelegate:(id)arg1 ;
-(void)updateNextBackupSize;
-(void)animateAppSpecifierChanges;
-(id)displayNameForDomainInfo:(id)arg1 ;
-(id)bundleIdForDomainInfo:(id)arg1 ;
-(BOOL)shouldIgnoreBundleId:(id)arg1 ;
-(id)appSpecifierForBundleID:(id)arg1 ;
-(void)setBackupDomainEnabled:(id)arg1 forSpecifier:(id)arg2 ;
-(id)backupDomainEnabledForSpecifier:(id)arg1 ;
-(void)assignDisableBackupsConfirmationToSpecifier:(id)arg1 ;
-(void)turnOffAppBackupConfirmed:(id)arg1 ;
-(void)turnOffAppBackupCancelled:(id)arg1 ;
-(void)_updateTable:(id)arg1 toMatchArray:(id)arg2 withVisibleArray:(id)arg3 maxVisible:(unsigned)arg4 inSection:(int)arg5 withRowOffset:(int)arg6 ;
-(id)loadAppSpecifiersWithDomainInfo:(id)arg1 ;
-(void)deleteBackupConfirmed;
-(void)updateAppSpecifiersScanWhenComplete:(BOOL)arg1 ;
-(void)reloadAfterFetch;
-(void)reloadBackupInfoWithDeleteButton:(BOOL)arg1 ;
-(id)currentDeviceBackup;
-(void)insertDeleteBackupButtonIfNeeded;
-(id)dateStringOfLatestBackup;
-(id)backupSizeString;
-(void)startDeletionBezel;
-(void)endDeletionBezel;
-(id)additionalSpaceRequiredString;
-(BOOL)scanInProgress;
-(unsigned long long)backupSize;
-(void)loadStarted:(id)arg1 ;
-(void)setDeviceName:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2 ;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2 ;
-(void)loadView;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)confirmDelete:(id)arg1 ;
-(void)setScanInProgress:(BOOL)arg1 ;
-(id)deviceName;
-(void)managerDidFinishScan:(id)arg1 ;
-(void)manager:(id)arg1 didFailScanWithError:(id)arg2 ;
-(id)specifiers;
-(BOOL)needsToShowToolbarInPrefsAppRoot;
-(void)setDeviceIdentifier:(id)arg1 ;
-(id)deviceIdentifier;
@end

