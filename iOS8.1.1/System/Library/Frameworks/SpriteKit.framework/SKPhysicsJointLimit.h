/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:29:02 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpriteKit/SpriteKit-Structs.h>
#import <SpriteKit/SKPhysicsJoint.h>

@interface SKPhysicsJointLimit : SKPhysicsJoint {

	double _maxLength;

}

@property (assign,nonatomic) double maxLength;              //@synthesize maxLength=_maxLength - In the implementation block
+(id)jointWithBodyA:(id)arg1 bodyB:(id)arg2 anchorA:(CGPoint)arg3 anchorB:(CGPoint)arg4 ;
+(id)allocWithZone:(NSZone*)arg1 ;
-(double)maxLength;
-(void)setMaxLength:(double)arg1 ;
@end

