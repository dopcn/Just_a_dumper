//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WMBezier : NSObject
{
    CDStruct_6e3f967a _wsStart;
    CDStruct_6e3f967a _wsFirst;
    CDStruct_6e3f967a _wsSecond;
    CDStruct_6e3f967a _wsEnd;
}

@property(nonatomic) CDStruct_6e3f967a wsEnd; // @synthesize wsEnd=_wsEnd;
@property(nonatomic) CDStruct_6e3f967a wsSecond; // @synthesize wsSecond=_wsSecond;
@property(nonatomic) CDStruct_6e3f967a wsFirst; // @synthesize wsFirst=_wsFirst;
@property(nonatomic) CDStruct_6e3f967a wsStart; // @synthesize wsStart=_wsStart;
- (CDStruct_6e3f967a)pointWithdt:(float)arg1;
- (void)_initPoints;
- (id)init;

@end

