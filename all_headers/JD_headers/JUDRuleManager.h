//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class JUDSDKInstance, JUDThreadSafeMutableDictionary;

@interface JUDRuleManager : NSObject
{
    JUDSDKInstance *_instance;
    JUDThreadSafeMutableDictionary *_fontStorage;
}

+ (id)sharedInstance;
@property(retain, nonatomic) JUDThreadSafeMutableDictionary *fontStorage; // @synthesize fontStorage=_fontStorage;
@property(nonatomic) __weak JUDSDKInstance *instance; // @synthesize instance=_instance;
- (void).cxx_destruct;
- (id)getRule:(id)arg1;
- (void)addRule:(id)arg1 rule:(id)arg2;
- (void)removeRule:(id)arg1 rule:(id)arg2;

@end

