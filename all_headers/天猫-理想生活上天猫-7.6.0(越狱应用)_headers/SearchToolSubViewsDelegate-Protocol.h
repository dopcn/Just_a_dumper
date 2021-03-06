//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SearchPriceRangeSilderDelegate-Protocol.h"
#import "SearchRecommedationsViewDelegate-Protocol.h"
#import "SearchResultSpellCheckViewDelegate-Protocol.h"
#import "TMCAddressRegionViewDelegate-Protocol.h"
#import "TMCRegionModuleViewDelegate-Protocol.h"
#import "TMSearchToolHeaderViewHasMenuDelegate-Protocol.h"

@class NSDictionary, TMCPersonalSettingViewData, TMCTextButtonViewData;

@protocol SearchToolSubViewsDelegate <TMCRegionModuleViewDelegate, TMCAddressRegionViewDelegate, SearchPriceRangeSilderDelegate, SearchRecommedationsViewDelegate, TMSearchToolHeaderViewHasMenuDelegate, SearchResultSpellCheckViewDelegate>

@optional
- (void)closeCoudDanView;
- (void)refreshWithParam:(NSDictionary *)arg1;
- (void)tmcPersonalSettingSwitchSetting:(TMCPersonalSettingViewData *)arg1;
- (void)tmcPersonalSettingJumpToH5:(TMCPersonalSettingViewData *)arg1;
- (void)tmcTextButtonDidPressed:(TMCTextButtonViewData *)arg1;
- (void)tmcModuleViewFrameChanged:(struct CGRect)arg1;
@end

