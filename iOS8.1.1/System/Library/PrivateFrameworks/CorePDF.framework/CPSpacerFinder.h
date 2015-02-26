/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:31:17 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CorePDF/CorePDF-Structs.h>
#import <CorePDF/CPDisposable.h>

@class CPZone, NSMutableArray;

@interface CPSpacerFinder : NSObject <CPDisposable> {

	CPZone* contentZone;
	CGRect zoneBounds;
	CGRect textBounds;
	SCD_Struct_CP31* spacerSequence;
	NSMutableArray* spacers;
	unsigned segmentationCount;
	SCD_Struct_CP32* segmentations;
	SCD_Struct_CP33* qualityEntries;

}
-(void)dealloc;
-(void)dispose;
-(id)spacers;
-(id)initWithContentZone:(id)arg1 ;
-(void)findSpacers;
-(void)splitTextLines;
-(void)initializeSegmentations;
-(void)initializeJunctions;
-(void)assessQuality;
-(void)determineValidity;
-(void)finalize;
@end
