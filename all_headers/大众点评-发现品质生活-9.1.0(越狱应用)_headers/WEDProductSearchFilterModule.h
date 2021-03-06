//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NVBaseHoverTopModule.h"

#import "SEARCHBaseFilterViewControllerDelegate-Protocol.h"

@class NSString, WEDProductSearchDataEntity, WEDProductSearchFilterController;

@interface WEDProductSearchFilterModule : NVBaseHoverTopModule <SEARCHBaseFilterViewControllerDelegate>
{
    _Bool _needRefresh;
    WEDProductSearchDataEntity *_dataEntity;
    WEDProductSearchFilterController *_filterVC;
}

@property(retain, nonatomic) WEDProductSearchFilterController *filterVC; // @synthesize filterVC=_filterVC;
@property(nonatomic) _Bool needRefresh; // @synthesize needRefresh=_needRefresh;
@property(retain, nonatomic) WEDProductSearchDataEntity *dataEntity; // @synthesize dataEntity=_dataEntity;
- (void).cxx_destruct;
- (unsigned long long)linkTypeInSection:(long long)arg1;
- (void)didFilterSelected:(long long)arg1 withData:(id)arg2;
- (void)didFilterClicked:(long long)arg1;
- (void)searchProduct;
- (void)setupCellHeight;
- (void)setupCellContainerView;
- (void)moduleWillDisappear:(_Bool)arg1;
- (_Bool)shouldShow;
- (void)setupModule;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

