/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:05:28 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PowerlogPlugins/PLBatteryLifeMonitorLogger.bundle/PLBatteryLifeMonitorLogger
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray;

@interface PLPowerSnapshotList : NSObject {

	NSMutableArray* _snapshots;

}

@property (retain) NSMutableArray * snapshots;              //@synthesize snapshots=_snapshots - In the implementation block
-(void)addSnapshot:(id)arg1 ;
-(void)setObject:(id)arg1 atIndexedSubscript:(unsigned)arg2 ;
-(void)dealloc;
-(unsigned)count;
-(id)init;
-(id)objectAtIndexedSubscript:(unsigned)arg1 ;
-(id)lastSnapshot;
-(double)lastTimeSinceEpoch;
-(id)snapshots;
-(double)energyInRange:(id)arg1 ;
-(void)clearUntilTime:(double)arg1 ;
-(BOOL)fixForInactivity;
-(void)setSnapshots:(id)arg1 ;
@end
