/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:26 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Diagnostics.app/Diagnostics
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Diagnostics/DADAFilterData.h>
#import <Diagnostics/DADAScalarData.h>
#import <Diagnostics/DADAVectorData.h>

@interface DAAccelerometerData : NSObject <DADAFilterData, DADAScalarData, DADAVectorData> {

	float _x;
	float _y;
	float _z;
	double _timestamp;

}

@property (assign,x,nonatomic) float x;                     //@synthesize x=_x - In the implementation block
@property (assign,y,nonatomic) float y;                     //@synthesize y=_y - In the implementation block
@property (assign,z,nonatomic) float z;                     //@synthesize z=_z - In the implementation block
@property (assign,nonatomic) double timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
+(id)dataWithVectorDictionary:(id)arg1 ;
-(id)filterData;
-(id)vectorData;
-(id)scalarData;
-(id)init;
-(double)timestamp;
-(void)setTimestamp:(double)arg1 ;
-(float)x;
-(void)setX:(float)arg1 ;
-(float)y;
-(void)setY:(float)arg1 ;
-(float)z;
-(void)setZ:(float)arg1 ;
@end
