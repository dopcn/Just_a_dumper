//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TGStructedDetailsModuleViewModel.h"

@class NVModelBaseDeal;

@interface KTVTGDetailStructedDetailsModuleViewModel : TGStructedDetailsModuleViewModel
{
    _Bool _showKtvDealDetail;
    NVModelBaseDeal *_deal;
}

@property(nonatomic) _Bool showKtvDealDetail; // @synthesize showKtvDealDetail=_showKtvDealDetail;
@property(retain, nonatomic) NVModelBaseDeal *deal; // @synthesize deal=_deal;
- (void).cxx_destruct;
- (void)setupViewModel;
- (id)ga_label;
- (_Bool)needAutoModuleView;

@end

