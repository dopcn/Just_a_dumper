//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface UTTracker : NSObject
{
    NSMutableDictionary *mGlobalArgs;
    NSMutableDictionary *mReserves;
    NSString *mTrackId;
}

- (void).cxx_destruct;
- (void)sender:(id)arg1 isSync:(_Bool)arg2;
- (void)send:(id)arg1;
- (void)pageDisAppear:(id)arg1;
- (void)pageAppear:(id)arg1;
- (void)updatePageProperties:(id)arg1 properties:(id)arg2;
- (id)getGlobalProperty:(id)arg1;
- (void)removeGlobalProperty:(id)arg1;
- (void)setGlobalProperty:(id)arg1 value:(id)arg2;
- (id)initWithTrackId:(id)arg1;

@end

