//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray;

@interface TuneSBJsonBase : NSObject
{
    NSMutableArray *errorTrace;
    unsigned long long depth;
    unsigned long long maxDepth;
}

@property unsigned long long maxDepth; // @synthesize maxDepth;
@property(readonly, copy) NSArray *errorTrace; // @synthesize errorTrace;
- (void).cxx_destruct;
- (void)clearErrorTrace;
- (void)addErrorWithCode:(unsigned long long)arg1 description:(id)arg2;
- (void)dealloc;
- (id)init;

@end

