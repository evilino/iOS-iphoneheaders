/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:34:57 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/WirelessDiagnostics.framework/WirelessDiagnostics
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class PBCodable;

@interface AWDMetricContainer : NSObject {

	PBCodable* _metric;
	unsigned _metricId;

}

@property (nonatomic,retain) PBCodable * metric;               //@synthesize metric=_metric - In the implementation block
@property (nonatomic,readonly) unsigned metricId;              //@synthesize metricId=_metricId - In the implementation block
-(void)dealloc;
-(void)setMetric:(PBCodable *)arg1 ;
-(id)initWithMetricId:(unsigned)arg1 ;
-(PBCodable *)metric;
-(unsigned)metricId;
@end
