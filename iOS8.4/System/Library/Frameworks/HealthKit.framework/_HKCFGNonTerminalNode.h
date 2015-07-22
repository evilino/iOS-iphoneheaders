/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:18:00 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HealthKit/HealthKit-Structs.h>
#import <HealthKit/_HKCFGNode.h>

@class NSArray, _HKCFGReplacementRule;

@interface _HKCFGNonTerminalNode : _HKCFGNode {

	NSArray* _nodes;
	id _value;
	_HKCFGReplacementRule* _rule;

}

@property (nonatomic,readonly) _HKCFGReplacementRule * rule;              //@synthesize rule=_rule - In the implementation block
+(id)nodeWithChildren:(id)arg1 rule:(id)arg2 rangeOfString:(NSRange)arg3 ;
-(id)evaluate;
-(_HKCFGReplacementRule *)rule;
@end
