/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:33:23 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <PowerlogCore/PowerlogCore-Structs.h>
@interface PLUtilities : NSObject
+(void)postNotificationName:(id)arg1 object:(id)arg2 userInfo:(id)arg3 ;
+(id)processNameForPid:(int)arg1 ;
+(id)workQueueForKey:(id)arg1 ;
+(void)handleSQLResult:(int)arg1 ;
+(id)shortUUIDString;
+(void)setMobileOwnerForFile:(id)arg1 ;
+(id)extractDateStringAndUUIDStringFromFilePath:(id)arg1 ;
+(BOOL)runningAsMobileUser;
+(id)runningAsUser;
+(void)_deallocatePortArray:(unsigned*)arg1 withCount:(unsigned)arg2 ;
+(id)modeForEntryKey:(id)arg1 withKeyName:(id)arg2 ;
+(short)canLogMode:(id)arg1 fullMode:(BOOL)arg2 ;
+(int)getDisplayTypeOfDevice;
+(int)getTorchTypeOfDevice;
+(BOOL)gasGaugeEnabled;
+(unsigned long long)dispatchTimeInSeconds:(double)arg1 ;
+(unsigned long long)pidForName:(id)arg1 ;
+(id)hashString:(id)arg1 ;
+(short)logModeForEntryKey:(id)arg1 withKey:(id)arg2 andValue:(id)arg3 ;
+(BOOL)isValidString:(id)arg1 ;
+(id)torchTypeStringQuery;
+(double)scaledPowerBasedOnPoint:(double)arg1 withPowerModel:(id)arg2 ;
+(id)workQueue;
+(id)workQueueForClass:(Class)arg1 ;
+(int)MavRev;
+(BOOL)internalBuild;
+(id)deviceBootTime;
+(BOOL)isWiFiChipset4330;
+(BOOL)isWiFiChipset43291;
+(BOOL)isWiFiChipset4334;
+(BOOL)isWiFiChipset43342;
+(BOOL)isWiFiChipset4324;
+(BOOL)isWiFiChipset4345;
+(BOOL)isWiFiChipset4350;
+(id)dateFromTimeval:(timeval)arg1 ;
+(double)secondsFromMachTime:(unsigned long long)arg1 ;
+(id)displayTypeStringQuery;
+(BOOL)nonUIBuild;
+(double)defaultBatteryEnergyCapacity;
+(BOOL)isMav1;
+(BOOL)isMav2;
+(BOOL)isMav4;
+(BOOL)isICE;
+(BOOL)isMav10;
+(BOOL)isMav7;
+(BOOL)hasBaseband;
+(id)MavRevStringQuery;
+(BOOL)isMav5;
+(BOOL)isIPod;
+(BOOL)isPingPongChargingWith:(BOOL)arg1 andBatteryLevelPercent:(double)arg2 ;
+(BOOL)alsCurveHigherThanDefault;
+(int)getProcessorRevOfDevice;
+(id)allSubClassesForClass:(Class)arg1 ;
@end

