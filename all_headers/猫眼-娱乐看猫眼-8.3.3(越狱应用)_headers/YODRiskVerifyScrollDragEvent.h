//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface YODRiskVerifyScrollDragEvent : NSObject
{
    unsigned long long _type;
    double _milliSecondsSinceLoaded;
    struct CGPoint _point;
}

+ (id)eventWithType:(unsigned long long)arg1 point:(struct CGPoint)arg2 timeIntervalSinceLoaded:(double)arg3;
@property(nonatomic) double milliSecondsSinceLoaded; // @synthesize milliSecondsSinceLoaded=_milliSecondsSinceLoaded;
@property(nonatomic) struct CGPoint point; // @synthesize point=_point;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;

@end

