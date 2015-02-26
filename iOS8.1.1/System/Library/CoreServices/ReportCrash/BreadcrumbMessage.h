/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:27:03 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/CoreServices/ReportCrash
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSString;

@interface BreadcrumbMessage : NSObject {

	unsigned long long _timeStamp;
	NSString* _name;
	unsigned long long _activityID;

}

@property (readonly) unsigned long long timeStamp;               //@synthesize timeStamp=_timeStamp - In the implementation block
@property (retain,readonly) NSString * name;                     //@synthesize name=_name - In the implementation block
@property (readonly) unsigned long long activityID;              //@synthesize activityID=_activityID - In the implementation block
-(id)initWithTimeStamp:(unsigned long long)arg1 name:(const char*)arg2 activityID:(unsigned long long)arg3 ;
-(unsigned long long)activityID;
-(void)dealloc;
-(NSString *)name;
-(unsigned long long)timeStamp;
@end
