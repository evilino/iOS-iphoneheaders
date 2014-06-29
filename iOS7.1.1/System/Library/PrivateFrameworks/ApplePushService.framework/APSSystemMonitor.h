/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 3:34:43 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/ApplePushService.framework/apsd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSHashTable, NSDate;

@interface APSSystemMonitor : NSObject {

	NSHashTable* _listeners;
	NSDate* _dateSystemLockLastChanged;
	NSDate* _dateScreenLightLastChanged;
	BOOL _active;
	BOOL _willSleep;
	BOOL _usesPowerNotifications;
	BOOL _watchesScreenLightState;
	BOOL _watchesSystemLockState;
	BOOL _systemLocked;
	BOOL _screenLit;

}

@property (assign,setter=setActive:,nonatomic) BOOL isActive;                    //@synthesize active=_active - In the implementation block
@property (assign,nonatomic) BOOL usesPowerNotifications;                        //@synthesize usesPowerNotifications=_usesPowerNotifications - In the implementation block
@property (assign,nonatomic) BOOL watchesSystemLockState;                        //@synthesize watchesSystemLockState=_watchesSystemLockState - In the implementation block
@property (assign,nonatomic) BOOL watchesScreenLightState;                       //@synthesize watchesScreenLightState=_watchesScreenLightState - In the implementation block
@property (nonatomic,readonly) BOOL systemIsSleeping;                            //@synthesize willSleep=_willSleep - In the implementation block
@property (nonatomic,readonly) BOOL isScreenLit;                                 //@synthesize screenLit=_screenLit - In the implementation block
@property (nonatomic,readonly) NSDate * dateScreenLightLastChanged;              //@synthesize dateScreenLightLastChanged=_dateScreenLightLastChanged - In the implementation block
@property (nonatomic,readonly) BOOL isSystemLocked;                              //@synthesize systemLocked=_systemLocked - In the implementation block
@property (nonatomic,readonly) NSDate * dateSystemLockLastChanged;               //@synthesize dateSystemLockLastChanged=_dateSystemLockLastChanged - In the implementation block
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(BOOL)isActive;
-(void)setActive:(BOOL)arg1 ;
-(void)addListener:(id)arg1 ;
-(void)removeListener:(id)arg1 ;
-(BOOL)isScreenLit;
-(id)dateScreenLightLastChanged;
-(void)setUsesPowerNotifications:(BOOL)arg1 ;
-(void)setWatchesScreenLightState:(BOOL)arg1 ;
-(void)_deliverNotificationSelector:(SEL)arg1 ;
-(BOOL)usesPowerNotifications;
-(void)_systemDidWake;
-(void)_systemWillSleep;
-(void)setWatchesSystemLockState:(BOOL)arg1 ;
-(void)_setSystemScreenState:(BOOL)arg1 ;
-(void)_setSystemLockState:(BOOL)arg1 ;
-(BOOL)watchesScreenLightState;
-(BOOL)systemIsSleeping;
-(BOOL)watchesSystemLockState;
-(id)dateSystemLockLastChanged;
-(BOOL)isSystemLocked;
@end
