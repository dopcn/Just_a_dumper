//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray;

@interface LiveDecorateSplitScreenModel : NSObject
{
    long long _s;
    long long _from;
    long long _count;
    NSArray *_splitScreenMaskArray;
}

@property(copy, nonatomic) NSArray *splitScreenMaskArray; // @synthesize splitScreenMaskArray=_splitScreenMaskArray;
@property(nonatomic) long long count; // @synthesize count=_count;
@property(nonatomic) long long from; // @synthesize from=_from;
@property(nonatomic) long long s; // @synthesize s=_s;
- (void).cxx_destruct;
- (void)dealloc;

@end

