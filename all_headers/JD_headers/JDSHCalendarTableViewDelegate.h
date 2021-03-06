//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "JDFooterRefreshViewDelegate-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class JDSHCalendarActivityListViewModel, JDSHCalendarGiftsCellViewModel, JDSHCalendarRemindModel, JDSHCalendarSectionHeaderViewModel, JDSHCalendarViewController, NSArray, NSString;

@interface JDSHCalendarTableViewDelegate : NSObject <UITableViewDelegate, JDFooterRefreshViewDelegate>
{
    _Bool hasGiftCell;
    _Bool hasActivityCell;
    _Bool hasInventory;
    _Bool _didEndDrag;
    _Bool _triangleIsRemoved;
    JDSHCalendarViewController *_viewController;
    JDSHCalendarSectionHeaderViewModel *_sectionHeaderViewModel;
    JDSHCalendarGiftsCellViewModel *_giftCellViewModel;
    JDSHCalendarActivityListViewModel *_activityListViewModel;
    NSArray *_inventoryViewModelArray;
    JDSHCalendarRemindModel *_remindModel;
    NSArray *_configArray;
}

@property(nonatomic) _Bool triangleIsRemoved; // @synthesize triangleIsRemoved=_triangleIsRemoved;
@property(copy, nonatomic) NSArray *configArray; // @synthesize configArray=_configArray;
@property(nonatomic) _Bool didEndDrag; // @synthesize didEndDrag=_didEndDrag;
@property(retain, nonatomic) JDSHCalendarRemindModel *remindModel; // @synthesize remindModel=_remindModel;
@property(copy, nonatomic) NSArray *inventoryViewModelArray; // @synthesize inventoryViewModelArray=_inventoryViewModelArray;
@property(retain, nonatomic) JDSHCalendarActivityListViewModel *activityListViewModel; // @synthesize activityListViewModel=_activityListViewModel;
@property(retain, nonatomic) JDSHCalendarGiftsCellViewModel *giftCellViewModel; // @synthesize giftCellViewModel=_giftCellViewModel;
@property(retain, nonatomic) JDSHCalendarSectionHeaderViewModel *sectionHeaderViewModel; // @synthesize sectionHeaderViewModel=_sectionHeaderViewModel;
@property(nonatomic) __weak JDSHCalendarViewController *viewController; // @synthesize viewController=_viewController;
- (void).cxx_destruct;
- (void)updateFootViewScrollView:(id)arg1;
- (id)tableFooterViewFromScrollView:(id)arg1;
- (_Bool)footerRefreshViewDataSourceIsLoading:(id)arg1;
- (void)footerRefreshViewDidTriggerRefresh;
- (double)activityCellHeightForRowAtIndexPath:(id)arg1 CellViewModelList:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)updateDataModel:(id)arg1 RemindDataModel:(id)arg2;
- (id)initWithViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

