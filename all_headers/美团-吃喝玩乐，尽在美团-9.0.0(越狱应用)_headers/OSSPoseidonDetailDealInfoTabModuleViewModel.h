//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GCTabModuleViewModel.h"

@class NVModelBaseOsDealInfo;

@interface OSSPoseidonDetailDealInfoTabModuleViewModel : GCTabModuleViewModel
{
    _Bool _isUpdateGCView;
    NVModelBaseOsDealInfo *_dealInfo;
}

@property(nonatomic) _Bool isUpdateGCView; // @synthesize isUpdateGCView=_isUpdateGCView;
@property(retain, nonatomic) NVModelBaseOsDealInfo *dealInfo; // @synthesize dealInfo=_dealInfo;
- (void).cxx_destruct;
- (void)tabCellDidLoad:(id)arg1;
- (void)setupViewModel;
- (id)tabModules;

@end

