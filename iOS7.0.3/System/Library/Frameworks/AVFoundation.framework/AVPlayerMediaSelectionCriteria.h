/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:51:31 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class AVPlayerMediaSelectionCriteriaInternal, NSArray;

@interface AVPlayerMediaSelectionCriteria : NSObject {

	AVPlayerMediaSelectionCriteriaInternal* _criteria;

}

@property (nonatomic,readonly) NSArray * preferredLanguages; 
@property (nonatomic,readonly) NSArray * preferredMediaCharacteristics; 
-(id)figDictionary;
-(id)initWithFigDictionary:(id)arg1 ;
-(id)preferredMediaCharacteristics;
-(id)preferredMediaSubTypes;
-(id)precludedMediaSubTypes;
-(id)initWithPreferredLanguages:(id)arg1 preferredMediaCharacteristics:(id)arg2 preferredMediaSubTypes:(id)arg3 precludedMediaSubTypes:(id)arg4 ;
-(id)initWithPreferredLanguages:(id)arg1 preferredMediaCharacteristics:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(id)preferredLanguages;
@end

