//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary;

@interface YKFRouterRewriteConfiguration : NSObject
{
    _Bool _enabled;
    NSDictionary *_oldURLDic;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedInstance;
@property(retain, nonatomic) NSDictionary *oldURLDic; // @synthesize oldURLDic=_oldURLDic;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
- (void).cxx_destruct;
- (void)dealloc;
- (void)groupConfig:(id)arg1;
- (void)updateWithDictionary:(id)arg1;

@end

