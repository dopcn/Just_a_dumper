//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MttSkinChangeable-Protocol.h"

@class MultiWindowDataArray, NSString;
@protocol MultiBrowseWindowManagerListener;

@interface MultiBrowseWindowManager : NSObject <MttSkinChangeable>
{
    id <MultiBrowseWindowManagerListener> _listener;
    unsigned long long _mode;
    long long _recentUsedWindowIndex;
    MultiWindowDataArray *_currWindows;
    MultiWindowDataArray *_normalWindows;
    MultiWindowDataArray *_privacyWindows;
}

@property(retain, nonatomic) MultiWindowDataArray *privacyWindows; // @synthesize privacyWindows=_privacyWindows;
@property(retain, nonatomic) MultiWindowDataArray *normalWindows; // @synthesize normalWindows=_normalWindows;
@property(nonatomic) __weak MultiWindowDataArray *currWindows; // @synthesize currWindows=_currWindows;
@property(nonatomic) long long recentUsedWindowIndex; // @synthesize recentUsedWindowIndex=_recentUsedWindowIndex;
@property(nonatomic) unsigned long long mode; // @synthesize mode=_mode;
@property(nonatomic) __weak id <MultiBrowseWindowManagerListener> listener; // @synthesize listener=_listener;
- (void).cxx_destruct;
- (long long)lastUsedWindowIndex;
- (long long)indexOfFocusWindow;
- (long long)indexOfWindow:(id)arg1;
- (long long)numberOfWindowsInMode:(unsigned long long)arg1;
- (long long)numberOfWindows;
- (void)deleteOneWindowAt:(long long)arg1;
- (void)focusIndexChangeTo:(long long)arg1;
- (void)addNewAtIndex:(long long)arg1 withFrame:(struct CGRect)arg2;
- (void)dealloc;
- (_Bool)isWindowArrayEmpty;
- (void)refreshSkinWithMode:(long long)arg1;
- (long long)addBrowseWindowWithParam:(id)arg1;
- (long long)insertBrowseWindowWithParam:(id)arg1;
- (void)closeBrowseWindow:(id)arg1;
- (id)focusBrowseWindow;
- (void)setFocusBrowseWindow:(id)arg1;
- (id)browseWindowAtIndex:(long long)arg1;
- (id)browseWindowAtIndex:(long long)arg1 inMode:(unsigned long long)arg2;
- (id)browseWindowAtIndex:(long long)arg1 inWindows:(id)arg2;
- (unsigned long long)indexOfBrowseWindow:(id)arg1 inMode:(unsigned long long)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

