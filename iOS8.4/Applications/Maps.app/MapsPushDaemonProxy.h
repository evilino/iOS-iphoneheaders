/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:41 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MapsPushDaemonProxy
@required
-(void)clearCurrentAnnouncement;
-(void)fetchCurrentAnnouncement:(/*^block*/id)arg1;
-(void)clearBulletinWithRecordID:(id)arg1;
-(void)simulateProblemResolution;
-(void)fetchProblemStatus;
-(void)fetchDevicePushToken:(/*^block*/id)arg1;
-(void)registerForTopic;
-(void)simulateAnnouncement:(id)arg1;
-(void)resetShownAnnouncements;
-(void)checkin;

@end

