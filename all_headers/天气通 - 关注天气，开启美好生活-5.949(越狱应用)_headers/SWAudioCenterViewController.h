//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SWaudioAdDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class NSString, SWAudioCenterClassifyDetailListView, SWAudioListViewController, SWHDSegmentedControl, SWResourceCenterView, UIButton, UIScrollView;

@interface SWAudioCenterViewController : UIViewController <UIScrollViewDelegate, SWaudioAdDelegate>
{
    SWAudioCenterClassifyDetailListView *_classifyDetailListView;
    NSString *_showImportViewUrl;
    long long _willShowPageIndex;
    SWResourceCenterView *_centerView;
    UIButton *_audioListButton;
    SWAudioListViewController *_recommedsListVC;
    SWAudioListViewController *_localListVC;
    SWHDSegmentedControl *_segmentControl;
    UIScrollView *_scrollView;
}

@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) SWHDSegmentedControl *segmentControl; // @synthesize segmentControl=_segmentControl;
@property(retain, nonatomic) SWAudioListViewController *localListVC; // @synthesize localListVC=_localListVC;
@property(retain, nonatomic) SWAudioListViewController *recommedsListVC; // @synthesize recommedsListVC=_recommedsListVC;
@property(retain, nonatomic) UIButton *audioListButton; // @synthesize audioListButton=_audioListButton;
@property(retain, nonatomic) SWResourceCenterView *centerView; // @synthesize centerView=_centerView;
@property(nonatomic) long long willShowPageIndex; // @synthesize willShowPageIndex=_willShowPageIndex;
@property(copy, nonatomic) NSString *showImportViewUrl; // @synthesize showImportViewUrl=_showImportViewUrl;
@property(retain, nonatomic) SWAudioCenterClassifyDetailListView *classifyDetailListView; // @synthesize classifyDetailListView=_classifyDetailListView;
- (void).cxx_destruct;
- (id)showImportView:(id)arg1;
- (void)setImportViewUrl:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)localTopAdViewClickedFrom:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)segmentValueChanged:(id)arg1;
- (void)edit:(id)arg1;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)loadDataOnPage:(long long)arg1;
- (void)enableLocalAudioEdit:(_Bool)arg1;
- (void)didReceiveMemoryWarning;
- (id)currentViewController;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

