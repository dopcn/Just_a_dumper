//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCopying-Protocol.h"

@interface LFFramePoint : NSObject <NSCopying>
{
    double _alpha;
    double _scale;
    double _rotate;
    double _time;
    struct CGPoint _position;
}

@property(nonatomic) double time; // @synthesize time=_time;
@property(nonatomic) double rotate; // @synthesize rotate=_rotate;
@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(nonatomic) double alpha; // @synthesize alpha=_alpha;
@property(nonatomic) struct CGPoint position; // @synthesize position=_position;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

