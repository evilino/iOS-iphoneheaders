/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:19:12 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface NSDocumentDifferenceSize : NSObject {

	long long _generationCount;
	long long _changeCount;

}

@property (assign,nonatomic) long long generationCount;              //@synthesize generationCount=_generationCount - In the implementation block
@property (assign,nonatomic) long long changeCount;                  //@synthesize changeCount=_changeCount - In the implementation block
-(id)description;
-(long long)changeCount;
-(long long)generationCount;
-(void)setGenerationCount:(long long)arg1 ;
-(void)setChangeCount:(long long)arg1 ;
@end
