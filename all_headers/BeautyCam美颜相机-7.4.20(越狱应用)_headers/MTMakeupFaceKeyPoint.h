//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@interface MTMakeupFaceKeyPoint : NSObject <NSCopying>
{
    long long _pointIndex;
    struct CGPoint _point;
}

@property(nonatomic) struct CGPoint point; // @synthesize point=_point;
@property(nonatomic) long long pointIndex; // @synthesize pointIndex=_pointIndex;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithPointIndex:(long long)arg1 point:(struct CGPoint)arg2;

@end

