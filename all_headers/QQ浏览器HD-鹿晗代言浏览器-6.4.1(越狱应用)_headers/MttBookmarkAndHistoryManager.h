//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "UINavigationControllerDelegate-Protocol.h"

@class MttBookmarkViewController, MttHistoryViewController, MttOfflineReadingViewController, NSArray, NSString, UINavigationController, UISegmentedControl, UIView, UIViewController;

@interface MttBookmarkAndHistoryManager : NSObject <UINavigationControllerDelegate>
{
    UIViewController *_containerController;
    UINavigationController *_navigationController;
    MttBookmarkViewController *_bookmarkViewController;
    MttHistoryViewController *_historyViewController;
    MttOfflineReadingViewController *_offlineViewController;
    long long _selectedTag;
    long long _layoutStyle;
    NSArray *_segmentArray;
    UISegmentedControl *_switchControl;
    UISegmentedControl *_switchControlSplitView;
    UIView *_containerView;
}

+ (id)defaultManager;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UISegmentedControl *switchControlSplitView; // @synthesize switchControlSplitView=_switchControlSplitView;
@property(retain, nonatomic) UISegmentedControl *switchControl; // @synthesize switchControl=_switchControl;
@property(retain, nonatomic) NSArray *segmentArray; // @synthesize segmentArray=_segmentArray;
@property(nonatomic) long long layoutStyle; // @synthesize layoutStyle=_layoutStyle;
@property(nonatomic) long long selectedTag; // @synthesize selectedTag=_selectedTag;
@property(retain, nonatomic) MttOfflineReadingViewController *offlineViewController; // @synthesize offlineViewController=_offlineViewController;
@property(retain, nonatomic) MttHistoryViewController *historyViewController; // @synthesize historyViewController=_historyViewController;
@property(retain, nonatomic) MttBookmarkViewController *bookmarkViewController; // @synthesize bookmarkViewController=_bookmarkViewController;
@property(retain, nonatomic) UINavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property(nonatomic) __weak UIViewController *containerController; // @synthesize containerController=_containerController;
- (void).cxx_destruct;
- (id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;
- (void)changeNightModeColor;
- (void)doSplitViewChange;
- (void)navigationControllerWillDealloc;
- (void)presentContentWithNavigationController:(id)arg1 contentType:(long long)arg2 delegate:(id)arg3 animated:(_Bool)arg4;
- (void)presentContentWithNavigationController2:(id)arg1 contentType:(long long)arg2;
- (void)presentContentWithNavigationController2:(id)arg1;
- (void)presentContentWithNavigationController:(id)arg1;
- (void)resetContext;
- (void)presentOfflineControllerAnimated:(_Bool)arg1;
- (void)presentHistoryControllerAnimated:(_Bool)arg1;
- (void)presentBookmarkControllerAnimated:(_Bool)arg1;
- (void)createOfflineReadingViewController;
- (void)createHistoryViewController;
- (void)createBookmarkViewController;
- (void)showContentUsingNavigationController:(unsigned long long)arg1;
- (void)selectButton:(id)arg1;
- (void)creatSwitchControlSplitView;
- (void)creatSwitchControl;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

