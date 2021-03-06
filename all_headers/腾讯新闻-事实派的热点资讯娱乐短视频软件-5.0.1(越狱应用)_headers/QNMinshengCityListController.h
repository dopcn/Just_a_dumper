//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QNRootViewController.h"

#import "CCarPanFloatViewBaseDelegate-Protocol.h"
#import "QNMinshengCityDistrictListViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSString, QNMinshengCityDistrictListView, QNMinshengCityListItem, UILabel, UITableView, UIView;

@interface QNMinshengCityListController : QNRootViewController <QNMinshengCityDistrictListViewDelegate, CCarPanFloatViewBaseDelegate, UITableViewDataSource, UITableViewDelegate>
{
    _Bool _shouldInteractiveNavigationGest;
    UITableView *_tableView;
    QNMinshengCityListItem *_cityListInfo;
    UILabel *_capitalBigShow;
    QNMinshengCityDistrictListView *_districtListView;
    UIView *_dMaskView;
}

@property(retain, nonatomic) UIView *dMaskView; // @synthesize dMaskView=_dMaskView;
@property(retain, nonatomic) QNMinshengCityDistrictListView *districtListView; // @synthesize districtListView=_districtListView;
@property(retain, nonatomic) UILabel *capitalBigShow; // @synthesize capitalBigShow=_capitalBigShow;
@property(retain, nonatomic) QNMinshengCityListItem *cityListInfo; // @synthesize cityListInfo=_cityListInfo;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)didSelectCityDistrictItem:(id)arg1;
- (void)panView:(id)arg1 endWithXoffset:(double)arg2;
- (void)panView:(id)arg1 translateXoffset:(double)arg2;
- (_Bool)qnNavigationController:(id)arg1 shouldInteractiveGestureRecognizerBegin:(id)arg2;
- (long long)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)showDistrictListView:(_Bool)arg1;
- (void)scroll2Top;
- (void)captialShowAnimation;
- (void)initCapitalBigShow;
- (void)show;
- (void)onClose:(id)arg1;
- (void)configBarButtons;
- (void)didReceiveMemoryWarning;
- (void)hideDistrictList;
- (void)viewDidLoad;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)themeChanged:(long long)arg1;
- (void)refreshCityList;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

