//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString;

@interface GroupPrefetchPolicy : NSObject
{
    _Bool _isAutoFetch;
    NSString *_name;
    NSMutableArray *_policies;
}

+ (id)parseJsonObj:(id)arg1;
@property(nonatomic) _Bool isAutoFetch; // @synthesize isAutoFetch=_isAutoFetch;
@property(retain, nonatomic) NSMutableArray *policies; // @synthesize policies=_policies;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (void)dump;
- (id)getPrefetchPolicyWithThreshold:(int)arg1;
- (id)init;

@end

