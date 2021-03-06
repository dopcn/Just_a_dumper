//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface IMStrandsViewPool : NSObject
{
    long long _maxViewsCount;
    NSMutableDictionary *_viewPool;
    long long _viewPoolCount;
}

+ (id)sharedInstance;
@property(nonatomic) long long viewPoolCount; // @synthesize viewPoolCount=_viewPoolCount;
@property(retain, nonatomic) NSMutableDictionary *viewPool; // @synthesize viewPool=_viewPool;
@property(nonatomic) long long maxViewsCount; // @synthesize maxViewsCount=_maxViewsCount;
- (void).cxx_destruct;
- (void)checkAndCleanPool;
- (void)recycleView:(id)arg1 withReuseIdentifier:(id)arg2 withPoolDelegate:(id)arg3;
- (id)getViewWithProperties:(id)arg1 withReuseIdentifier:(id)arg2 withPoolDelegate:(id)arg3;
- (id)init;

@end

