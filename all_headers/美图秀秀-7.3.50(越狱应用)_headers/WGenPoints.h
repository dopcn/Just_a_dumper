//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WGenPoints : NSObject
{
}

+ (void)freePaintPointData:(struct _WMTPaintPointData *)arg1;
+ (struct _WMTSnapPenData *)genPointsWithFirst:(union _GLKVector2)arg1 second:(union _GLKVector2)arg2 last:(union _GLKVector2)arg3 lineWidth:(double)arg4 isFirst:(_Bool)arg5 useOtherSnapPenObject:(id)arg6;
+ (struct _WMTSnapPenData *)genPointsWithFirst:(union _GLKVector2)arg1 second:(union _GLKVector2)arg2 last:(union _GLKVector2)arg3 lineWidth:(double)arg4 isFirst:(_Bool)arg5;

@end

