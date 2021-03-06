//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ChannelBaseVC.h"

@class ChannelV4Category, NSMutableArray;

@interface SquareTabVC : ChannelBaseVC
{
    _Bool _isFocusViewShowInScreen;
    _Bool _hideHotCategoryView;
    _Bool _loadingMore;
    NSMutableArray *_bannerDataArray;
    ChannelV4Category *_categrotyData;
    ChannelV4Category *_lastCategrotyData;
}

@property(nonatomic) _Bool loadingMore; // @synthesize loadingMore=_loadingMore;
@property(retain, nonatomic) ChannelV4Category *lastCategrotyData; // @synthesize lastCategrotyData=_lastCategrotyData;
@property(retain, nonatomic) ChannelV4Category *categrotyData; // @synthesize categrotyData=_categrotyData;
@property(nonatomic) _Bool hideHotCategoryView; // @synthesize hideHotCategoryView=_hideHotCategoryView;
@property(retain) NSMutableArray *bannerDataArray; // @synthesize bannerDataArray=_bannerDataArray;
@property _Bool isFocusViewShowInScreen; // @synthesize isFocusViewShowInScreen=_isFocusViewShowInScreen;
- (void).cxx_destruct;
- (_Bool)moreDataIsLoading:(id)arg1;
- (void)processingLoadMoreAction:(id)arg1;
- (_Bool)hasMoreDataInTableView:(id)arg1;
- (void)updateRecentListenData:(id)arg1;
- (void)onNotifyUserPreferredFontChange:(id)arg1;
- (void)onNotifyUserLanguageChanged:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)requestToPlayChannel:(id)arg1;
- (void)requestToShowChannel:(id)arg1;
- (void)didClickDarenFollowButton:(id)arg1;
- (void)didSortButton:(id)arg1;
- (void)didClickMoreBtn:(id)arg1;
- (void)didClickCategoryBtn:(id)arg1;
- (void)didClickFolderThemeView;
- (void)didClickContributionBtn;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)translateToCategoryItem:(id)arg1;
- (id)translateGroupItems:(id)arg1;
- (id)transtranslateGroupData:(id)arg1;
- (id)translateSquareItems:(id)arg1;
- (void)_channelSquareDataDidUpdate:(id)arg1;
- (void)reFreshWithCategory:(id)arg1 andIsForce:(_Bool)arg2;
- (void)reFreshWithCategoryId:(long long)arg1;
- (void)reFreshWithCategory:(id)arg1;
- (void)reFresh;
- (int)vcType;
- (void)addPlayChannelStat:(id)arg1;
- (void)willActiveCurrentTab;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;

@end

