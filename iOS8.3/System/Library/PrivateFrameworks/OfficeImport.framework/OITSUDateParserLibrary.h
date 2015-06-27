/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 2:52:48 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class NSMutableArray, NSCondition;

@interface OITSUDateParserLibrary : NSObject {

	unsigned mMaxPermittedParsers;
	unsigned mNumberOfUses;
	unsigned mParsersCreated;
	NSMutableArray* mAvailableDateParsers;
	NSCondition* mParserLibraryConditionVariable;

}
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)_singletonAlloc;
+(id)sharedDateParserLibrary;
-(id)retain;
-(id)init;
-(id)autorelease;
-(unsigned)retainCount;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)checkoutDateParser;
-(void)returnDateParser:(id)arg1 ;
-(oneway void)release;
@end
