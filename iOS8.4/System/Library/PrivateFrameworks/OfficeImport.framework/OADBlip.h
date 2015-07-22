/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:24:07 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class OADSubBlip;

@interface OADBlip : NSObject {

	unsigned mReferenceCount;
	OADSubBlip* mMainSubBlip;
	OADSubBlip* mAltSubBlip;

}
+(id)pathExtensionForBlipType:(int)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(unsigned*)referenceCount;
-(id)mainSubBlip;
-(void)setMainSubBlip:(id)arg1 ;
-(void)setAltSubBlip:(id)arg1 ;
-(id)altSubBlip;
@end
