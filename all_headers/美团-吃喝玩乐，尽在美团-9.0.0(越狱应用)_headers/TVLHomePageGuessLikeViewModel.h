//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TPKHomeGuessLikeViewModel.h"

@class SAKCity;
@protocol TPKHomeGuessLikeServiceProtocol;

@interface TVLHomePageGuessLikeViewModel : TPKHomeGuessLikeViewModel
{
    id <TPKHomeGuessLikeServiceProtocol> _service;
    CDUnknownBlockType _titleItemGenerateBlock;
    CDUnknownBlockType _productItemGenerateBlock;
    CDUnknownBlockType _moreItemGenerateBlock;
    CDUnknownBlockType _loadingItemGenerateBlock;
    SAKCity *_sessionCity;
}

@property(retain, nonatomic) SAKCity *sessionCity; // @synthesize sessionCity=_sessionCity;
- (void)setLoadingItemGenerateBlock:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)loadingItemGenerateBlock;
- (void)setMoreItemGenerateBlock:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)moreItemGenerateBlock;
- (void)setProductItemGenerateBlock:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)productItemGenerateBlock;
- (void)setTitleItemGenerateBlock:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)titleItemGenerateBlock;
- (void)setService:(id)arg1;
- (id)service;
- (void).cxx_destruct;
- (void)hideLastCellBottomLine:(id)arg1;
- (id)createHomePageMoreItem:(id)arg1;
- (id)createMoreItem:(id)arg1;
- (id)transformDataToCellItem:(id)arg1 cellTemplateInfo:(id)arg2;
- (_Bool)shouldShow;
- (void)setupViewModel;

@end

