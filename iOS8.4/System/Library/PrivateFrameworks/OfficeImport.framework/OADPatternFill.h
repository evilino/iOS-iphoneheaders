/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:24:08 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OADFill.h>

@class OADColor, OADPattern;

@interface OADPatternFill : OADFill {

	OADColor* mFgColor;
	BOOL mIsFgColorOverridden;
	OADColor* mBgColor;
	BOOL mIsBgColorOverridden;
	OADPattern* mPattern;
	BOOL mIsPatternOverridden;

}
+(id)defaultProperties;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setColor:(id)arg1 ;
-(void)setStyleColor:(id)arg1 ;
-(id)initWithDefaults;
-(BOOL)isFgColorOverridden;
-(BOOL)isBgColorOverridden;
-(BOOL)isPatternOverridden;
-(id)namedImageDataWithBlipCollection:(id)arg1 ;
-(void)setParent:(id)arg1 ;
-(id)bgColor;
-(void)setBgColor:(id)arg1 ;
-(id)fgColor;
-(void)setFgColor:(id)arg1 ;
-(id)pattern;
-(void)setPattern:(id)arg1 ;
@end
