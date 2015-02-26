/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:31:00 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol CKDAccountInfoProvider <NSObject>
@optional
-(id)additionalHeaderValues;
-(void)noteTimeSpentInNetworking:(double)arg1;
-(void)noteSuccessfulRequestWithNumDownloadedElements:(long long)arg1;
-(void)noteFailedNetworkRequest;
-(void)noteFailedProtocolRequest;

@required
-(id)languageCode;
-(id)containerID;
-(id)bundleID;
-(id)applicationBundle;
-(BOOL)isAnonymousAccount;
-(BOOL)canAccessAccount;
-(void)fetchContainerScopedUserIDUsingBackgroundSession:(BOOL)arg1 allowsCellularAccess:(BOOL)arg2 withCompletionHandler:(/*^block*/id)arg3;
-(BOOL)isUnitTestingAccount;
-(id)serverPreferredPushEnvironment;
-(BOOL)accountWantsPushRegistration;
-(id)config;
-(id)containerScopedUserID;
-(id)mescalSession;
-(id)trafficContainerIdentifier;
-(id)hardwareID;
-(id)regionCode;
-(id)enabledKeyboards;
-(void)renewAuthTokenWithCompletionHandler:(/*^block*/id)arg1;
-(void)fetchConfigurationUsingBackgroundSession:(BOOL)arg1 allowsCellularAccess:(BOOL)arg2 withCompletionHandler:(/*^block*/id)arg3;
-(void)resetMescalSession;
-(void)renewMescalSessionForRequest:(id)arg1 withCompletionHandler:(/*^block*/id)arg2;
-(id)baseURLForServerType:(long long)arg1 partitionType:(long long)arg2;
-(void)fetchPublicURLUsingBackgroundSession:(BOOL)arg1 allowsCellularAccess:(BOOL)arg2 serverType:(long long)arg3 completionHandler:(/*^block*/id)arg4;
-(id)dsid;
-(void)fetchDeviceIDUsingBackgroundSession:(BOOL)arg1 allowsCellularAccess:(BOOL)arg2 withCompletionHandler:(/*^block*/id)arg3;
-(BOOL)shouldFailAllTasks;
-(id)cloudKitAuthToken;
-(id)iCloudAuthToken;
-(id)deviceName;

@end
