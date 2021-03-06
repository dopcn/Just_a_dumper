//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LZBaseViewController.h"

#import "LZSearchResultIndexViewDelegate-Protocol.h"
#import "PLUPersonalCenterBarDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class LZSearchBar, LZSearchResultHostVC, LZSearchResultHotVC, LZSearchResultIndexVC, LZSearchResultLivingVC, LZSearchResultVM, NSArray, NSString, PLUGameLiveListViewModel, PLUPersonalCenterBar, PLUSearchViewModel;

@interface LZSearchResultVC : LZBaseViewController <PLUPersonalCenterBarDelegate, LZSearchResultIndexViewDelegate, UITextFieldDelegate>
{
    NSString *_key;
    NSString *_placeholderKey;
    PLUSearchViewModel *_searchVM;
    PLUPersonalCenterBar *_tabBar;
    LZSearchResultHostVC *_hostVC;
    LZSearchResultLivingVC *_livingVC;
    LZSearchResultHotVC *_hotVC;
    LZSearchResultIndexVC *_indexVC;
    LZSearchResultVM *_hostResultVM;
    LZSearchResultVM *_roomResultVM;
    PLUGameLiveListViewModel *_viewModel;
    LZSearchBar *_lzNewSearchBar;
    NSArray *_hotData;
    NSArray *_hostData;
    NSArray *_roomData;
}

@property(copy, nonatomic) NSArray *roomData; // @synthesize roomData=_roomData;
@property(copy, nonatomic) NSArray *hostData; // @synthesize hostData=_hostData;
@property(copy, nonatomic) NSArray *hotData; // @synthesize hotData=_hotData;
@property(retain, nonatomic) LZSearchBar *lzNewSearchBar; // @synthesize lzNewSearchBar=_lzNewSearchBar;
@property(retain, nonatomic) PLUGameLiveListViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) LZSearchResultVM *roomResultVM; // @synthesize roomResultVM=_roomResultVM;
@property(retain, nonatomic) LZSearchResultVM *hostResultVM; // @synthesize hostResultVM=_hostResultVM;
@property(retain, nonatomic) LZSearchResultIndexVC *indexVC; // @synthesize indexVC=_indexVC;
@property(retain, nonatomic) LZSearchResultHotVC *hotVC; // @synthesize hotVC=_hotVC;
@property(retain, nonatomic) LZSearchResultLivingVC *livingVC; // @synthesize livingVC=_livingVC;
@property(retain, nonatomic) LZSearchResultHostVC *hostVC; // @synthesize hostVC=_hostVC;
@property(retain, nonatomic) PLUPersonalCenterBar *tabBar; // @synthesize tabBar=_tabBar;
@property(retain, nonatomic) PLUSearchViewModel *searchVM; // @synthesize searchVM=_searchVM;
@property(copy, nonatomic) NSString *placeholderKey; // @synthesize placeholderKey=_placeholderKey;
@property(copy, nonatomic) NSString *key; // @synthesize key=_key;
- (void).cxx_destruct;
- (void)tapRefreshViewToRequestData;
- (void)reloadDataWithKey:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)clickSearchResultIndexWithKey:(id)arg1;
- (void)textFieldDidChange:(id)arg1;
- (void)personalCenterBar:(id)arg1 changeBarIndex:(long long)arg2;
- (void)cancel;
- (void)addTab;
- (void)addView;
- (void)didReceiveMemoryWarning;
- (void)isShowSearchTab;
- (void)isShowHotView;
- (void)requestHotData;
- (void)requestRoomData;
- (void)requestHostData;
- (void)searchViewRoll;
- (void)userDidLogin:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

