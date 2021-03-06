//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CAAnimation, NSMutableArray, NSString;

@interface VPCytronAnimatorObject : NSObject
{
    _Bool _removeOnCompletion;
    _Bool _isFinish;
    NSMutableArray *_childAnimators;
    long long _type;
    CAAnimation *_animation;
    NSString *_name;
    id _constructor;
    NSString *_viewID;
    long long _status;
    double _anchorPointZ;
    double _delayTime;
    id _animateView;
    NSString *_basicValueString;
    NSMutableArray *_values;
    struct CGPoint _anchorPoint;
}

@property(retain, nonatomic) NSMutableArray *values; // @synthesize values=_values;
@property(retain, nonatomic) NSString *basicValueString; // @synthesize basicValueString=_basicValueString;
@property(nonatomic) __weak id animateView; // @synthesize animateView=_animateView;
@property(nonatomic) double delayTime; // @synthesize delayTime=_delayTime;
@property(nonatomic) double anchorPointZ; // @synthesize anchorPointZ=_anchorPointZ;
@property(nonatomic) struct CGPoint anchorPoint; // @synthesize anchorPoint=_anchorPoint;
@property(nonatomic) _Bool isFinish; // @synthesize isFinish=_isFinish;
@property(nonatomic, getter=isRemoveOnCompletion) _Bool removeOnCompletion; // @synthesize removeOnCompletion=_removeOnCompletion;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(retain, nonatomic) NSString *viewID; // @synthesize viewID=_viewID;
@property(nonatomic) __weak id constructor; // @synthesize constructor=_constructor;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) CAAnimation *animation; // @synthesize animation=_animation;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSMutableArray *childAnimators; // @synthesize childAnimators=_childAnimators;
- (void).cxx_destruct;
- (void)updateAnimationWithViewSize:(struct CGSize)arg1;

@end

