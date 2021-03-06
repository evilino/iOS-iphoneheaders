/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:06 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GEOCompletionGroup.h>

@class NSArray, NSString, GEOSuggestionEntryList;

@interface _GEOPlaceCompletionGroup : NSObject <GEOCompletionGroup> {

	GEOSuggestionEntryList* _entryList;
	NSArray* _items;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSArray * items; 
@property (nonatomic,readonly) NSString * localizedSectionHeader; 
-(void)dealloc;
-(NSString *)description;
-(NSArray *)items;
-(id)initWithSuggestionEntryList:(id)arg1 query:(id)arg2 entryListIndex:(int)arg3 completion:(id)arg4 traits:(id)arg5 ;
-(id)initWithCompletion:(id)arg1 query:(id)arg2 traits:(id)arg3 ;
-(NSString *)localizedSectionHeader;
@end

